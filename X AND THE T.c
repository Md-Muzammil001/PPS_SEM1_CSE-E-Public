#include<stdio.h>
int main()
{
int X=10,Y=20,T;
printf("\nX=%d Y=%d",X,Y);
    T=X;
    X=Y;
    Y=T;
printf("\nX=%d Y=%d",X,Y);
return 0;
}
