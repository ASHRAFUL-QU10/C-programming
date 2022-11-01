# include<stdio.h>

int main() {
    int ara [] = {10, 20, 30, 40, 50};
    int n = 5; int i;
    int tamp;
    for ( i = 0; i < n / 2; i = i + 1);
    {
        //Exange value of  are [i]  bad ara [n - 1 - i]
        tamp = ara [i];
        ara [i] = ara[n -1 -i];
        ara[n - 1 -i] = tamp;
    }
    for (i = 0; i < n; i += 1)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}