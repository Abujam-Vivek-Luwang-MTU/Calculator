#include<stdio.h>

void main() {

  char option;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &option);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (option) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", a, b, a+b);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", a, b, a-b);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", a, b, a*b);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", a, b, a/b);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! The option is invalid");
  }

}
