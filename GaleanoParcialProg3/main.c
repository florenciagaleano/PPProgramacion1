#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    int procesador;
    char marca[20];
    float precio;
}eNotebook;

void ordenar(eNotebook vec[],int tam);

int main()
{
    eNotebook notebooks[5]={
                                {1,2,"Lenovo",35000},
                                {2,5,"samsung",130000},
                                {3,5,"Mac",100000.30},
                                {4,2,"Lenovo",25000},
                                {5,2,"Samsung",40000},
                                };

    ordenar(notebooks,5);
    printf(" Id    Procesador     Marca      Precio\n");
    for(int i=0;i<5;i++)
    {
        printf("  %d        %d      %10s    %.2f\n",notebooks[i].id,notebooks[i].procesador,notebooks[i].marca,notebooks[i].precio);
    }


    return 0;
}

void ordenar(eNotebook vec[],int tam)
{
    eNotebook auxNotebook;

    for(int i=0;i<tam-1;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(stricmp(vec[i].marca,vec[j].marca)>0)
            {
                auxNotebook=vec[i];
                vec[i]=vec[j];
                vec[j]=auxNotebook;
            }else if(stricmp(vec[i].marca,vec[j].marca)==0&&vec[i].precio>vec[j].precio)
            {
                auxNotebook=vec[i];
                vec[i]=vec[j];
                vec[j]=auxNotebook;
            }
        }
    }
}
