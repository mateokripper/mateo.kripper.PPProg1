#include <stdio.h>
#include <stdlib.h>


void invertirCadena (char cadena2[]);
int main()
{
    char cadena [20]= "Juan";
    invertirCadena(cadena);
    return 0;
}
void invertirCadena (char cadena2[])
{
    int i = 0;
    for (i=strlen(cadena2); i>=0; i--){ //utilizo strlen para no recorrer de caracter en caracter
        printf("%c", cadena2[i]);
    }
}





