#include<stdio.h>


int main()

{



int r,s,a;

printf("Input ages of ram,shyam and ajay:");
scanf("%d %d %d",&r,&s,&a);


if(r<s&&r<a )

printf("Ram is the youngest");



else if (s<r && s<a )

printf("Shyam is the youngest");


else if (a<r && a<s )


printf("Ajay is the youngest");

else

printf("no one is the youngest");
}




