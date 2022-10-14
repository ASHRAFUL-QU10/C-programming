# include<stdio.h>
// Diveide 3 & 5
int main() {
    int num;
    scanf("%d", &num);
    if (num % 3 == 0 &&  num % 5 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if (num % 3 == 0)
    {
        printf("Fizz\n");
    }
    else if (num % 5 == 0)
    {
        printf("Buzz\n");
    }
    return 0;
}