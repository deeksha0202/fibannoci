#include<stdio.h>
#include<math.h>
int fib(int n);
int main()
{
    int n;
    int r;;
    printf("enter the number to find fibannoci series \n");
    scanf("%d",&n);
    // printf("enter m of earth \n");
    // scanf("%f",&M);
    // printf("enter distance from centre of earth \n");
    // scanf("%f",&r);
    // result=avg(a,b,c);
    r=fib(n);
    printf("fibannoci series of %d is %d ",n,r);
    // scanf("%f",&c);
    // printf("%f farehnite",temp(c,f));
    return 0;

}
int fib(int n){
    int s;
    int a=0,b=1;
    for(int i=1;i<n;i++)
    {
    s=a+b;
    a=b;
    b=s;
    }
    return a;
};