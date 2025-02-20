#include <stdio.h>

float fahrenheit;
float celsius;

float temperature() {
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

int main() {
    printf("Enter a temperature in Fahrenheit to convert to Celsius: ");
    scanf("%f", &fahrenheit);
    temperature();
    printf("The temperature in Celsius is: %f\n", celsius);
    return 0;
}