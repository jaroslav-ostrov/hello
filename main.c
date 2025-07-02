#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(int argc, char *argv[]) {
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

} */
void* append(short* data, size_t *length, size_t *capacity, short value)
{
    if (*length >= *capacity) {
        *capacity *= 2;
        //short *ar = malloc(sizeof(short) * 2 * *capacity);
        short* ar = realloc (data, sizeof(short) * *capacity);
        if (ar == NULL)
            return data ;


        data = ar;

        (*capacity) *= 2;
        memcpy(ar, data, *length *(sizeof(short)));

       /* for (int i = 0; i < *length; ++i) ;
        ar[i] = data[i];
    */
        free(data);
        data = ar;

    }
    data[*length] = value;
    (*length)++;

    return data ;





 /*char *ar = malloc(10) ; //NULL
    int* ptr_int = malloc (sizeof(int));
    short *ptr_short = malloc (7 * sizeof(short));
    free(ar);
    free(ptr_int);
    free(ptr_short); */
   size_t capacity = 10;
    size_t length =0;
    short *date = malloc(sizeof(short) * capacity);

    for (int i = 0; i < 11; ++i) ;
    date= append(data, *&length, *&capacity, rand () %40 - 20) ;
     for (int i = 0; i < length; ++i) ;
    printf("%d ", data[i]) ;
    free(data);

}