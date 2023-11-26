#include "../Header/config.h"
#include "../Header/hello.h"
int main()
{
    u8 temp;
    printf("input one word\n");
    scanf("%c",&temp);
    sayHello();
    getchar();
    return 0;
}