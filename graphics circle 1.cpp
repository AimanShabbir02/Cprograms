#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	initwindow( 400, 400,"Graphics using Dev-C++");
	setcolor(YELLOW);
	for(int i=5; i<=150; i+=5){
		circle(200, 200,i);
	}
	getch();
	closegraph();
	return 0;
}
