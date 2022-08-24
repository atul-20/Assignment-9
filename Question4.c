 #include<stdio.h>
 #include<conio.h>

 int main(){
while(1){
 int n,a,b,c;
 printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not.\n");
 printf("2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.\n");
 printf("3.Check whether a given set of three numbers are equilateral triangle or not.\n");
 printf("4.Exit\n");
 scanf("%d",&n);

 switch(n){
 case 1:printf("Enter the three side's\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || c==a)
            printf("This is an isosceles traingle\n");
        else
            printf("This is not an isosceles traingle\n");
            break;

case 2: printf("Enter the three side's\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            printf("It is a right angle triangle!\n");
        else
            printf("It is not a right angle triangle!\n");
            break;


case 3: printf("Enter the three side's\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c && c==a)
        printf("It is an equilateral triangle\n");
        else
            printf("It is not an equilateral triangle\n");
            break;

case 4: break;

}
if(n==4)
 break;
}
return 0;
}
