/*shut down windows XP*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char choice;
    printf("\n Do you want to shut down your computer now(Y/N): ");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
        system("C:\\WINDOWS\\System32\\shutdown -s");
    return 0;
}
