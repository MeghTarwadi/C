#include <stdio.h>
#include <time.h>

int gcd(int a,int b){
    for(int i=a;i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}

int main(){
    int a,b;
    printf("\n\n=======================================================\n");
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    double time;
    time_t start,end;

    start=clock();
    printf("%d",gcd(a,b));
    end=clock();

    time = (double)(end - start)/CLOCKS_PER_SEC;

    printf("\ntime is %lf",time);
    printf("\n=======================================================\n\n\n");
    
    return 0;
}