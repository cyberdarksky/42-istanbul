#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("gcc ft_strs_to_tab.c main.c -o program1");
  printf("Your program prints:\n");
  system("./program1");
  system("rm program1");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c main.c -o program2");
  printf("Your program prints:\n");
  system("./program2 test 123 567 klo");
  system("rm program2");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c main.c -o program3");
  printf("Your program prints:\n");
  system("./program3        345 test this is nice");
  system("rm program3");

  printf("--------------------\n");
  system("gcc ft_strs_to_tab.c main.c -o program4");
  printf("Your program prints:\n");
  system("./program4  this one took 15 min and its working now");
  system("rm program4");
}
/*
Output should look LIKE this
Your program prints:
Str:
./program1
Size:
10
Copy:
./program1

--------------------
Your program prints:
Str:
./program2
Size:
10
Copy:
./program2

Str:
test
Size:
4
Copy:
test

Str:
123
Size:
3
Copy:
123

Str:
567
Size:
3
Copy:
567

Str:
klo
Size:
3
Copy:
klo

--------------------
Your program prints:
Str:
./program3
Size:
10
Copy:
./program3

Str:
345
Size:
3
Copy:
345

Str:
test
Size:
4
Copy:
test

Str:
this
Size:
4
Copy:
this

Str:
is
Size:
2
Copy:
is

Str:
nice
Size:
4
Copy:
nice

--------------------
Your program prints:
Str:
./program4
Size:
10
Copy:
./program4

Str:
this
Size:
4
Copy:
this

Str:
one
Size:
3
Copy:
one

Str:
took
Size:
4
Copy:
took

Str:
15
Size:
2
Copy:
15

Str:
min
Size:
3
Copy:
min

Str:
and
Size:
3
Copy:
and

Str:
its
Size:
3
Copy:
its

Str:
working
Size:
7
Copy:
working

Str:
now
Size:
3
Copy:
now

*/
