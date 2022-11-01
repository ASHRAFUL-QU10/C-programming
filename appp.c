# include<stdio.h>

int main() {
    // assinng arrays valus
    int numbers[10] = {10, 11, 12, 13 , 14, 15, 16, 17, 18, 19};
    int i, sum;
    sum = 0;
    //for loops 
    for ( i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];
    }
    printf("sum: %d\n", sum);
    return 0;
}