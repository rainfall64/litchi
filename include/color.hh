// include/color.hh

#ifndef LITCHI_COLOR_HH
#define LITCHI_COLOR_HH

#include "utils/numeric_types.hh"

namespace litchi
{
class color
{
public:
    f64 r, g, b, a;
    color() : r(0.0), g(0.0), b(0.0), a(1.0) { }
    color(f64 r, f64 g, f64 b) : r(r), g(g), b(b), a(1.0) { }
    color(f64 r, f64 g, f64 b, f64 a) : r(r), g(g), b(b), a(a) { }
    color(f64 k) : r(k), g(k), b(k), a(1.0) { }
    color(f64 k, f64 a) : r(k), g(k), b(k), a(a) { }

    // Destructor
    ~color() = default;

    // Arithmetic Operations
    color operator+(const color& other) const;
    color operator-(const color& other) const;
    color operator*(f64 scalar) const;
    color operator/(f64 scalar) const;

    // Comparison Operations
    bool operator==(const color& other) const;
    bool operator!=(const color& other) const;

    // Color Manipulation
    color clamp() const;
    color toGrayscale() const;

    // Interpolation
    static color lerp(const color& start, const color& end, f64 t);

    // Output
    void print() const;

    // Utilities
    f64 red() const;
    f64 green() const;
    f64 blue() const;
    f64 alpha() const;

    u8 r255() const;
    u8 g255() const;
    u8 b255() const;
    u8 a255() const;
    
protected:
private:
};
}

#endif // !LITCHI_COLOR_HH