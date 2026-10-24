/*Made by Anthony
This program creates a function called adder which takes two inputs (int num1, int num2)
num1 and num2 are local to the function.


*/
#include <stdio.h>


int sum = 0;
int adder(int num1, int num2) 
{
    sum = num1 + num2;
    return (sum);
}


int main() {
  // Create  integer variables that will store the number we get from the user
  int myNum1;
  int myNum2;

  // Asks user for  a number
  printf("Type your first number and enter: \n"); 
  // Get and save the number the user types
  scanf("%d", &myNum1);

  //second number
  printf("Type another number and enter: \n"); 
  scanf("%d", &myNum2);

  // Print the sum of inputs
  printf("The sum is: %d \n", adder(myNum1, myNum2));

  return 0;
}
