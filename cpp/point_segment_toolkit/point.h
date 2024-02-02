#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int, int);
    void set(int, int);
    void move(int, int);
    void show() const;

private:
    int x, y;
};

#endif
