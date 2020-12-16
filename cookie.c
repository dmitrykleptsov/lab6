#include <stdio.h>
#include <time.h>

void cookie()
{
    FILE *stat;
    stat = fopen("/home/......../lab6/cookie.c.txt", "a+");
    long int ttime;

    ttime = time(NULL);
    fprintf(stat, "connected: ");
    fprintf(stat, ctime(&ttime));
    fprintf(stat, "\n");
    fclose(stat);
}