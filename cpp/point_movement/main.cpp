#include <iostream>

using namespace std;

class Point {
public:
    Point(double initialX = 0.0, double initialY = 0.0, double step = 1.0);
    void move(char direction);
    void show() const;

private:
    double x, y;
    const double jump;
};

Point::Point(double initialX, double initialY, double step) : jump(step) {
    x = initialX;
    y = initialY;
}

void Point::move(char direction) {
    switch (tolower(direction)) {
        case 'u':
            y += jump;
            break;
        case 'd':
            y -= jump;
            break;
        case 'r':
            x += jump;
            break;
        case 'l':
            x -= jump;
            break;
        default:
            cout << "Invalid direction. Acceptable values are 'u', 'd', 'l', or 'r'." << endl;
    }
}

void Point::show() const {
    cout << "Jump = " << jump << " x = " << x << " y = " << y << endl;
}

int main() {
    double initialX, initialY, step;
    
    cout << "Enter initial x coordinate: ";
    cin >> initialX;

    cout << "Enter initial y coordinate: ";
    cin >> initialY;

    cout << "Enter step size: ";
    cin >> step;

    Point newPoint(initialX, initialY, step);

    cout << "Initial data" << endl;
    newPoint.show();

    char direction;

    while (true) {
        cout << "u - up, d - down, l - left, r - right" << endl;
        cout << "Which direction do you want to move? Enter 'u', 'd', 'l', or 'r'. Enter 'q' to quit: ";
        cin >> direction;

        if (direction == 'q') {
            break;
        }

        newPoint.move(direction);

        cout << "New position" << endl;
        newPoint.show();
    }

    return 0;
}
