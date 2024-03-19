#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
int dd;
int mm;
int yy;
};
struct calendar
{
char day[20];
struct date dmy;
char activity[50];
};
struct calendar *cal;
void create();
void read();
void display();
int main()
{
create();
read();
display();
return 0;
}
void create()
{
cal = (struct calendar*)malloc(7*sizeof(struct calendar));
}

void read()
{
int i;
printf("enter the details of Calendar\n");
for(i=0;i<7;i++)
{
printf("enter the details of Day%d\n",i+1);
printf("Enter the day: ");
scanf("%s",(cal+i)->day);
printf("Enter the day in dd mm yyyy format: ");
scanf("%d%d%d%*c",&(cal+i)->dmy.dd,&(cal+i)->dmy.mm,&(cal+i)->dmy.yy);
printf("Enter the activity:");
gets((cal+i)->activity);
}
}
void display()
{
int i;
printf("Weekly Activity details Report are as follows:\n");
printf("Day\t Date\t\t Activity\n");
for(i=0;i<7;i++)
{
printf("%s\t %d-%d-%d\t\t %s\n",(cal+i)->day,(cal+i)->dmy.dd,(cal+i)->
dmy.mm,(cal+i)->dmy.yy,(cal+i)->activity);
}
}
