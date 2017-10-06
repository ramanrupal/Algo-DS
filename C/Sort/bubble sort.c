#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[30],i,j,temp;
    printf("\n enter the size of an arry=");
    scanf("%d",&n);
    printf("\n enter the elements one bye one nd press entr agter each number");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf(" the array is\n5");
    for(i=0;i<n-1;i++)
        printf("%d\t ",arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n sorte array is as follows\n");

        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        return 0;
    }

