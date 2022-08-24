#include<stdio.h>
#include<conio.h>

int main(){
while(1){
int n,a,b;
printf("Select any operation\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
printf("\n");
scanf("%d",&n);

switch(n){
case 1:
printf("\n");
printf("Enter two numbers :\n");
scanf("%d%d",&a,&b);
printf("The sum is %d ",a+b);
break;
case 2:
printf("Enter two numbers :\n");
scanf("%d%d",&a,&b);
printf("The difference is %d ",a-b);
break;

case 3:
printf("Enter two numbers :\n");
scanf("%d%d",&a,&b);
printf("The multiplication is %d ",a*b);
break;

case 4:
printf("Enter two numbers :\n");
scanf("%d%d",&a,&b);
printf("The result is %d ",a/b);
break;

case 5:
break;

default :
printf("Invalid\n");
}
break;
}
printf("\n");

return 0;

}
