#include<stdio.h>
int main()
{
    int arr[100],n,i,item,flag=0;
    printf("Enter the number of element\n");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);           // In Linear, array no need to sorted
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Search is succesful and location is %d",i+1);
    else
    printf("Search is unsuccessful");
    return 0;
}