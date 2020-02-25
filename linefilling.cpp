#include <iostream>
#include <graphics.h>
using namespace std;
class LineFilling
{
		int vertex[10][2];
		int n;
		int ymax,ymin,xmas,xmin;
	public :
		LineFilling()
		{
		}//end of constructor
		void create()
		{
			cout<<"\nEnter the number of vertices--\t";
			cin>>n;
			for(int i=0,j=0;i<n;i++)
			{
				for(int j=0;j<2;j++)
				{
					if(j==0)
					{
						cout<<"\nEnter X-coordinate--\t";
						cin>>vertex[i][j];
					}
					else
					{	
						cout<<"\nEnter Y-coordinate--\t";
						cin>>vertex[i][j];
					}
				}
			}
		}
		void sort()
		{
			ymin=vertex[0][1];
			ymax=vertex[0][1];
			for(int i=0;i<n;i++)
			{
				if(vertex[i][1]<ymin)
					ymin=vertex[i][1];
				if(vertex[i][1]>ymax)
					ymax=vertex[i][1];
			}
			cout<<"\n"<<ymin<<"\t"<<ymax<<endl;
		}
		void show()
		{
			int x1,y1,x2,y2;
			int i=0;
			for(i=1;i<n;i++)
			{
				line(vertex[i-1][0],vertex[i-1][1],vertex[i][0],vertex[i][1]);
			}
			i=n-1;	
			line(vertex[i][0],vertex[i][1],vertex[0][0],vertex[0][1]);
		}
};
int main()
{
	LineFilling lf;
	lf.create();
	lf.sort();
	int gm, gd,i;
	gd=DETECT;
	initgraph(&gm, &gd,NULL);
	lf.show();
	delay(5000);
	closegraph();
	return 0;
}
