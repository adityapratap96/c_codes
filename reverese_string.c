#include<stdio.h>
#include<string.h>
int main()
{
char t,a[100]={"helo world"};
int n=0,c=0,j,k,l;
n=strlen(a);
k=n-1;

for(j=0;a[j]!=' ';j++);
printf("%d",j);
puts(a);
for(int i=0;i<(j/2);i++)
{
    t=a[i];
    a[i]=a[j-i-1];
    a[j-i-1]=t;
}
j++;
k=k-j;
k=k/2;


for(l=j;l<(j+k);l++)
{
    t=a[l];
    a[l]=a[n-l+j-1];
    a[n-l-1+j]=t;
}
puts(a);
return 0;
}