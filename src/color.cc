// src/color.cc

#include "include/color.hh"

litchi::color::color()
{
    this->r = 0.0, this->g = 0.0, this->b = 0.0;
}

litchi::color::color(f64 r, f64 g, f64 b)
{
    this->r = r, this->g = g, this->b = b;
}

inline litchi::color white()
{
    return litchi::color(1.0, 1.0, 1.0);
}
inline litchi::color black()
{
    return litchi::color(0.0, 0.0, 0.0);
}