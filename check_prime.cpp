#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=2;i<n/2;i++)
if(n%i==0)
{
flag=1;
break;
}
if(flag==1)
printf("\n The number is not prime");
else
printf("\n The number is prime");
return 0;
}


