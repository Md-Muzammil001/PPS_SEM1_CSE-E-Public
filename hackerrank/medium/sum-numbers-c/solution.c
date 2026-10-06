#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int num1, num2;
    float float1, float2;
    
    // Read the integer and float inputs
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &float1, &float2);
    
    // Print the sum and difference of the integers separated by a space
    printf("%d %d\n", num1 + num2, num1 - num2);
    
    // Print the sum and difference of the floats, scaled to 1 decimal place
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);
    
    return 0;
}
