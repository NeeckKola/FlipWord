#include <stdio.h>
#include <stdlib.h>
void flip(char* mass, int pstrt, int pend, int len)
{
char cache;
int frst = pstrt, lst = pend;
if (lst == len-2) //Костыль
{
lst++;
}
for (; frst < lst; frst++, lst--)
{
cache = mass[frst];
mass[frst] = mass[lst];
mass[lst] = cache;
}
}

int main()
{
char str[1000], smbl;
int cntr = 0, end = 0, strt = 0, strlen = 0;
while ((smbl = getchar()) != '\n')
{
str[strlen] = smbl;
strlen++;
}
for (int i = 0; i < strlen; i++)
{
smbl = str[i];
if (smbl == ' ' || smbl == '!' || smbl == ',' || smbl == '.' || i == strlen - 1)
{
end = cntr - 1;
flip(str, strt, end, strlen);
strt = end + 2;
end++;
}
cntr++;
}
for (int j = 0; j < strlen; j++)
{
printf("%c", str[j]);
}
return 0;
}
