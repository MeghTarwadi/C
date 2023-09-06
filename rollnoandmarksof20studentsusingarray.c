#include <stdio.h>

int main(void) 
{
printf("\n ===============================================");
printf("\n Roll no and marks of 20 students using array");
printf("\n ===============================================");
  int rollno[20], marks[20], i;

  for (i = 0; i < 20; i++) 
  {
    printf("\n Enter Roll of Student [%d]", i + 1);
    scanf("%d", & rollno[i]);
    printf("\n Enter Mark of Student [%d]", i + 1);
    scanf("%d", & marks[i]);
  }

  for (i = 0; i < 20; i++) 
  {
    printf("\n Roll No :  %d   Marks : %d", rollno[i], marks[i]);
  }
printf("\n ===============================================");
  return 0;
}
