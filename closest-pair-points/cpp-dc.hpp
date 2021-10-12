//
//  cpp-dc.hpp
//  closest-pair-points
//
//  Created by Sy Tran on 10/5/21.
//

#ifndef cpp_dc_hpp
#define cpp_dc_hpp

#include <stdio.h>
#include "cpp-bf.hpp"

class ClosestPairPointsDivideAndConquer {
public:
    ClosestPairPointsDivideAndConquer();
    
    void insert(Point &p);
    
    std::pair<Point, Point> closest_points();
    
    int sqr_distance(Point &p1, Point &p2);
    
private:
    std::vector<Point> _points;
};

#endif /* cpp_dc_hpp */
