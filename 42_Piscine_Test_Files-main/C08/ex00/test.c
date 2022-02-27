#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc main.c -o program1");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc main.c -o program2");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program2 test 123 567 klo");
  system("rm program2");

  printf("--------------------\n");
  system("gcc main.c -o program3");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program3        345 test this is nice");
  system("rm program3");

  printf("--------------------\n");
  system("gcc main.c -o program4");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program4  this one took 15 min and its working now");
  system("rm program4");
}
//Check if it's compiles and runs without error
