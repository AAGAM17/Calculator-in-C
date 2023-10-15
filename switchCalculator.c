#include <stdio.h>
int main() {
  char ch;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter first operand: ");
  scanf("%f", &first);
  printf("Enter second operand: ");
  scanf("%f", &second);
  switch (ch) {
    case '+':
      printf("%.f + %.f = %.f", first, second, first + second);
      break;
    case '-':
      printf("%.f - %.f = %.f", first, second, first - second);
      break;
    case '*':
      printf("%.f * %.f = %.f", first, second, first * second);
      break;
    case '/':
      printf("%.f / %.f = %.f", first, second, first / second);
      break;
  }
  return 0;
}