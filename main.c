#include <stdio.h>

void second (const int num, const char *sim  ) {
    printf ("%s see you %i !!! \n",sim , num );
}
int main() {
    
    const char* lang = "C";
     printf("Hello and welcome to %s\n",  lang);

    for (int i = 1; i <= 5; i++) {

         printf( "i = %i\n " , i  );
    }
second ( 1000000000," Vladimer "  ) ;

}