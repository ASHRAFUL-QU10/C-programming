# include<stdio.h>

float celsius_to_faharenheit (float celsius);

int main()
{
    float celsius, fahranheit;
    scanf("%f %f", &celsius, &fahranheit);
    fahranheit = celsius_to_faharenheit(celsius);
    printf("Fahrenheit = %f\n", fahranheit);
    return 0;
}

float celsius_to_faharenheit(float celsius)
{
    return (celsius * 9 / 5 + 32);
}