#include <stdio.h>

int main() {  //Task.1
    int a, min = -4, max = -1;
    scanf("%d", &a);
    printf("%d", min <= a && a <= max);  //если число в диапазоне, то выводит 1, если не в диапазона, то выводит 0
    int b;  //Task.2
    scanf("%x", &b);
    printf("%d", (b >> 15) & 1u);  //Выводит в консоль буквальное значение указанного бита для числа
    return 0;

}