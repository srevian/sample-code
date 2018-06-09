/*shut down ubuntu linux*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char choice;
    printf("\n Do you want to shutdown your computer now(Y/N): ");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
        system("shutdown -p now");
    return 0;
}
