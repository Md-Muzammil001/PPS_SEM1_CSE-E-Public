#include<stdio.h>
int main ()
{
    int num1, num2, result;
    char operand;

printf ("\n ENTER THE FIRST NUMBER");
scanf("%d",&num1);
printf ("\n ENTER THE SECOND NUMBER");
scanf("%d",&num2);

printf("\n Enter The Operand");
scanf(" %c" ,&operand);
switch(operand)
{

     case '+': result = num1+num2;
             printf ("sum of %d and %d is %d", num1,num2,result);
             break;

    case '-': result = num1-num2;
             printf ("difference of %d and %d  is %d", num1,num2,result);
             break;
    case '*' :result = num1*num2;
             printf ("product of %d and %d is %d", num1,num2,result);
             break;
    case '/' :result = num1/num2;
             printf ("division of %d and %d  is %d", num1,num2,result);
    default : printf("invalid operand");
              break;
}

return 0;




}
