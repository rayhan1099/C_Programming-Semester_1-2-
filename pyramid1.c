#include <stdio.h>
int main()
{
  int line, space, n,star;

  printf("Enter size of Pyramid\n");
  scanf("%d", &n);

  for (line = 1; line <= n; line++)
  {
    for (space = 1; space <= n-line; space++)
      printf(" ");

    for (star = 1; star <= 2*line - 1; star++)
      printf("*");

    printf("\n");
  }

  return 0;

}
