#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    double x, y;
    printf("Введите x,y: ");
    scanf("%lf %lf", &x, &y);

    if ((x*x + (y*y)/4 <= 1) || ((x*x)/4 + y*y <= 1)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }
    return 0;
}