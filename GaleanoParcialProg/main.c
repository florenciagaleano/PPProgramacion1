#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);

int main()
{
    float precio;

    printf("Ingrese precio: ");
    scanf("%f",&precio);

    printf("\n\nSu precio con el 5 de descuento es %.3f: \n\n",aplicarDescuento(precio));

    return 0;
}

float aplicarDescuento(float precio)
{
    float precioDescuento;

    precioDescuento=precio-precio*5/100;

    return precioDescuento;
}


