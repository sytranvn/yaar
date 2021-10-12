//
//  cpp-bf.hpp
//  closest-pair-points
//
//  Created by Sy Tran on 10/3/21.
//

#ifndef cpp_bf_hpp
#define cpp_bf_hpp

#include <stdio.h>
#include <utility>
#include <vector>

#define INF 0x7FFFFFFF

typedef struct {
    int x;
    int y;
} Point;

class ClosestPairPointsBruteforce {
public:
    ClosestPairPointsBruteforce();
    
    void insert(Point &p);
    
    std::pair<Point, Point> closest_points();
    
    int sqr_distance(Point &p1, Point &p2);
    
private:
    std::vector<Point> _points;
};

#endif /* cpp_bf_hpp */
