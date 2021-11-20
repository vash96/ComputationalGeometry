#include <vector>
#include "point.cpp"

class convex_hull {
private:
    std::vector<point_2d<float>> points;
    std::vector<std::size_t> hull;

public:
    convex_hull(std::vector<point_2d<float>>) : points() { }

};