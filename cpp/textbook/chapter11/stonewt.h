// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
    enum Mode { STONE, INT_POUNDS, FLOAT_POUNDS };
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Mode mode;
public:
    Stonewt(double lbs, Mode m = STONE);      // constructor from double
    Stonewt(int stn, double lbs, Mode m = STONE); // constructor from stone, lbs
    Stonewt();                     // default constructor
    friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator*(const Stonewt & s, double n);
    friend Stonewt operator*(double n, const Stonewt & s);
    void set_mode(Mode m); 
    ~Stonewt(); 
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif
