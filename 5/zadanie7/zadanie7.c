#include <stdio.h>

int NWD(int u, int v) {
   if(u != v)
     return NWD(u > v ? u - v : u , v > u ? v - u : v);
   return u;
}

int NWW(int u, int v) {
    return (u * v) / NWD(u, v);
}

int main(int argc, char *argv[]) {
    int u, v;

    do {
        printf("Podaj u (u > 0): ");
        scanf("%d", &u);

        printf("Podaj v (v > 0): ");
        scanf("%d", &v);
    } while(u <= 0 || v <=0);

    printf("Najwieksza wspolna wielokrotnosc dla %d i %d to: %d", u, v, NWW(u,v));

	return 0;
}