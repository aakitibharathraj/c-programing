#include<stdio.h>
int main()
{
    int tea,candy;
    printf("enter the no.of candy and tea :\n");
    scanf("%d%d",&candy,&tea);
    if(candy<5&&tea<5)
    {
        printf("0");
    }
    else if (candy>=2*candy||tea>=2*tea)
    {
        printf("2");
    }
    else
    {
        printf("2");
    }
    return 0;
}
output:
enter the no.of candy and tea :
20
6
2
