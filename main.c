#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=4;a<=20;a++){
        if((a%2)==0)
            continue;
            printf("%d\n",a);
    }
    getch();
    return 0;
}
