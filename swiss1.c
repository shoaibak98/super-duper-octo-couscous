int free(x,p)
{
while(x>0)
{
x=((100-p)/100)*x;
}
printf("%d",x);
return 0;
}
