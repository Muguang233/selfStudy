#include <iostream>
using namespace std;

int main() {
  int input;
  cout << "Enter the number of seconds: ";
  cin >> input;
  const int day_in_sec = 86400;
  const int hour_in_sec = 3600;
  const int min_in_sec = 60;
  int day = input/day_in_sec;
  int hour = (input-(day*day_in_sec)) / hour_in_sec;
  int min = (input-(day*day_in_sec)-(hour*hour_in_sec)) / min_in_sec;
  int sec = (input-(day*day_in_sec)-(hour*hour_in_sec)-(min*min_in_sec));
  cout << day << " " << hour << " " << min << " " << sec << endl;
  return 0;
}