#include <stdio.h>
int main()
{
	printf("\n ==========================================");
	printf("\n             SUM AND AVG");
	printf("\n ==========================================");
	int no,sum=0,i=0,val;
  		printf("\n How Many Number You Want to Enter : ");
  		scanf("%d",&no);
    while(i<no)
        {
          	printf("Enter No [%d]:",i+1);
          	scanf("%d",&val);
          	sum=sum+val;
          	i++;
        }
    	printf("\n Sum = %d",sum);
    	printf("\n Sum = %.2f",((float)sum)/no);
	printf("\n ==========================================");
    return 0;
}
