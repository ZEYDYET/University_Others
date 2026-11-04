#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;

    printf("Введите значение x, y: ");
    scanf("%lf %lf", &x, &y);

   if ((x >= 0 && x <= 2 && y >= 0 && y <= 2) && !(x >= 0 && x <= 1 && y >= 0 && y <= 1)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}