#include <stdio.h>


int main(int argc, char *argv[]) {
    int g = 0;
    int ag[11];
    ag[0] = 1;
    ag[9] = 99;
    ag[10] = 110;
    int b=ag [0];

    // стек используется для хранение переменных при вызове функций

    const char* lang = "C";
     printf("Hello and welcome to %s\n",  lang);

    for (int i = 0; i <= 10; i++) {

         printf( "ag[%i] = %i\n" ,i, ag[i]   );
    }

    return 0;

}