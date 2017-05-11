#include <iostream>
#include <stdio.h>


using namespace std;

int pasRef(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int pasPunt(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int pasPP(int **a, int **b)
{
    int temp=**a;
    **a=**b;
    **b=temp;
}

int main()
{
    int a=2;
    int b=3;
    int *a1=&a;
    int *b1=&b;
    int **a2=&a1;
    int **b2=&b1;
    pasRef(a,b);
    pasPunt(a1,b1);
    pasPP(a2,b2);
    cout<<a<<" | "<<b;

    return 0;

}
