#include <stdbool.h>
#include <stdio.h>


int main() {
    const char* lang = "C";
    printf("Hello and welcome to %s\n",  lang);

    for (int i = 1; i <= 64; i=i*2) {
        //continue;
        //break;
        printf( "0. i = %i\n " , i  );
    }

    int var = 1;
    while ( var <= 4) {
        printf( "1. i = %i\n " , var  );

        switch (var) {
            case 1:
                printf( "switch 4. i = %i\n " , var  );
                break;
            case 2:
                printf( "switch 5. i = %i\n " , var  );
                break;
            default:
                printf( "switch 6. i = %i\n " , var  );
        }
        var++;
    }

    var = 0 ;
    do {
        int x = 1 ;

        if (var == 1) {
            printf( "do 4. i = %i\n " , var  );
        } else if (var == 2)  {
            printf( "do 5. i = %i\n " , var  );
        } else {
            printf( "do 6. i = %i\n " , var  );
        }
        var++ ;
    } while ( var <= 4 );
    char a;


}
