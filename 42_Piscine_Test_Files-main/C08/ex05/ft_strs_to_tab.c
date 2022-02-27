#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int ft_str_length(char *str);
char  *ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
  int i;
  struct s_stock_str	*arr;

  arr = malloc((ac + 1) * sizeof(struct s_stock_str));
  i = 0;
  while (i < ac)
  {
    arr[i].size = ft_str_length(av[i]);
    arr[i].str = av[i];
    arr[i].copy = ft_strdup(av[i]);
    i ++;
  }
  arr[i].size = 0;
  arr[i].str = '\0';
  arr[i].copy = '\0';
	return (arr);
}

int	ft_str_length(char *str)
{
  int strlen = 0;
  while(str[strlen] != '\0')
    strlen ++;
  return strlen;
}

char  *ft_strdup(char *src)
{
  int i;
  char *duplicate;

  i = 0;
  duplicate = malloc(ft_str_length(src) * sizeof(char) + 1);
  while (i <= ft_str_length(src))
  {
    duplicate[i] = src[i];
    i ++;
  }
  duplicate[i] = '\0';
  return duplicate;
}
