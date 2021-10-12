#include <vector>
#include "cpp-bf.hpp"

int main() {
    int n;
    ClosestPairPointsBruteforce* cpp = new ClosestPairPointsBruteforce();
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        Point p;
        scanf("%d %d", &p.x, &p.y);
        cpp->insert(p);
    }
    
    std::pair<Point, Point> result = cpp->closest_points();
    
    printf("<%d; %d> , <%d; %d>", result.first.x, result.first.y, result.second.x, result.second.y);
}
