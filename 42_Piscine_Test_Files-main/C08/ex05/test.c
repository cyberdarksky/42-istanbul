#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc ft_strs_to_tab.c ft_show_tab.c main.c -o program1");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c ft_show_tab.c main.c -o program2");
  printf("Your program prints:\n");
  system("./program2 test 123 567 klo");
  system("rm program2");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c ft_show_tab.c main.c -o program3");
  printf("Your program prints:\n");
  system("./program3        345 test this is nice");
  system("rm program3");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c ft_show_tab.c main.c -o program4");
  printf("Your program prints:\n");
  system("./program4  this one took 15 min and its working now");
  system("rm program4");
}
/*
Output should be:
Your program prints:
./program1
10
./program1
--------------------
Your program prints:
./program2
10
./program2
test
4
test
123
3
123
567
3
567
klo
3
klo
--------------------
Your program prints:
./program3
10
./program3
345
3
345
test
4
test
this
4
this
is
2
is
nice
4
nice
--------------------
Your program prints:
./program4
10
./program4
this
4
this
one
3
one
took
4
took
15
2
15
min
3
min
and
3
and
its
3
its
working
7
working
now
3
now
*/
