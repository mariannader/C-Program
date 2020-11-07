#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a,b ,c ,aver, ave ;
    printf("\a Enter 3 Grade : ");
    scanf("%d%d%d",&a,&b,&c);
    aver=(a+b+c)/3 ;
    ave=aver/100;

    if(ave>=(90/100))
    {
        printf("\t A");
}
    else if(ave>=(70/100) && ave<(90/100))
    {
        printf("\t B");
    }
    else if(ave>=(50/100) && ave<(70/100))
    {
        printf("\t C");
    }
    else
        {
        printf("F");
    }
    return 0;
}
