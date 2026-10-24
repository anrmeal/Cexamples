#include <stdio.h>

int sum = 0;

int adding(int num1, int num2) 
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
  printf("The sum is: %d \n", adding(myNum1, myNum2));

  return 0;
}
