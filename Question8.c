#include<stdio.h>
#include<conio.h>

int main(){
int choice,n;
printf("1.Negitive to positive\n");
printf("2.Positive to negitive\n");
scanf("%d",&choice);

switch(choice){
case 1:
printf("Enter a number\n");
scanf("%d",&n);
n=n*(-1);
printf("Postive form is %d",n);
break;
case 2:
printf("Enter a number\n");
scanf("%d",&n);
n=n*(-1);
printf("Negitive form is %d",n);
break;

defualt:
printf("Invalid Input\n");
}
return 0;
}
