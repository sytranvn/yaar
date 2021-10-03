#include <vector>

typedef struct {
    int x;
    int y;
} Point;

void printPoint(Point &p) {
    printf("x:%d y:%d", p.x, p.y);
}


int main() {
    std::vector<Point> points;
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        Point p;
        scanf("%d %d", &p.x, &p.y);
        points.push_back(p);
    }
    
    for (int i = 0; i < n; i++) {
        printPoint(points[i]);
        printf("\n");
    }
}
