#include <stdio.h>
#include <time.h>

int main() {
    int a[10];
    float time,time1;
    clock_t start, end,start1,end1;

    printf("\n\n=======================================================\n");
    printf("Enter 10 Digits:");
    printf("\n=======================================================\n");
    
    for(int i=0;i<10;i++){
        printf("Enter %d th element : ",i+1);
        scanf("%d", &a[i]);
    }
    start1=clock();
    for(int i=0;i<10;i++){
        start = clock();
        int max = i;
        
        for (int j=i;j<10;j++){
            if(a[max]>a[j]){
                max = j;
            }
        }

        int temp=a[i];
        a[i] = a[max];
        a[max] = temp;

        end = clock();
        time = (float)(end - start) / CLOCKS_PER_SEC;
        printf("\nFor %d th pass taken time is %f",i,time);
    }
    end1=clock();

    printf("\n\n=======================================================\n");

    time1 = (float)(end1 - start1) / CLOCKS_PER_SEC;
    printf("Total time is %f \nSorted array : ",time1);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n=======================================================\n\n\n");

    return 0;
}
