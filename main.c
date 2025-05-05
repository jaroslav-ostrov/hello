#include <stdio.h>
#include <stdlib.h> <stdlib.h>
void second (const int num, const char *sim  ) {
    printf ("%s see you %i !!! \n",sim , num );
}
int main(const int argc, const char** argv) {
    
    const char* lang = "C";
     printf("Hello and welcome to %s\n",  lang);

    for (int i = 1; i <= 5; i++) {

         printf( "i = %i\n " , i  );
    }
second ( argc, argv[1]  );
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
    second ( argc, argv[1]  ) ;
return 0;
}