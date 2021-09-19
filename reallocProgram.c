#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    float *p, sum = 0,oldSum;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) calloc(n, sizeof(float));

    if (p == NULL) {
        puts("Memory allocation failed");
        exit(0);
    } else {
        puts("Enter data: ");
        for (int i = 0; i < n; i++) {
            scanf("%f", p + i); 
        }
        for (int i = 0; i < n; i++) {
            sum = sum + p[i];
        }
        oldSum=sum;
        printf("The sum is %.2f", sum);
        int nos;
        float newSize=0,newSum=0;
        puts("\nEnter new values to be included in n : ");
        scanf("%d", &nos);
        newSize=nos+n;
        p=(float*)realloc(p,newSize*sizeof(float));
        printf("Enter old data and %d new data :\n",nos);
        for (int i = 0; i< newSize; i++) 
        {
            scanf("%f",& p[i]); 
        }
        for (int i = 0; i < newSize; i++)
        {
            sum=sum+p[i];
        }
        newSum=sum-oldSum;
        printf("The  old sum is %.2f\n", oldSum);
        printf("The  new sum is %.2f\n", newSum);
        printf("Total sum id %.2f",sum);
    }

    free(p);
    return 0;
}