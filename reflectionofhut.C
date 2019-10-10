
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int a,b;
int gd=DETECT,gm,x,y;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI") ;
x=200;
y=200;
 a=200;

setcolor(YELLOW);
line(x+100+a,100,x+100+a,y);
line(x+100+a,100,x+200+a,100);
line(x+200+a,100,x+200+a,200);
line(x+100+a,200,x+200+a,200);
line(x+130+a,200,x+130+a,150);
line(x+130+a,150,x+160+a,150);
line(x+160+a,150,x+160+a,200);
line(x+100+a,100,x+140+a,40);
line(x+140+a,40,x+200+a,100);



line(x+100-a,100,x+100-a,y);
line(x+100-a,100,x+200-a,100);
line(x+200-a,100,x+200-a,200);
line(x+100-a,200,x+200-a,200);
line(x+130-a,200,x+130-a,150);
line(x+130-a,150,x+160-a,150);
line(x+160-a,150,x+160-a,200);
line(x+100-a,100,x+140-a,40);
line(x+140-a,40,x+200-a,100);



line(x+100+a,100+a,x+100+a,y+a);
line(x+100+a,100+a,x+200+a,100+a);
line(x+200+a,100+a,x+200+a,200+a);
line(x+100+a,200+a,x+200+a,200+a);
line(x+130+a,200+a,x+130+a,150+a);
line(x+130+a,150+a,x+160+a,150+a);
line(x+160+a,150+a,x+160+a,200+a);
line(x+100+a,100+a,x+140+a,40+a);
line(x+140+a,40+a,x+200+a,100+a);

setcolor(BLUE);
line(0,220,700,220);
line(400,0,400,400);
setcolor(YELLOW);
settextstyle(7,0,1);
outtextxy(200,50,"Reflection along x");
outtextxy(400,220,"Reflection along y");
getch();
}