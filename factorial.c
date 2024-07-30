#include <stdio.h>
#include <time.h>

double factorial(double num) {
    if(num>1){
        return num*factorial(--num);
    }
    else{
        return 1;
    }
}

int main() {
    double a;
    double time;
    clock_t start, end;


    printf("\n\n=======================================================\n");
    printf("Enter number to get factorial: ");
    scanf("%lf", &a);

    start = clock();
    // double ans = factorial(a);
    double ans=1;
    for(double i=1;i<=a;i++){
        ans=ans*i;
    }
    end = clock();

    time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nFactorial of %lf is: %lf", a, ans);
    printf("\nTime is %lf seconds", time);
    printf("\n=======================================================\n\n\n");

    return 0;
}
