#include <iostream>

using namespace std;

class Point {
public:
    Point(int, int);
    void set(int, int);
    void move(int, int);
    void show() const;
private:
    int x, y;
};

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::move(int da, int db) {
    x = x + da;
    y = y + db;
}

void Point::show() const {
    cout << "Point: x = " << x << ", y = " << y << endl;
}

class Line {
public:
    explicit Line(int, int, int, int);
    ~Line();
    void show() const;
    void move(int, int);
private:
    Point start;
    Point end;
};

Line::Line(int ax, int ay, int bx, int by) : start(ax, ay), end(bx, by) {}

Line :: ~Line(){}

void Line::show() const {
    cout << "Line:" << endl;
    cout << "Start: ";
    start.show();
    cout << "End: ";
    end.show();
    cout << endl;
}

void Line::move(int da, int db) {
    this->start.move(da,db);
    this->end.move(da,db);
}

int main() {
    Line line(2, 8, 4, 6);
    line.show();

    line.move(8,2);
    line.show();

    return 0;
}
