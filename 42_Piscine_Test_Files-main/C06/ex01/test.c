#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc ft_print_params.c -o program1");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc ft_print_params.c -o program2");
  printf("Your program must print:\ntest \n123 \n567 \nklo\n");
  printf("Your program prints:\n");
  system("./program2 test 123 567 klo");
  system("rm program2");

  printf("--------------------\n");
  system("gcc ft_print_params.c -o program3");
  printf("Your program must print:\n345\ntest\nthis\nis\nnice\n");
  printf("Your program prints:\n");
  system("./program3        345 test this is nice");
  system("rm program3");
}
