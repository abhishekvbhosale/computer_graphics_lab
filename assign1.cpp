#include <iostream>
#include <stdlib.h>
#include <graphics.h>
class set
{
	int x;
	int y;
	public :
		void setpixel(int x1,int y1)
		{	
			x=x1;
			y=y1;
			putpixel(x,y,GREEN);
		}
		void setpixel(float x2,float y2)
		{
			x=x1;
			y=y1;
			putpixel(x,y,RED);
		}
};
class Line : public set
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

		void line(float x1,float y1,float x2,float y2)
		{
			set s;
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
				//putpixel(floor(x),floor(y),GREEN);
				s.setpixel(x,y);
				x=x+dx;
				y=y+dy;
				i=i+1;
			}
		}
		
		void line(int x1,int y1,int x2,int y2)
		{
			set s;
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
				//putpixel(x,y,GREEN);
				s.setpixel(x,y);
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
/*class Circle1
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
*/
int main()
{
	//Line l1;
	Circle1 c1;
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	//l1.divide();
	l1.line(0,0,100,100);
	l1.line(100.00f,0.00f,200.00f,100.00f);
	//c1.Bresen_Circle(100,100,50);
	delay(5000);
	closegraph();
	return 0;
	
}

