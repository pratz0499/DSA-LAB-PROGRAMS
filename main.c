#include <stdio.h>
#include <stdlib.h>

int lsearch(int a[100],int key,int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(a[j]==key)
        {
            printf("The key is found");
        }
        else printf("The key is not found");
    }
    return 1;
}
int main()
{
    int a[100], key, n,i;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i< n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);

    lsearch(a,key,n);
    return 0;
}
