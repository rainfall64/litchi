// include/point2.hh

#ifndef LITCHI_POINT2_HH
#define LITCHI_POINT2_HH

#include <iostream>
#include <cmath>

#include "utils/numeric_types.hh"

namespace litchi
{
class point2
{
public:
    f64 x, y;

    // Constructors
    point2() : x(0.0), y(0.0)  { }
    point2(f64 i) : x(i), y(i) { }
    point2(f64 x, f64 y) : x(x), y(y) { }

    // Destructor
    ~point2() = default;

    // Utilities
    inline f64 euclidean_distance_to(const point2& other);
    inline f64 manhattan_distance_to(const point2& other);


    // Overloading ostream for easy printing
    friend std::ostream& operator<<(std::ostream& os, const point2& p);
    

};
}

#endif