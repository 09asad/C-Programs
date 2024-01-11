#include<Stdio.h>
#include<math.h>       // for mathematics
int main()
{
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter power: ");
    scanf("%d",&b);

    int q = pow(a,b);      // pow
    printf("%d",q);
    return 0;
}