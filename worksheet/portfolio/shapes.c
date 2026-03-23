
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
    // 
    float 
}       
float triangleArea( Triangle t ){

}

bool samePoint( Point p1, Point p2 ){

}         
bool pointInLine( Point p, Line l){

}          
bool pointInTriangle( Point p, Triangle t ){

} 
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
