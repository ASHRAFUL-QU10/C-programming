# include<stdio.h>
# include<string.h>

int main() {
    char name [80];
    int leanght;
    scanf("%s", &name);
    leanght  = strlen(name);
    printf("%s has %d characters.\n", name , leanght);
    return 0;
}