#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 500 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 500;
    step = 25;
    
    fahr = lower;
    printf("F\tC\n\n");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}