//How to convert celsius into fahrenheit.
#include<stdio.h>
#include<conio.h>
int main(){
	float celsius;
	float fahrenheit;
	printf("Enter temperature in celsius : ");
	scanf("%f",&celsius);
	//(1.8) * celsius+32 
  fahrenheit = (1.8) * celsius+32;
	printf("celsius = %f and fahrenheit = %f",celsius);
	

return 0;	
}

