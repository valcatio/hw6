#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z;
    puts("введите x:");
    scanf("%lf", &x);
    puts("введите y:");
    scanf("%lf", &y);
    puts("введите z:");
    scanf("%lf", &z);
    if ((x > -1) && (x < 1)) {
        puts("х принадлежит интервалу");
    }
    else {
        puts("х не принадлежит интервалу");
    }
    if ((y > -1) && (y < 1)) {
        puts("y принадлежит интервалу");
    }
    else {
        puts("y не принадлежит интервалу");
    }
    if ((z > -1) && (z < 1)) {
        puts("z принадлежит интервалу");
    }
    else {
        puts("z не принадлежит интервалу");
    }
}