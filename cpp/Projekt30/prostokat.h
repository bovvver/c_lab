#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include "odcinek.h"

class Prostokat : public Odcinek {
public:
    Prostokat(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Prostokat(){}
};
#endif