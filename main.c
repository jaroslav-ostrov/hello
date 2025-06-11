#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    double eur ;
    float usd  ;  // scalar
    char str[50]; // array - pointer to address
    char str1[50]; // array - pointer to address
    char chr = 0; // = byte - 8 bit
    /*int i_arr[10];
    float f_arr[2];
    float f_arr2[2];
    double d_arr[2];
    double d_arr2[2];
    int size_c = sizeof(i_arr[2] ) ;
    int size_f = sizeof(f_arr[2] ) ;
    int size_d= sizeof(d_arr[2] ) ;*/

    scanf("%s", str);
    printf("str = %s\n", str);
    size_t size = strlen(str);
    for (int i = 0; i < size; i++) {

        printf("str[%d] = %c\n", i, str[i]);
    }

    /*chr = str[0];
     // strtol(str+1,&str,10);
    double rate = 1.12 ;
    eur = usd / rate ;
    printf("Accepted usd: %f\n ",usd ) ;
    printf("Accepted eur: %f\n ",eur) ;*/
    return 0;
}
