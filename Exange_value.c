# include<stdio.h>

int main() {
    int a = 15, b = 9;
    int c;
    c = a;
    a = b; 
    b = c;
    printf("valu of a is %d, valu of b is %d\n", a , b);
    return 0;
}