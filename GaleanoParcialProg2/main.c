#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char string[],char letra);

int main()
{
    char cadena[20];
    char letra;
    int contador;

    printf("Ingrese nombre:");
    fflush(stdin);
    gets(cadena);
    printf("Ingrese letra a contar: ");
    fflush(stdin);
    scanf("%c",&letra);

    contador=contarCaracteres(cadena,letra);

    if(contador==0)
    {
        printf("\nLa letra '%c' no aparece\n",letra);
    }else if(contador==1)
    {
        printf("\nLa letra '%c' aparece una vez\n",letra);
    }else
    {
        printf("\nLa letra '%c' aparece %d veces\n",letra,contador);
    }


    return 0;
}

int contarCaracteres(char string[],char letra)
{
    int i=0;
    int contador=0;

    while(string[i]!='\0')
    {
        if(string[i]==letra)
        {
            contador++;
        }
        i++;
    }

    return contador;
}
