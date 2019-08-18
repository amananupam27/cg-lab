//BRESHMAN's LINE DRAWING ALGO
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i;
int gd=DETECT,gm,x,y,x1,y1,x2,y2,dx,dy,s,t,d;
float m;
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
printf("Enter x1=");
scanf("%d",&x1);
printf("Enter y1=");
scanf("%d",&y1);
printf("Enter x2=");
scanf("%d",&x2);
printf("Enter y2=");
scanf("%d",&y2);
dx=x2-x1;
dy=y2-y1;
d=(2*dy)-dx;
t=2*(dy-dx);
s=2*dy;
x=x1;
y=y1;

while(x<=x2)
{
if(d>0)
{
y=y+1;
d=d+t;
}
else
{
d=d+s;
}
putpixel(x,y,WHITE);
x=x+1;

}
getch();
}