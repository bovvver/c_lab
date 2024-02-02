#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(double = 0.0, double = 0.0, double = 0.0);
    ~Point(){}

    double getX();
    double getY();
    double getZ();

    void setX(double x);
    void setY(double y);
    void setZ(double z);
private:
    double x, y, z;
};
#endif