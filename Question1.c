#include<stdio.h>
#include<conio.h>

void getMonth(int N){
if(N==1 || N==3 || N==5 || N==7 || N==8 || N==10 || N==12){
    printf("31 Day's\n");
}
else if(N==2){
    printf("28\\29 Days\n");
}
else if(N==4 || N==6 || N==9 || N==11){
    printf("30 Days\n ");
}
}

int main(){
int n;
printf("Enter the month Number\n");
scanf("%d",&n);
getMonth(n);
return 0;
}
