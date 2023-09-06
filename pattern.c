#include <stdio.h>

int main(void) 
{
  int i, j;
  printf("\n ==============================================");
  printf("\n               Pattern");
  printf("\n ============================================== \n");
  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < 5 - i; j++) 
	{
      printf("%c", 'A' + i);
    }
    printf("\n");
  }
  return 0;
  printf("\n ==============================================");
}
