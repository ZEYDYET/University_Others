#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    double x, y;
    printf("Введите x,y: ");
    scanf("%lf %lf", &x, &y);

    if (((pow(x, 2)/9) + (pow(y, 2)/4) <= 1 && y >= 0) || (x >= -1 && x <= 1 && y >= -2 && y <= 0)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }
    return 0;
}