#include <iostream>
#include <stdio.h>

using namespace std;

void Intercambiar(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}

void imprimir(int lista[], int n)
{
    for(int i=0;i<n;i++)
        cout<<lista[i]<<", ";
    cout<<endl;
}

void MayorAdelante(int lista[], int n, int ind)
{
    for(int i=n-1;i>ind;i--)
       if(lista[i]>lista[i-1])
            Intercambiar(lista[i],lista[i-1]);
}

void ordenar(int lista[], int n, int ind)
{
    if(ind<n)
    {
        MayorAdelante(lista,n,ind);
        ordenar(lista,n, ind+1);
    }
}

int main()
{
    int numeros[]={3,6,4,5,8,10,0,2};
    cout<<"numeros ingresados: ";
    imprimir(numeros,8);
    ordenar(numeros, 8, 0);
    cout<<"numeros ordenados: ";
    imprimir(numeros,8);
}
