#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;

    printf("Введите значение x, y: ");
    scanf("%lf %lf", &x, &y);

   if ((x*x + y*y == 16 || x >= -3 && x <= 3 && y >= -3 && y <= 3) && !(x*x + y*y <= 4)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}