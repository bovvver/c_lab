#include <stdio.h>

int main() {
    int firstNumber = 0, secondNumber = 1, temp = 0;

    for(int i = 0; i <= 50; i++){
        if(i <= 1) {
            temp = i;
        } else {
            temp = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = temp;
        }
        printf("%d ", temp);
    }

    return 0;
}
