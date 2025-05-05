#include <stdio.h>
#include <stdbool.h>

int main() {
    // const short a = 0;
    float x, y , res;
    scanf("%f",&x);
    scanf("%f",&y);
    //long int
    // print - Ld
    res = x / y;
    printf("Result : %.2f\n", res );

    char s = 'S';
    printf("%c\n", s);
//    bool isHasCar = true;
    // -32 768 - +32 768
    //   short s = 6;
    // 0 - +64 000
    //unsigned short a = 5;
    // -2 ml - +2 ml
 //   int x = 6, y = 15, res;
    //0 - +4ml
 //   unsigned int a1 = 6;
    //0 - +16000000
//    long a2 = 5;
//   unsigned long a3 = 6;
    // 0 - +32 000 000
 //   long long a4 = 5;
    // 0 - +70 000 000
//unsigned long long a5 = 6;
    // для чисел с точкой и с деапозоном 9 чисел после точки
//    float a6 = 4.5f;
    //в два раза больше деапозон чем у float
//    double a7 = 4.5f;
    //lond double

 //   char sym = 'f';

    x += 5;

    res = x + y;
    res = x - y;
    res = x / y;
    printf("Variable: %d + %d = %d", x, y, res);