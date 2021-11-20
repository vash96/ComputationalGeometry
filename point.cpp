#include <utility>

template<typename T, std::size_t D>
struct point {
    std::array<T, D> coordinates;
};


template<typename T>
using point_2d = point<T, 2>;