#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h> //in vscode system("cls");   is clrscr
typedef struct ticket
{
    int ticno, seatno;
    char pasname[30];
    char trainame[30];
    char date[20];
    char ditime[15];
    char status[15];
} t;
int main()
{
    system("cls");
    int n, c = 0, c2 = 0, temticketno, again;
    printf("please enter how manney passanger detail you want to enter : ");
    scanf("%d", &n);
    system("cls");
    usleep(440000); // use usleep for the microsecond time
    t p[n];
    // THE DATA ENTERY PART
    for (int i = 0; i < n; i++)
    {
        printf("please enter the following for passanger : %d --> \n", i + 1);
        printf("TICKET NO         --> ");
        scanf("%d", &p[i].ticno);
        getchar();
        printf("\nPASSANGER NAME  --> ");
        gets(p[i].pasname);
        printf("\nTRAIN NAME      --> ");
        gets(p[i].trainame);
        printf("\nDATE            --> ");
        gets(p[i].date);
        printf("\nDEPARTURE TIME --> ");
        gets(p[i].ditime);
        printf("\nSTATUS          --> ");
        gets(p[i].status);
        printf("\nSEAT NO         --> ");
        scanf("%d", &p[i].seatno);
        system("cls");
        sleep(1); // USE TO SLEEP COMPILER 1 SECONDS
    }
enter:
    getchar();
    system("cls"); // for use clrscr in the vs code
    printf("PLEASE ENTER --> 1.TICKET NO TO DETAIL\t   2.TICKET NO TO SEAT NO\n");
    scanf("%d", &c);
    system("cls");
    sleep(1);
    if (c == 1)
    {
        printf("PLEASE ENTER YOUR TICKET NO TO SEE THE DETAIL IN BIG ALPHABAT --> ");
        scanf("%d", &temticketno);
        // for the passenger detail of given ticket no;
        c2 = 0;
        system("cls");
        sleep(1);
        for (int i = 0; i < n; i++)
        {
            if (temticketno == p[i].ticno)
            {
                printf("\nPASSANGER NAME -->  %s", p[i].pasname);
                printf("\nTICKET NO      -->  %d", p[i].ticno);
                printf("\nTRAIN NAME     -->  %s", p[i].trainame);
                printf("\nDATE           -->  %s", p[i].date);
                printf("\nDIPARTURE TIME -->  %s", p[i].ditime);
                printf("\nSTATUS         -->  %s", p[i].status);
                printf("\nSEAT NO        -->  %d", p[i].seatno);
                sleep(1);
                c2++;
            }
        }
        // for the case ticket no is wrong;
        if (c2 == 0)
        {
            printf(" PASSANGER IS NOT FOUND \t PLEASE PRESS ENTER FOR  RENTER THE VALID TICKET NO \n");
            getch();
            usleep(440000);
            goto enter;
        }
    }
    // for the ticket to seat no
    else if (c == 2)
    {
        system("cls");
        sleep(1);
        c2 = 0;
        printf("PLEASE ENTER YOUR TICKET NO TO SEE THE DETAIL --> ");
        scanf("%d", &temticketno);
        system("cls");
        sleep(1);
        for (int i = 0; i < n; i++)
        {
            if (temticketno == p[i].ticno)
            {
                // for check confirmed
                if (strcmp("WAITING", p[i].status) > 0)
                {
                    printf("\nPASSANGER NAME -->  %s", p[i].pasname);
                    printf("\nTICKET NO      -->  %d", p[i].ticno);
                    printf("\nTRAIN NAME     -->  %s", p[i].trainame);
                    printf("\nDATE           -->  %s", p[i].date);
                    printf("\nDIPARTURE TIME -->  %s", p[i].ditime);
                    printf("\nSTATUS         -->  %s", p[i].status);
                    printf("\nSEAT NO        -->  %d\n", p[i].seatno);
                }
                else
                {
                    printf("\nYOUR TICKET IS NOT CONFIRMED : %s \n", p[i].pasname);
                }
                c2++;
            }
        }
        if (c2 == 0)
        {
            printf("\n PASSANGER IS NOT FOUND \t PLEASE PRESS ENTER FOR AGAIN ENTER THE VALID TICKET NO \n");
            getch();
            usleep(440000);
            goto enter;
        }
    }
    else
    {
        printf("\nPLEASE ENTER FOR AGAIN CHOOSE A VALID NO GIVEN BELLOW........... \n");
        getch();
        usleep(440000);
        goto enter;
    }
    // for go for another passanger detail
    printf("\nPLEASE ENTER .1. FOR SEE ANOTHER PASSANGER DETAIL..........\n");
    scanf("%d", &again);
    system("cls");
    usleep(440000);
    if (again == 1)
    {
        goto enter;
    }
    else
    {
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%cTHANK YOU FOR TAKING SERVICE%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    }
}
