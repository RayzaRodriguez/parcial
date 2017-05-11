#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cctype>

using namespace std;

void convertir(char cad[],int lista[])
{
    char temp=cad[0];
    for(int x=0;temp=='\0';temp=cad[++x])
    {
        switch (temp)
        {
            case '0': lista[x]=0; break;
            case '1': lista[x]=1; break;
            case '2': lista[x]=2; break;
            case '3': lista[x]=3; break;
            case '4': lista[x]=4; break;
            case '5': lista[x]=5; break;
            case '6': lista[x]=6; break;
            case '7': lista[x]=7; break;
            case '8': lista[x]=8; break;
            case '9': lista[x]=9; break;
            default: lista[x]=-1;break;
        }
    }
}
int main()
{
    char cad[]="156.32";
    int lista[6];
    convertir(cad[],lista[]);
    for(int i=0;i<6;i++)
        cout<<lista[i]<<" ";
    return 0;
}
