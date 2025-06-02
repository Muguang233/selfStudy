// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs, Mode m)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = m;
}

Stonewt::Stonewt(int stn, double lbs, Mode m)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = m;
}

Stonewt::Stonewt()   
{
    stone = 0;
    pds_left = 0.0;
    pounds = 0.0;
    mode = STONE;
}

void Stonewt::set_mode(Mode m)
{
    mode = m;
}
Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds + s2.pounds, s1.mode);
}

Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds - s2.pounds, s1.mode);
}

Stonewt operator*(const Stonewt & s, double n)
{
    return Stonewt(s.pounds * n, s.mode);
}

Stonewt operator*(double n, const Stonewt & s)
{
    return s * n; 
}


std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    switch (s.mode)
    {
        case Stonewt::STONE:
            os << s.stone << " stone, " << s.pds_left << " pounds";
            break;
        case Stonewt::INT_POUNDS:
            os << int(s.pounds) << " pounds (int)";
            break;
        case Stonewt::FLOAT_POUNDS:
            os << s.pounds << " pounds (float)";
            break;
        default:
            os << "Invalid mode";
            break;
    }
    return os;
}
