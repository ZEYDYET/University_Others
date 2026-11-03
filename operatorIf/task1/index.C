#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;
    
    printf("Введите x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((x*x + y*y <= 1) || (x >= 0 && y >= 0 && x + y <= 2)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}