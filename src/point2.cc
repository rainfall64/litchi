// src/point2.Constructors

#include "include/point2.hh"

// Constructors
litchi::point2::point2() : x(0.0), y(0.0) { }
litchi::point2::point2(f64 i) : x(i), y(i) { }
litchi::point2::point2(f64 x, f64 y) : x(x), y(y) { }

// Copy constructor
litchi::point2::point2(const point2& other) : x(other.x), y(other.y) { }

// Assignment operator
litchi::point2& litchi::point2::operator=(const point2& other)
{
    if ( this != &other )
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}

// Utilities
inline f64 litchi::point2::euclidean_distance_to(const point2& other)
{
    f64 dx = this->x - other.x;
    f64 dy = this->y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

inline f64 litchi::point2::manhattan_distance_to(const point2& other)
{
    f64 dx = std::abs(this->x - other.x);
    f64 dy = std::abs(this->y - other.y);
    return dx + dy;
}



// Overloading the output operator for easy printing
std::ostream& litchi::operator<<(std::ostream& os, const litchi::point2& p)
{
    os << '(' << p.x << ',' << p.y << ')';
    return os;
}