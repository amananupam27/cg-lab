//DDA
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i;
int gd=DETECT,gm,x,y,x1,y1,x2,y2;
float m;
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
printf("DDA ALGORITHM\n");
printf("Enter x1=");
scanf("%d",&x1);
printf("Enter y1=");
scanf("%d",&y1);
printf("Enter x2=");
scanf("%d",&x2);
printf("Enter y2=");
scanf("%d",&y2);
m=(y2-y1)/(x2-x1);
x=x1;
y=y1;
if(m<=1)
{
while(x<=x2)
{
y=y+m;
putpixel(x,y,WHITE);
x++;
}
}

else
{
while(y<=y2)
{
x=x+(1/m);
putpixel(x,y,WHITE);
y++;
}
}


getch();
}
