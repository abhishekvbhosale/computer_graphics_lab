#include <iostream>
#include <stdlib.h>
#include <graphics.h>
class Circle1
{
		int x,y,R;
	public :
		Circle1(int x1, int y1, int R1)
		{
			x=x1;
			y=y1;
			R=R1;
		}
		void Bresen_Circle()
		{
			x=0;
			y=R;
			int di=2(1-R);
			int limit=0;
			while(y>=limit)
			{
				putpixel(x,y,WHITE);
				if(di<0)
				{
					int dI = 2*di + 2y -1;
					if(dI<=0)
						Mh(x,y,di);
					else
						Md(x,y,di);
				}
				else if(di>0)
				{
					int dI = 2*di - 2x -1;
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
