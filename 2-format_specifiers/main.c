#include <stdio.h>

int main() {
  int age = 22;
  float height = 1.69;
  double preciseHeight = 1.689123456789;
  char initial = 'C';
  char name[] = "Carlos";

  printf("I am %d years old\n", age); // decimal 
  printf("I am %.2f meters tall\n", height); // float with 2 decimal places
  printf("I am %.3f meters tall\n", height); // float with 3 decimal places
  printf("My initial is %c\n", initial); // character
  printf("My name is %s\n", name); // string

  // Using double for more precision
  printf("My precise height is %.10f meters\n", preciseHeight);

  return 0;
}