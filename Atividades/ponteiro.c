#include <stdio.h>
#include <stdlib.h>

/*Ponteiro*/

void main (){

    int *p1, *p2, *p3;
    int n1, n2, n3;

    n1= 5;
    n2= 6;
    n3= 7;

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;

    printf ("%d \n", n1);
    printf("%d \n", n2);
    printf("%d \n", n3); 
}
void modifica(int *p1, int *p2, int *p3) { 
    *p1 = *p1 + 100;
    *p2 = *p2 + 100;
    *p3 = *p3 + 100;
    

    printf ("%d \n", *p1);
    printf("%d \n", *p2);
    printf("%d \n", *p3); 
    
}
    
    

