#include<stdio.h>
int main()
{
    const int UserName = 123;
    const int passwd = 123;
    int UserName_ip,passwd_ip;
    printf("Enter userName & passwd/n");
    scanf("%d%d",UserName_ip,&passwd_ip);
    if(UserName==UserName_ip&&passwd==passwd_ip)
    {
        printf("user is authorized");
    }
    else{
          printf("user is not authorized");        }
    return 0;
}
