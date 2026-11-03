#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;

    printf("Введите x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((x >= -1 && x <= 1 && y >= -1 && y <= 1) || (x >= -2 && x <= 0 && y >= -2 && y <= 0)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}