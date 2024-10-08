/*
 * The recursive approach for calculating factorial is generally considered better than the iterative approach for several reasons:
 * 
 * 1. **Simplicity and Clarity**: The recursive implementation is more concise and easier to understand. It directly reflects the mathematical definition of factorial, where the factorial of a number n is defined as n * factorial(n-1). This leads to cleaner code and reduces the cognitive load for developers.
 * 
 * 2. **Reduced Code Complexity**: The recursive approach eliminates the need for explicit loop constructs and additional variables, simplifying the logic. This makes it easier to read and maintain, especially for those familiar with recursive functions.
 * 
 * 3. **Natural Fit for Problem**: Factorial calculations are inherently recursive. Using a recursive approach aligns better with the nature of the problem, making it more intuitive to implement.
 * 
 * 4. **Stack Usage**: While recursion uses stack space for function calls, for small values of n (such as in typical factorial calculations), this is usually not a concern. The added elegance of recursion can often outweigh this consideration.
 * 
 * Overall, while both approaches are valid, the recursive method provides a clearer, more straightforward solution for calculating factorial values.
 */

import java.util.Scanner;
class Factorial {
    // Recursive method to calculate factorial
    static int factorial(int n) {
        if (n == 0) {
            return 1; // Base case: factorial of 0 is 1
        } else {
            return n * factorial(n - 1); // Recursive call
        }
    }
    
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to calculate the factorial");
        int number=sc.nextInt();
        int result = factorial(number);
        System.out.println("Factorial of " + number + " is: " + result);
    }
}
