#include <stdio.h>
int main()

{
//bmi calculator

float h,w,BMI;
message:
printf("Enter height in meter:");
scanf("%f",&h);

	

if(h<0)
{

	printf("\n Positive values only");
goto message;
}
	
printf("\nEnter weight in kg:");
scanf("%f",&w);


BMI = w/(h*h); 

printf("\n\nYour Body Mass Index (BMI) is %.1f",BMI);



}


