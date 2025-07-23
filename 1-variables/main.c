#include <stdio.h>

int main() {
  
  /*
    we have many types of variables
    variables are representation for values
    variables can be:
    - int (integer numbers)
    - float (decimal numbers)
    - char (characters)
    - bool (boolean, true or false)
    and many others :)
  */

  int age = 22;
  float height = 1.69;
  char initial = 'C';


  /*
    to print a variable, we use the
    %x structure
    % says it is an structure
    x says its type
    d - decimal (integer)
    f - float
    c - character
    s - string
  */

  /* \n is the line break */
  printf("I am %d years old\n", age);

  // %f is used for float numbers
  // %.2f is used to limit the number of decimal places
  // in this case, it will show 2 decimal places
  // you can change the number to show more or less decimal places
  printf("I am %.2f meters tall\n", height);

  // %.3f will show 3 decimal places
  printf("I am %.3f meters tall\n", height);
  printf("My initial is %c\n", initial);

  /*
    we can also use %s to print strings
    but we need to define a string variable first
    a string is an array of characters
    in C, strings are represented as arrays of characters
    and they are terminated by a null character '\0'
  */
  char name[] = "Carlos";
  printf("My name is %s\n", name);

  /*
    floats can hold up to 6-7 digits of precision
    if you need more, should use double instead
    double can hold up to 15 digits of precision
    its 'double' because it uses double the amount of memory 
    (32 bits for float, 64 bits for double)
  */
  float a = 0.1f;
  float b = 0.2f;
  float c = a + b;
  printf("0.1 + 0.2 = %.20f\n", c);

  /*
    floats are not always precise
    because they are stored in binary format
    for example, 0.1 + 0.2 is not exactly 0.3
    it is 0.30000001192092895508

    this is because floats are stored in binary format
    and some decimal numbers cannot be represented exactly in binary
    so, when you add them, you get a small error
    this is called floating-point precision error
    and it can cause problems in your calculations
    for example, if you compare two floats that are supposed to be equal,
    you might get false because of the precision error
  */

  if (c == 0.30000001f) {
    printf("0.1 + 0.2 should be exactly 0.3, but its not :/\n");
  }

  /*
    so, if you want to compare floats, you should use a tolerance
    for example, you can check if the difference between two floats is less than a small value
    like 0.0001
    or you can use a library that provides better precision
    like the GMP library for arbitrary precision arithmetic
    or you can use double instead of float, which has more precision
    but it is still not perfect
    so, be careful when using floats for precise calculations
    and always test your code with edge cases
    to make sure it works as expected
    also, remember that floats are not suitable for financial calculations
    because of the precision issues
    for financial calculations, you should use integers to represent cents or use a library that provides fixed-point arithmetic
    or use a decimal type if your language supports it

    also, remember that floats are not suitable for financial calculations
    because of the precision issues
    for financial calculations, you should use integers to represent cents or use a library that provides fixed
  */

  return 0;
}