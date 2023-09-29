#include<stdio.h>
int main()
{
    int n,a[100],b,i,j;
    printf("Enter the size of array :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    printf("enter any number you want to delete");
    scanf("%d",&b);
    for(i=0;i<n;i++){
    if(a[i]==b)
    {
    for(j=i;j<n;j++){
    a[j]=a[j+1];}}
    }
    printf("New Array IS :\n");
    for(i=0;i<n-1;i++)
    {printf("%d\n",a[i]);}
    return 0;}
