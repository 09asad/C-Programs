#include<Stdio.h>
#include<math.h>    //  compulsory for maths use
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int root = sqrt(a);         // sqrt
    printf("The square root of is: %d",root);
    return 0;
}