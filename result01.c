# include<stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("Your result is A+\n");
    }
    else if (marks >= 70)
    {
        printf("Your result is A\n");
    }
    else if (marks >= 60)
    {
        printf("your result is A-\n");
    }
    else if (marks >= 50)
    {
        printf("Your result is B\n");
    }
    else if (marks >= 40)
    {
        printf("Your result is C\n");
    }
    else if (marks >= 33)
    {
        printf("YOur result is D\n");
    }
    else{
        printf("Your result id F\n");
    }
    return 0;
}