#include <stdio.h>
#include <time.h>

int main() {
    int a[10];
    double time;
    clock_t start, end;

    printf("\n\n=======================================================\n");
    printf("Enter 10 Digits:")
    printf("\n=======================================================\n");
    
    for(int i=0;i<10;i++){
        printf("Enter %d th element : ",i+1);
        scanf("%d", &a[i]);
    }


        start = clock();
        double ans=1;
        for(double i=1;i<=a;i++){
            ans=ans*i;
        }
        end = clock();
        time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\nFor %d th pass taken time is %ln", i,time);


    printf("\n=======================================================\n\n\n");

    return 0;
}
