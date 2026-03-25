// Joseph Butcher-Johns
//ID: 201948424
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    // implementation
    p.x = x;
    p.y = y;
    return p;
}

Line makeLine(Point p1,  Point p2 ){
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle (Point p1,  Point p2 ,Point p3 ){
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}


float lineLength( Line l ){ 
    // distance formula 
    float p1a = l.p[0].x - l.p[1].x;
    float p2a = l.p[0].y - l.p[1].y;
    float length = sqrt((p1a * p1a) + (p2a *p2a));
    return length;
}       


float triangleArea( Triangle t ){
    // area = 1/2(x1(y2-y3) + x2(y3-y1) + x3(y1-y2))
    float x1 = t.p[0].x;
    float y1 = t.p[0].y;
    float x2 = t.p[1].x;
    float y2 = t.p[1].y;
    float x3 = t.p[2].x;
    float y3 = t.p[2].y;
    float area = 0.5f * ((x1 * (y2-y3)) + (x2 * (y3-y1)) + (x3 * (y1-y2)));
    return -area;
}

bool samePoint(Point p1, Point p2) {
    // fabsf should use the absolute value with floats
    return (fabsf(p1.x - p2.x) < 1.0e-6) && (fabsf(p1.y - p2.y) < 1.0e-6);
}
// following functions i decided to use the samePoint to keep it simple as it is essentially checking the same thing 
bool pointInLine(Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t) {
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
