#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void chess_board(){
int left=0,right=50,top=0,bottom=50,i;
for(i=0;i<8;i++){
	for(int j=0;j<8;j++){
	setcolor(YELLOW);
	rectangle(left,top,right,bottom);
	left+=50;
	right+=50;
	}
	left=0;
	right=50;
	top+=50;
	bottom+=50;
}

}
void main()
{
int gd=DETECT, gm;
clrscr();
initgraph(&gd,&gm,"C://TURBOC3/BGI");

//chess board

int kx=325,ky=25,quit,nextmove=0;
int arrayx[8],arrayy[8],incr=0,i,dis=25;
for(i=0;i<8;i++){
arrayx[i]=999;
arrayy[i]=999;
}
	chess_board();

	//knight's start pos at start
	setcolor(WHITE);
	circle(kx,ky,25);

	//knight's next possible move at start

	setcolor(RED);
	if((kx-50)>=0&&(ky-100)>=0){
	circle((kx-50),(ky-100),25);
	arrayx[incr]=(kx-50);
	arrayy[incr]=(ky-100);
	incr++;
	}

	if((kx+50)<=400&&(ky-100)>=0){
	circle((kx+50),(ky-100),25);
	arrayx[incr]=(kx+50);
	arrayy[incr]=(ky-100);
	incr++;
	}

	if((kx-100)>=0&&(ky-50)>=0){
	circle((kx-100),(ky-50),25);
	arrayx[incr]=(kx-100);
	arrayy[incr]=(ky-50);
	incr++;
	}

	if((kx-100)>=0&&(ky+50)<=400){
	circle((kx-100),(ky+50),25);
	arrayx[incr]=(kx-100);
	arrayy[incr]=(ky+50);
	incr++;
	}

	if((kx-50)>=0&&(ky+100)<=400){
	circle((kx-50),(ky+100),25);
	arrayx[incr]=(kx-50);
	arrayy[incr]=(ky+100);
	incr++;
	}

	if((kx+50)<=400&&(ky+100)<=400){
	circle((kx+50),(ky+100),25);
	arrayx[incr]=(kx+50);
	arrayy[incr]=(ky+100);
	incr++;
	}

	if((kx+100)<=400&&(ky+50)<=400){
	circle((kx+100),(ky+50),25);
	arrayx[incr]=(kx+100);
	arrayy[incr]=(ky+50);
	incr++;
	}

	if((kx+100)<=400&&(ky-50)>=0){
	circle((kx+100),(ky-50),25);
	arrayx[incr]=(kx+100);
	arrayy[incr]=(ky-50);
	incr++;
	}
	setcolor(WHITE);
	outtextxy(425,25,"next possible moves\n");
	for(i=0;i<incr;i++){
	printf("\t\t\t\t\t\t\t%d\t%d\n",arrayx[i],arrayy[i]);
	}
	incr=0;

	//user input

do{
	//cleardevice();
	setcolor(WHITE);
	outtextxy(425,200,"\nEnter your next move");
	scanf("%d %d",&kx,&ky);
	for(i=0;i<8;i++){
		if(kx==arrayx[i]&&ky==arrayy[i]){
			nextmove=1;
		}
	}
	if(nextmove==1){
	//knight's start pos
	setcolor(WHITE);
	circle(kx,ky,25);

	//knight's next possible move

		setcolor(RED);
		if((kx-50)>=0&&(ky-100)>=0){
		circle((kx-50),(ky-100),25);
		arrayx[incr]=(kx-50);
		arrayy[incr]=(ky-100);
		incr++;
		}

		if((kx+50)<=400&&(ky-100)>=0){
		circle((kx+50),(ky-100),25);
		arrayx[incr]=(kx+50);
		arrayy[incr]=(ky-100);
		incr++;
		}

		if((kx-100)>=0&&(ky-50)>=0){
		circle((kx-100),(ky-50),25);
		arrayx[incr]=(kx-100);
		arrayy[incr]=(ky-50);
		incr++;
		}

		if((kx-100)>=0&&(ky+50)<=400){
		circle((kx-100),(ky+50),25);
		arrayx[incr]=(kx-100);
		arrayy[incr]=(ky+50);
		incr++;
		}

		if((kx-50)>=0&&(ky+100)<=400){
		circle((kx-50),(ky+100),25);
		arrayx[incr]=(kx-50);
		arrayy[incr]=(ky+100);
		incr++;
		}

		if((kx+50)<=400&&(ky+100)<=400){
		circle((kx+50),(ky+100),25);
		arrayx[incr]=(kx+50);
		arrayy[incr]=(ky+100);
		incr++;
		}

		if((kx+100)<=400&&(ky+50)<=400){
		circle((kx+100),(ky+50),25);
		arrayx[incr]=(kx+100);
		arrayy[incr]=(ky+50);
		incr++;
		}

		if((kx+100)<=400&&(ky-50)>=0){
		circle((kx+100),(ky-50),25);
		arrayx[incr]=(kx+100);
		arrayy[incr]=(ky-50);
		incr++;
		}

		//clearing device
		outtextxy(0,435,"enter any character to clear screen");
		getch();
		cleardevice();

		setcolor(WHITE);
		outtextxy(425,25,"next possible moves\n");
		for(i=0;i<incr;i++){
		printf("\t\t\t\t\t\t\t%d\t%d\n",arrayx[i],arrayy[i]);
		}
		dis=25;
		for(i=incr;i<8;i++){
		arrayx[i]=999;
		arrayy[i]=999;
		}
		incr=0;

	chess_board();
	setcolor(WHITE);
	circle(kx,ky,25);

	//knight's next possible move

		setcolor(RED);
		if((kx-50)>=0&&(ky-100)>=0){
		circle((kx-50),(ky-100),25);
		arrayx[incr]=(kx-50);
		arrayy[incr]=(ky-100);
		incr++;
		}

		if((kx+50)<=400&&(ky-100)>=0){
		circle((kx+50),(ky-100),25);
		arrayx[incr]=(kx+50);
		arrayy[incr]=(ky-100);
		incr++;
		}

		if((kx-100)>=0&&(ky-50)>=0){
		circle((kx-100),(ky-50),25);
		arrayx[incr]=(kx-100);
		arrayy[incr]=(ky-50);
		incr++;
		}

		if((kx-100)>=0&&(ky+50)<=400){
		circle((kx-100),(ky+50),25);
		arrayx[incr]=(kx-100);
		arrayy[incr]=(ky+50);
		incr++;
		}

		if((kx-50)>=0&&(ky+100)<=400){
		circle((kx-50),(ky+100),25);
		arrayx[incr]=(kx-50);
		arrayy[incr]=(ky+100);
		incr++;
		}

		if((kx+50)<=400&&(ky+100)<=400){
		circle((kx+50),(ky+100),25);
		arrayx[incr]=(kx+50);
		arrayy[incr]=(ky+100);
		incr++;
		}

		if((kx+100)<=400&&(ky+50)<=400){
		circle((kx+100),(ky+50),25);
		arrayx[incr]=(kx+100);
		arrayy[incr]=(ky+50);
		incr++;
		}

		if((kx+100)<=400&&(ky-50)>=0){
		circle((kx+100),(ky-50),25);
		arrayx[incr]=(kx+100);
		arrayy[incr]=(ky-50);
		incr++;
		}
		incr=0;
		setcolor(WHITE);
		outtextxy(0,415,"Enter 0 to quit or 1 to continue");
		scanf("%d",&quit);
		nextmove=0;

	}
	else{
		setcolor(WHITE);
		outtextxy(0,410,"Not a valid move\n");
		outtextxy(0,425,"Enter 0 to quit or 1 to continue");
		scanf("%d",&quit);
		nextmove=0;
	}
}
while(quit!=0);

	getch();
	closegraph();
}