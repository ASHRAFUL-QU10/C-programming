# include<stdio.h>

int main() {
    int markes;
    scanf("%d", &markes);
    if (markes >= 80)
    {
        printf("Your result is A+\n");
    }
    else if (markes >= 70)
    {
        printf("Your result is A\n");
    }
    else if (markes >= 60)
    {
        printf("Your result is A-\n");
    }
    else if (markes >= 50)
    {
        printf("Your result is B\n");
    }
    else if (markes >= 40)
    {
        printf("Your result is C\n");
    }
    else if (markes >= 33)
    {
        printf("Your result is D\n");
    }
    else {
        printf("Your result is F"\n);
    }
    return 0;
}