#include <stdio.h>
// Program to  convert temp from fahrenheit to celsius
int main(){

float tempInFahrenheit ; 
float tempInCelsius ;
printf("Enter Temperature in Fahrenheit :: ") ;
scanf("%f" ,  &tempInFahrenheit)  ;

tempInCelsius = (tempInFahrenheit -32) * 5/9 ;
printf("Output Temperature in Celsius :: %f", tempInCelsius);

 return 0;  
}