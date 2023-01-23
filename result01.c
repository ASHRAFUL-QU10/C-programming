# include<stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("Your gread is A+\n");
    }
    else if (marks >= 70)
    {
        printf("Your gread is A\n");
    }
    else if (marks >= 60)
    {
        printf("your gread is A-\n");
    }
    else if (marks >= 50)
    {
        printf("Your gread is B\n");
    }
    else if (marks >= 40)
    {
        printf("Your gread is C\n");
    }
    else if (marks >= 33)
    {
        printf("YOur greade is D\n");
    }
    else{
        printf("Your result id F\n");
    }
    return 0;
}