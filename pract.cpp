#include <iostream>
#include <stdlib.h>
#include <graphics.h>

class Line
{
	public:
		void divide()
		{
			int x,y;
			x=getmaxx();
			y=getmaxy();
			line((x/2),0,(x/2),y);
			line(0,(y/2),x,(y/2));
		}

		void dda(float x1,float y1,float x2,float y2)
		{
			float length;
			float x,y;
			float dx,dy;
			
			if(abs(x2-x1)<= abs(y2-y1))
				length=abs(y2-y1);
			else
				length=abs(x2-x1);
			
			dx=(x2-x1)/length;
			dy=(y2-y1)/length;
			
			x=x1+0.5;
			y=y1+0.5;
			
			int i=1;
			
			while(i<=length)
			{
				putpixel(floor(x),floor(y),GREEN);
				x=x+dx;
				y=y+dy;
				i=i+1;
			}
		}
		
		void bresenhems(int x1,int y1,int x2,int y2)
		{
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
				while(e>0)
				{
					y=y+1;
					e=e-1;
				}
				x=x+1;
				e=e+m;
			}
		}
		
}; 

int main()
{
	Line l1;
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	l1.divide();
	l1.dda(0,0,100,100);
	l1.bresenhems(100,0,200,100);
	delay(100000);
	return 0;
	
}

