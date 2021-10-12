//
//  cpp-bf.cpp
//  closest-pair-points
//
//  Created by Sy Tran on 10/3/21.
//

#include "cpp-bf.hpp"

ClosestPairPointsBruteforce::ClosestPairPointsBruteforce() {
    _points.clear();
}

void ClosestPairPointsBruteforce::insert(Point& p) {
    _points.push_back(p);
}

int ClosestPairPointsBruteforce::sqr_distance(Point &p1, Point &p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}

std::pair<Point, Point> ClosestPairPointsBruteforce::closest_points() {
    int min_d = INF;
    std::pair<Point, Point> cp;
    for (size_t i = 0; i < _points.size(); i++) {
        Point p = _points[i];
        for (size_t j = 0; j < i; j++) {
            Point p1 = _points[j];
            int d = sqr_distance(p1, p);
            if (d < min_d) {
                min_d = d;
                cp = {p1, p};
            }
        }
    }
    return cp;
}
