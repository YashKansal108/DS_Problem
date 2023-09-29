#include<stdio.h>

int main()
{
int a[20],i,m;
printf("Enter the no. of elements in array  :-");
scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<m;i++){
printf(" %d",a[i]);
printf("\n");}

return 0;
}
