#include<stdio.h>
#include<conio.h>

int main(){
int n;
float k;
float bill=0;
printf("Enter electricity consumed in unit's\n");
scanf("%d",&n);
switch(n){
case 1 ... 50: bill=n*0.50;
break;
case 51 ... 151:bill=n*0.75;
break;
case 152 ... 250:bill=n*1.20;
break;
case 251 ... 5000 :bill=n*1.50;
break;
}
k=(bill*20)/100;
bill=bill+k;
printf("Total Bill is %.2f\n",bill);
return 0;
}
