#ifndef PUNKT_H
#define PUNKT_H
class Punkt {
public:
    Punkt(int, int);
    void ustaw(int, int);
    void przesun(int, int);
    void pokaz() const;
private:
    int x, y;
};
#endif