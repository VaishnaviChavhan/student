#include<stdio.h>
int main()
{
int n,b;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
printf("enter the element: ");
scanf("%d",&b);
a[i]=b;
}
int P=0;
int N=0;
for(int i=0; i<n; i++){
if(a[i]!=0){
if(a[i]>0){
P++;
}else{
N++;
}
}
}
printf("P:%d N:%d\n",P,N);
return 0;
}
