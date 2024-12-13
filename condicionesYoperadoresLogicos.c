/*
Condiciones y operadores lógicos

*/

#include <stdio.h>

void numLaborable(int dia){
    switch(dia){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("laborable");
            break;
        case 6:    
        case 7:    
            printf("no laborable");
            break;
        default:
            printf("No es un dia laborable");
            break;    
    }
}

int main()
{

    numLaborable(7);
    return 0;
}