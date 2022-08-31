#include <stdio.h>
#include <dos.h>
#include <time.h>
int main()
{
    struct date dt;
    time_t now = time(NULL);
    // for the current time
    char *string = ctime(&now);
    printf("YOU ARE IN THE = %s", string);
    printf("please enter the day/month/year\n");
    scanf("%d %d %d", &dt.da_day, &dt.da_mon, &dt.da_year);
    setdate(&dt);
}