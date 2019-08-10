#include stdio.h
#include stdlib.h
void mainh()
{
int a;
float d;
println("Enter the amount:");
scanf("%d",&a);
println("Enter the Discount%:");
scanf("%f",&d)
printf("%d,",a);
while(a>=0)
{
a=((100-a)/100)*a;
printf("%d,",a);
}
if(a<0)
{
printf("FREE!!");
}
return 0;
}
