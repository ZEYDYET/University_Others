#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    double x, y;
    printf("Введите x,y: ");
    scanf("%lf %lf", &x, &y);

    if ((abs(x) - y <= 1) && (x >= -1 && x <= 1) && (y >= -1 && y <= 2)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }
    return 0;
}