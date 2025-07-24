#include <stdio.h>
#include <stdbool.h>

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

  int age = 25;

  /*
    to print a variable, we use the
    %x structure
    % says it is an structure
    x says its type
    
  */

  printf("I am %d years old\n", age);

  char grade = 'A';
  printf("My grade is %c\n", grade);

  char string[] = "This is a string";
  printf("look: %s\n", string);

  bool isOnline = true;
  printf("Is Caio Online? ");
  if(isOnline) {
    printf("yes.");
  }else{
    printf("no.");
  }

  

  return 0;
}