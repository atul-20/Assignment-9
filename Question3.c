#include<stdio.h>
#include<conio.h>

int main(){
int n;
printf("Enter a any number between 1-7\n ");
scanf("%d",&n);

switch(n){
case 1:printf("Monday\n");
break;
case 2:printf("Tuesday\n");
break;
case 3:printf("Wednesday\n");
break;
case 4:printf("Thursday\n");
break;
case 5:printf("Friday\n");
break;
case 6:printf("Saturday\n");
break;
case 7:printf("Sunday\n");
break;

defualt:
printf("Invalid Input\n");

}
return 0;
}
