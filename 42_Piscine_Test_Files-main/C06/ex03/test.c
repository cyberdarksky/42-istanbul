#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc ft_sort_params.c -o program1");
  printf("Your program must print:\n");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc ft_sort_params.c -o program2");
  printf("Your program must print:\n123 \n567 \nklo \ntest\n");
  printf("Your program prints:\n");
  system("./program2 test 123 567 klo");
  system("rm program2");

  printf("--------------------\n");
  system("gcc ft_sort_params.c -o program3");
  printf("Your program must print:\n345\nis\nnice\ntest\nthis\n");
  printf("Your program prints:\n");
  system("./program3        345 test this is nice");
  system("rm program3");

  printf("--------------------\n");
  system("gcc ft_sort_params.c -o program4");
  printf("Your program must print:\n2\nbut\nhours\nits\nnow\none\nthis\ntook\nworking\n");
  printf("Your program prints:\n");
  system("./program4  this one took 2 hours but its working now");
  system("rm program4");
}
