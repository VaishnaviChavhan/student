#include<stdio.h>
int main()
{
int n,b,C;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
printf("enter the element: ");
scanf("%d",&b);
a[i]=b;
}

int p[n];
int i=0;
int k=a[i];
for(int i=0; i<n; i++){
p[i]=k;
k++;
}
for(int i=0; i<n; i++){
if(a[i]==p[i]){
C=C+1;
}
}
if(C==n){
printf("consecutive\n");
}else{
printf("not consecutive\n");
}
return 0;
}
