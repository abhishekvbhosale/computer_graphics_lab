#include <iostream>
#include <stdlib.h>
#include <graphics.h>
class Circle1
{
		int x,y,R;
	public :
		void Mh(int& x,int& y,int& di)
		{
			x=x+1;
			di=di+2*x+1;
		}
		void Md(int& x,int& y,int& di)
		{
			x=x+1;
			y=y-1;
			di=di+2*x-2*y+2;
		}
		void Mv(int& x,int& y,int& di)		{
			y=y-1;
			di=di-2*y+2;
			
		}
		void Bresen_Circle(int x1, int y1, int R)
		{
			x=0;
			y=R;
			int di=2*(1-R);
			int limit=0;
			while(y>=limit)
			{
				putpixel(x1+x,y1+y,RED);
				putpixel(x1+x,y1-y,RED);
				putpixel(x1-x,y1-y,RED);
				putpixel(x1-x,y1+y,RED);
				//delay(500);
				if(di<0)
				{
					int dI = 2*di + 2*y -1;
					if(dI<=0)
						Mh(x,y,di);
					else
						Md(x,y,di);
				}
				else if(di>0)
				{
					int dI = 2*di - 2*x -1;
					if(dI<=0)
						Md(x,y,di);
					else
						Mv(x,y,di);
				}
				else
					Md(x,y,di);
			}
		}
};

int main()
{
	Circle1 c1;
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	c1.Bresen_Circle(100,100,50);
	delay(5000);
	closegraph();
	return 0;
	
}

