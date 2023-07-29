#include<stdio.h>
int main()
{
int n,b;
printf("enter value of n: ");
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
printf("enter the element: ");
scanf("%d",&b);
a[i]=b;
}
int sum=0;
int average;
for(int i=0; i<n; i++){
sum=sum+a[i];
}
printf("sum:%d\n",sum);
average=sum/n;
printf("average:%d\n",average);
return 0;
}
