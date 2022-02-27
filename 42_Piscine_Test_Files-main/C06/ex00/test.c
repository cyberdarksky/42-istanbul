#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc ft_print_program_name.c -o program1");
  printf("Your program must print:\n./program1\n");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc ft_print_program_name.c -o program2");
  printf("Your program must print:\n./program2\n");
  printf("Your program prints:\n");
  system("./program2 test 123 567");
  system("rm program2");

  printf("--------------------\n");
  system("gcc ft_print_program_name.c -o program3");
  printf("Your program must print:\n./program3\n");
  printf("Your program prints:\n");
  system("./program3        345");
  system("rm program3");
}
