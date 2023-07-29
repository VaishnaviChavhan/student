#include<stdio.h>
int main()
{
int n,b;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
printf("enter element: ");
scanf("%d",&b);
a[i]=b;
}
for(int i=0; i<n; i++){
printf("%d ",a[i]);
}
return 0;
}
