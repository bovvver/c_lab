#ifndef PUNKT_H
#define PUNKT_H

class Punkt {
public:
    Punkt(double = 0.0, double = 0.0, double = 0.0);
    ~Punkt(){}
    
    double pobierz_x();
    double pobierz_y();
    double pobierz_z();

    void ustaw_x(double x);
    void ustaw_y(double y);
    void ustaw_z(double z);
private:
    double x, y, z;
};
#endif