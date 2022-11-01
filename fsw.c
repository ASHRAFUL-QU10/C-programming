# include<stdio.h>

int main() {
    char name [80];
    int i, length;
    scanf("%s", name);
    i = 0;
    while (name[i] != '\0')
    {
        i = i + 1;
    }
    length = i;
    printf("%s has %d characters. \n", name, length);
    return 0;
}