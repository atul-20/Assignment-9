#include<stdio.h>
#include<conio.h>

int main(){
int n,r,k;
printf("Enter any year\n");
scanf("%d",&n);
//r=((n%4==0)&&((n%400==0)||(n%100!=0)));
r=n%100;
//printf("%d",r);
k=r%4==0;
//printf("%d",k);

switch(k){
case 1:printf("Leap year\n");
break;
case 0:printf("Not a leap year\n");
break;
defualt:printf("Invalid\n");
}

return 0;
}
