#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,t1,t2,r1,r2=0,n=0;
clrscr();
printf("Enter the 2 number\n");
scanf("%d%d",&n1,&n2);
printf("Amstrong number b\w %d and %d are:",n1,n2);
for(i=n1+1;i<n2;++i)
{
t1=i;
t2=i;
while(t1!=0)
{
t1/=10;
++n;
}
while(t2!=0)
{
r1=t2/10;
r2=pow(r1,n);
t1/=10;
}
if(r2==i)
{
printf("%d",i);
}
n=0;
}
getch();
}
