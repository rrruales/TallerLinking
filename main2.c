/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include "vector.h"

/*int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];*/

int main() 
{
    printf("Ingresar valor para vector 1.1: \n");
    vector v1;
    scanf("%d",&v1->uno);
    printf("Ingresar valor para vector 1.2: \n");
    scanf("%d",&v1->dos);
    printf("Ingresar valor para vector 2.1: \n");
    vector v2;
    scanf("%d",&v2->uno);
    printf("Ingresar valor para vector 2.2: \n");
    scanf("%d",&v2->dos);
    vector v3;
    addvec(v1, v2, v3, 2);
    printf("El resultado de addvec es:\n");
    printf("z = [%d %d]\n", v3->uno, v3->dos);
    multvec(v1, v2, v3, 2);
    printf("El resultado de multvec es:\n");
    printf("z = [%d %d]\n", v3->uno, v3->dos);
    return 0;
}
/* $end main2 */
