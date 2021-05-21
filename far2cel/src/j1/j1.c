#include <stdio.h>

int main(){
    float far, cel;
    while(getchar() != '\n');
        scanf("%d", &far);
        cel = (far-32.0) * (5.0 / 9.0);
        printf("Celcius: %6.1f\n", cel);
}