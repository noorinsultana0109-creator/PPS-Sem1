#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two values");
    printf("AND=%d %d\n",&a,&b);
    printf("OR=%d %d\n",a==b);
    printf("LESS THAN=%d %d\n",a<b);
    printf("GREATER THAN=%d %d\n",a>b);
    printf("LESS THAN OR EQUAL TO=%d %d\n",a<=b);
    printf("GREATER THAN OR EQUAL TO=%d %d\n",a>=b);
    return 0;
}
