#include <stdlib.h>
#include <graphics.h>
int main()
{
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	//for(i=0;i<=400;i=i+10){
	line(100,130,100,80);
	line(100,80,250,20);
	line(250,20,550,70);
	line(550,70,550,130);
	//tires and base--
	line(100,130,150,130);
	arc(180,130,180,360,30);
	circle(180,130,20);
	line(550,130,500,130);
	arc(470,130,180,360,30);
	circle(470,130,20);
	line(210,130,440,130);
	//windows--
	line(125,80,250,30);
	line(250,30,440,70);
	line(125,80,440,70);
	line(250,30,250,130);
	line(350,75,350,130);
	delay(1000);
	/*setcolor(BLACK);
	cleardevice();// for clearing the before screen
	line(100+i,130,100+i,80);
	line(100+i,80,250+i,20);
	line(250+i,20,550+i,70);
	line(550+i,70,550+i,130);
	//tires and base--
	line(100+i,130,150+i,130);
	arc(180+i,130,180,360,30);
	circle(180+i,130,20);
	line(550+i,130,500+i,130);
	arc(470+i,130,180,360+i,30);
	circle(470+i,130,20);
	line(210+i,130,440+i,130);
	//windows--
	line(125+i,80,250+i,30);
	line(250+i,30,440+i,70);
	line(125+i,80,440+i,70);
	line(250+i,30,250+i,130);
	line(350+i,75,350+i,130);
	}*/
	getch();
	closegraph();
	return 0;
}
