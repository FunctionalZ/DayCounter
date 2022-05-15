#include<stdio.h>
#include<windows.h>

int main()
{
    int i;
    for(i = 1; i < 86400; i++)
    {
        printf("Seconds since you opened the application: ");
        PlaySound("beep.wav", NULL, SND_ASYNC);
        printf("%d", i);
        printf("\n");
        sleep(1);
        system("clear");
    }

    for(i = 5; i > 0; i--)
    {
        printf("It has been a day now so the program will close in aproximately: ");
        printf("%d", i);
        sleep(1);
        system("clear");
    }
}