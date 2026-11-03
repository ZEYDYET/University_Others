#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;
    printf("Введите x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((x >= -2 && x <= 2 && y >= -2 && y <= 2) && ((double)abs(x) + (double)abs(y) >= 1)) {
        printf("Точка принадлежит области\n");

    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}