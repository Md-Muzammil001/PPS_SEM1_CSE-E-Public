#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    // Iterate through all possible pairs of a and b
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            
            // Calculate bitwise operations
            int current_and = a & b;
            int current_or = a | b;
            int current_xor = a ^ b;
            
            // Update maximums if the current value is less than k and greater than the previous maximum
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }
    
    // Print the final maximum values
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
