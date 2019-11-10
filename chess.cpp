#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int left=0,right=50,top=0,bottom=50;
int kx=325,ky=25,quit,nextmove=0;
int arrayx[8],arrayy[8],incr=0,i;

void chess_board(){
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
	left=0;
	right=50;
	top=0;
	bottom=50;
}
void chess(int kx,int ky){
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
	printf("next possible moves\n");
	for(i=0;i<incr;i++){
	printf("%d \t%d\n",arrayx[i],arrayy[i]);
	}
	incr=0;
}

void clearscreen(){
	printf("Enter any character to clear screen");
	getch();
	cleardevice();
}

void closingmenu(){
		printf("Enter 0 to quit or 1 to continue");
		scanf("%d",&quit);
		nextmove=0;
}
void main()
{
	int gd=DETECT, gm;
	clrscr();
	initgraph(&gd,&gm,"C://TURBOC3/BGI");
	for(i=0;i<8;i++){
		arrayx[i]=999;
		arrayy[i]=999;
	}

	chess_board();
	chess(kx,ky);
	clearscreen();

	//user input

	do{
		printf("\nEnter your next move");
		scanf("%d %d",&kx,&ky);
		for(i=0;i<8;i++){
			if(kx==arrayx[i]&&ky==arrayy[i]){
				nextmove=1;
			}
		}
		if(nextmove==1){
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
		printf("next possible moves\n");
		for(i=0;i<incr;i++){
		printf("%d \t%d\n",arrayx[i],arrayy[i]);
		}
		incr=0;
			for(i=incr;i<8;i++){
			arrayx[i]=999;
			arrayy[i]=999;
			}
			closingmenu();
		}
		else{
			printf("\nNot a valid move\n");
			closingmenu();
		}
	}
	while(quit!=0);
	getch();
	closegraph();
}