# include<stdio.h>

int main() {
    int n , sum;
    sum = 0;
    n = 1;
    while (n <= 100)
    {
        sum = sum + n;
        n = n + 1;
    }
    printf("%d\n", sum);
    return 0;
}