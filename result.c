# include<stdio.h>

int main() {
    int markes;
    scanf("%d", &markes);
    if (markes >= 80)
    {
        printf("Your greade is A+\n");
    }
    else if (markes >= 70)
    {
        printf("Your greade is A\n");
    }
    else if (markes >= 60)
    {
        printf("Your greade is A-\n");
    }
    else if (markes >= 50)
    {
        printf("Your grade is B\n");
    }
    else if (markes >= 40)
    {
        printf("Your greade is C\n");
    }
    else if (markes >= 33)
    {
        printf("Your markes is D\n");
    }
    else {
        printf("Your result is F");
    }
    return 0;
}