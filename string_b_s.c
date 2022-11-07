# include <stdio.h>
# include <string.h>

int main() {
    char s1 [80], s2[80];
    int value;

    scanf("%s %s", s1 , s2);
    value = strcmp (s1 , s2);
    if (value == 0)
    {
        printf("%s and %s are equle.\n", s1 , s2);
    }
    else if (value > 0)
    {
        printf("%s and %s are not equle\n", s1 , s2);
    }
    else 
    {
        printf("%s and %s is smaller than %s\n", s1 , s2);
    }
    return 0;
}