#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0));     // seed random number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    double target, dstep;
    int trials;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        cout << "Enter number of trials: ";
        if (!(cin >> trials) || trials <= 0)
        {
            cout << "Invalid trial count.\n";
            break;
        }

        unsigned long min_steps = 0, max_steps = 0, total_steps = 0;

        for (int t = 0; t < trials; ++t)
        {
            result.reset(0.0, 0.0);
            unsigned long steps = 0;

            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            if (t == 0)
            {
                min_steps = max_steps = steps;
            }
            else
            {
                if (steps < min_steps)
                    min_steps = steps;
                if (steps > max_steps)
                    max_steps = steps;
            }

            total_steps += steps;
        }

        cout << "\nAfter " << trials << " trials:\n";
        cout << "Minimum steps = " << min_steps << endl;
        cout << "Maximum steps = " << max_steps << endl;
        cout << "Average steps = " << static_cast<double>(total_steps) / trials << endl;

        cout << "\nEnter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    return 0;
}