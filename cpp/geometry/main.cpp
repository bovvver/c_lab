#include<iostream>
#include "cuboid.h"

using namespace std;

Cuboid insertCuboid();

int main() {
    Cuboid cuboid = insertCuboid();
    cout << endl << "Volume: " << cuboid.calculateVolume() << endl;
    cout << "Surface Area: " << cuboid.calculateSurfaceArea() << endl;

    return 0;
}

Cuboid insertCuboid() {
    double x1, x2, y1, y2, z1, z2;
    cout << "== Point 1 ==" << endl;

    cout << "Enter x: ";
    cin >> x1;
    cout << "Enter y: ";
    cin >> y1;
    cout << "Enter z: ";
    cin >> z1;

    cout << endl << "== Point 2 ==" << endl;

    cout << "Enter x: ";
    cin >> x2;
    cout << "Enter y: ";
    cin >> y2;
    cout << "Enter z: ";
    cin >> z2;

    Cuboid cuboid(x1, y1, z1, x2, y2, z2);
    return cuboid;
}