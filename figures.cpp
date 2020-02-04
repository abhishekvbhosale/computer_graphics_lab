#include <iostream>
#include <stdlib.h>
#include <graphics.h>
class figures
{
		int x;
		int y;
		int r;
	public :
		void line(int x1,int y1,int x2,int y2)
		{
			//set s;
			int m;
			int x,y;
			int dx,dy;
			int e;
			 
			x=x1;
			y=y1;
			
			dx=x2-x1;
			dy=y2-y1;
			
			m=dy/dx;
			
			e=m-(1/2);
			
			for(int i=1;i<=dx;i++)
			{
				putpixel(x,y,GREEN);
				//s.setpixel(x,y);
				while(e>0)
				{
					y=y+1;
					e=e-1;
				}
				x=x+1;
				e=e+m;
			}
		}
		
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
	figures l1;
	
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	//outer rectangle--
		//horizontal--
	l1.line(50,50,250,50);
	l1.line(50,150,250,150);
		//vertical--
	//l1.line(50,50,50,150);
	//l1.line(250,50,250,150);
	//rhombus----
	//l1.line(150,50,250,100);
	//l1.line(250,100,100,150);
	//l1.line(100,150,50,100);
	//l1.line(50,100,150,50);
	delay(5000);
	closegraph();
	return 0;
	
}

