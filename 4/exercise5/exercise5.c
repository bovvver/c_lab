#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int pierwszaLiczba = 0, drugaLiczba = 1, temp = 0;

    for(int i=0; i<=50; i++){
        if(i <= 1) {
            temp = i;
        } else {
            temp = pierwszaLiczba + drugaLiczba;
            pierwszaLiczba = drugaLiczba;
            drugaLiczba = temp;
        }
        printf("%d ", temp);
    }

    return 0;
}
