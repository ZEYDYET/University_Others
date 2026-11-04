#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double x, y;
    
    printf("Введите x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((x <= 0 && x*x + y*y <= 4) || (x >= 0 && x <= 2 && y >= -1 && y <= 1)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}