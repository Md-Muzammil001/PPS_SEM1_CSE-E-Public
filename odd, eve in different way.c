#include<stdio.h>
int main ()
{
int  a;

printf("ENTER A NUMBER ");
scanf ("%d",&a);

if ((a&1)==0)
    printf("THE NUMBER %d is even ",a );
else
    printf("THE NUMBER %d is odd ", a);

return 0;

}
