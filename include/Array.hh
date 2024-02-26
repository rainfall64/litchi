// include/Array.hh

#ifndef LITCHI_ARRAY_HH
#define LITCHI_ARRAY_HH

#include <algorithm> // for std::copy
#inlcude <cassert> // for assert

#include "utils/numeric_types.hh"

template < typename T, u64 N >
class Array
{
public:
    T data[N];

    T& operator[](u64 index)    
    {
        return data[index];
    }

    const T& operator[](u64 index) const
    {
        return data[index];
    }

    u64 size() const
    {
        return N;
    }

    // Copy assignment operator
    Array& operator=(const Array& other)
    {
        if ( this != &other )
        {
            std::copy(std::begin(other.data), std::end(other.data), std::begin(data));
        }
        return *this;
    }

    // Move assignment operator
    Array& operator=(Array&& other) noexcept
    {
        if ( this != &other )
        {
            data = std::move(other.data);
        }
        return *this;
    }

    // Initializer list assignment operator
    Array& operator=(std::initializer_list < T > ilist)
    {
        assert(ilist.size() == N);
        std::copy(ilist.begin(), ilist.end(), data);
        return *this;
    }
};

#endif // !LITCHI_ARRAY_HH