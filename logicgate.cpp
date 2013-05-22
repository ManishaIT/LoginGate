#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
void basic();
void uni();
void and(char);
void or(char);
void not(char);
void nand(char);
void nor(char);
void menu();
char gatemenu();
char ch,c,p='\0';
char val ;
void main()
{
  int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\tc\\bgi");
	outtextxy(200,50,"LOGIN PAGE");
	char name[20];
	char *password;
	setbkcolor(1);
	for(int i=0;i<3;i++)
	{
		lb:
		;
		clrscr();
		cleardevice();
		rectangle(200,120,330,85);
		cout<<"\n\n\n\n\tEnter the username\n\n\t\t\t\t";
		outtextxy(100,100,"USERNAME");
		rectangle(200,120,330,85);
		cin.getline(name,20);
		if(strcmp(name,"rcew"))
		{
			cout<<"\n\n\t\tsorry WRONG username!!!";
			delay(700);
			goto lb;
		}
		else
		{
			cout<<"\n\tOK...\n";

		}
		printf("\tEnter the password\n\n\n\t\t\t\t");
		outtextxy(100,200,"PASSWORD");
		rectangle(200,220,330,180);
		password=getpass("");
		cprintf("%s",password);
	       /*	i=0;
		while(p!=13)
		{


			password[i]=getch();
			p=password[i];
			i++;
			if(p!=13&&p!=0) putc('*',stdout);
		}*/
		if(strcmp(password,"logic"))
		{
			cout<<"\n\n\t\tINVALID user name & password!!!!\n";
			cout<<password;
			delay(800);
		}
		else
		{
			cleardevice();
			cout<<"\n\t\t\tWELCOME TO LOGIC GATE FAMILY.\n";
			delay(800);
			menu();
			break;
		}
	}
	getch();
}
void menu()
 {
	clrscr();
	cleardevice();
	gotoxy(200,200);
	cout<<"\t\t\t\t\tMENU";
	cout<<"\n\n\n\t\t\t1.BASIC GATES";
	cout<<"\n\n\n\t\t\t2.UNIVERSAL GATES";
	cout<<"\n\n\n\t\t\t3.EXIT";
	cout<<"\t\t\t\n\n\t\t\tEnter the choice:\t";
	cin>>ch;
	delay(800);
	switch(ch)
	{
		case '1': clrscr();
			  cleardevice();
			  gotoxy(200,200);
			  basic();
			  break;
		case '2':clrscr();
			 cleardevice();
			 gotoxy(200,200);
			 uni();
			 break;
		case '3':exit(0);
			 break;
		default : cout<<"\n\n\n\t\t\tWRONG choice!!!!!!!!!";
			 delay(800);
			  clrscr();
			 cleardevice();
			 gotoxy(200,200);
			 menu();
			 break;
	}
 }
void basic()
 {
	cout<<"\t\t\tBASIC GATES";
	cout<<"\n\n\n\t\t\t1.AND GATE";
	cout<<"\n\n\n\t\t\t2.OR GATE";
	cout<<"\n\n\n\t\t\t3.NOT GATE";
	cout<<"\n\n\n\t\t\t4.PREVIOUS";
	cout<<"\n\n\n\t\t\t5.EXIT";
	cout<<"\n\t\t\n\t\t\tEnter the choice:\t";
	cin>>c;
	delay(800);
	switch(c)
	  {
		case '1':clrscr();
			 cleardevice();
			 gotoxy(200,300);
			 cout<<"\n\t\tAND GATE REPRESENTATION";
			 val= gatemenu();
			 and(val);
			 break;
		case '2':clrscr();
			 cleardevice();
			 gotoxy(200,300);
			 cout<<"\n\t\tOR GATE REPRESENTATION" ;
			 val=gatemenu();
			 or(val);
			 break;
		case '3':clrscr();
			 cleardevice();
			 gotoxy(200,300);
			 cout<<"\n\t\tNOT GATE REPRESENTATION";
			 val=gatemenu();
			 not(val);
			 break;
		case '4':clrscr();
			 gotoxy(200,300);
			 menu();
			 break;
		case '5':exit(0);
			 break;
		default :cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!" ;
			 delay(800);
			 clrscr();
			 cleardevice();
			 gotoxy(200,200);
			 basic();
			 break;
	  }
 }
void uni()
 {
	cout<<"\t\t\tUNIVERSAL GATES";
	cout<<"\n\n\n\t\t\t1.NAND GATE";
	cout<<"\n\n\n\t\t\t2.NOR GATE";
	cout<<"\n\n\n\t\t\t3.PREVIOUS";
	cout<<"\n\n\n\t\t\t4.EXIT";
	cout<<"\n\n\t\t\tEnter the choice:\t";
	cin>>c;
	delay(800);
	switch(c)
	 {
		case '1':clrscr();
			 cleardevice();
			 gotoxy(200,300);
			 cout<<"\n\t\tNAND GATE REPRESENTATION" ;
			 val=gatemenu();
			 nand(val);
			 break;
		case '2':clrscr();
			 cleardevice();
			 gotoxy(200,300);
			 cout<<"\n\t\tNOR GATE REPRESENTATION" ;
			 val=gatemenu();
			 nor(val);
			 break;
		case '3':clrscr();
			 gotoxy(200,300);
			 menu();
			 break;
		case '4':exit(0);
			 break;
		default :cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!" ;
			 delay(800);
			  clrscr();
			 cleardevice();
			 gotoxy(200,200);
			 uni();
			 break;
	  }
 }
void truth(char o1[1],char o2[1],char o3[1],char o4[1])
{
	setcolor(RED);
	rectangle(90,100,240,200);
	rectangle(140,100,190,200);
	rectangle(90,120,240,180);
	rectangle(90,140,240,160);
	setcolor(WHITE);
	outtextxy(142,110,"INPUT2");
	outtextxy(91,110,"INPUT1");
	outtextxy(193,110,"OUTPUT");
	outtextxy(155,125,"0");
	outtextxy(155,145,"1");
	outtextxy(155,165,"0");
	outtextxy(155,185,"1");
	outtextxy(110,125,"0");
	outtextxy(110,145,"0");
	outtextxy(110,165,"1");
	outtextxy(110,185,"1");
	outtextxy(205,125,o1);
	outtextxy(205,145,o2);
	outtextxy(205,165,o3);
	outtextxy(205,185,o4);
}
void snd()
{
  sound(2000);
delay(3);
nosound();
}
void and_nand()
{	line(260,190,310,190);
	line(260,220,310,220);
	line(310,180,310,230);
	line(310,180,340,180);
	line(310,230,340,230);
	circle(258,190,3);// input1
	circle(258,220,3);  //input2
	circle(418,205,3);    //output
	arc(340,205,270,90,25);
	outtextxy(248,192,"A");
	outtextxy(248,222,"B");
	outtextxy(422,200,"Y");
}
void and_pre(int x,int y)
 {
	for(int i=1;i<4;i++)
	{
	  for(int j=0;j<50;j++)
	  {
		 cleardevice();
		and_nand();
		line(365,205,415,205);
		if(x==1 && y==0)
		 {	circle(258+j,189,3);
			floodfill(258+j,189,4);
		 }
		else if(x==0 && y==1)
		 {
			circle(258+j,221,3);
			floodfill(258+j,221,4);
		 }
		else if(x==1 && y==1)
		{  	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(258+j,221,3);
			floodfill(258+j,221,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		}
		delay(10);
	  }
	delay(100);
	}
 }
void and(char x)
{
switch(x)
{
	case '1':int i1,i2;
		 cleardevice();
		 setbkcolor(0);
		 truth("0","0","0","1");
		 setcolor(RED);
		 and_nand();
		 line(365,205,415,205);
		 printf("\n\n\n\t\tEnter input A:\t");
		 scanf("%d",&i1);
		 printf("\n\t\tenter input B:\t");
		 scanf("%d",&i2);
		 and_pre(i1,i2);
		 break;
	case '2':clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 basic();
		 break;
	case '3':exit(0);
		 break;
	default: cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!!!!!!!" ;
		 delay(800);
		 clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 val=gatemenu();
		 and(val);
		 break;
}
}
char gatemenu()
 {

	cout<<"\n\n\n\t\t\t1.NEXT(PRESENTATION)";
	cout<<"\n\n\n\t\t\t2.PREVIOUS";
	cout<<"\n\n\n\t\t\t3.EXIT";
	cout<<"\n\n\t\t\tEnter the choice:\t";
	cin>>c;
	return c;
 }
void or_nor()
{       line(260,190,310,190);
	line(260,220,310,220);
	arc(290,205,290,90,25);
	line(290,230,350,212);
	line(352,194,288,179);
	arc(346,202,280,70,10);
	circle(258,190,3);// input1
	circle(258,220,3);  //input2
	circle(418,205,3);    //output
	outtextxy(248,192,"A");
	outtextxy(248,222,"B");
	outtextxy(422,200,"Y");
}
void or_pre(int x,int y)
 {
	for(int i=1;i<4;i++)
	{
	  for(int j=0;j<50;j++)
	  {
		 cleardevice();
		 or_nor();
		 line(355,205,415,205);
		if(x==1 && y==0)
		 {	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		 }
		else if(x==0 && y==1)
		 {
			circle(258+j,221,3);
			floodfill(258+j,221,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		 }
		else if(x==1 && y==1)
		{  	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(258+j,221,3);
			floodfill(258+j,221,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		}
		delay(10);
	  }
	delay(100);
	}
 }
void or(char x)
{
switch(x)
{
	case '1':int i1,i2;
		 cleardevice();
		 setbkcolor(0);
		 truth("0","1","1","1");
		 setcolor(RED);
		 or_nor();
		 line(355,205,415,205);
		 printf("\n\n\n\t\tEnter input A:\t");
		 scanf("%d",&i1);
		 printf("\n\t\tenter input B:\t");
		 scanf("%d",&i2);
		 or_pre(i1,i2);
		 break;
	case '2':clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 basic();
		 break;
	case '3':exit(0);
		 break;
	default: cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!!!!!!!" ;
		 delay(800);
		 clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 val=gatemenu();
		 or(val);
		 break;
}
}
void nand_pre(int x,int y)
 {
	for(int i=1;i<4;i++)
	{
	  for(int j=0;j<50;j++)
	  {
		 cleardevice();
		 and_nand();
		if(x==1 && y==0)
		 {	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		 }
		else if(x==0 && y==1)
		 {
			circle(258+j,221,3);
			floodfill(258+j,221,4);
			circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		 }
		else if(x==0 && y==0)
		{   	circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		}
		else if(x==1 &&y==1)
		{	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(258+j,221,3);
			floodfill(258+j,221,4);
		}
		delay(10);
	  }
	delay(100);
	}
 }
void nand(char x)
{
switch(x)
{
	case '1':int i1,i2;
		 cleardevice();
		 setbkcolor(0);
		 truth("1","1","1","0");
		 setcolor(RED);
		 and_nand();
		 line(371,205,415,205);
		 circle(368,205,3);
		 printf("\n\n\n\t\tEnter input A:\t");
		 scanf("%d",&i1);
		 printf("\n\t\tenter input B:\t");
		 scanf("%d",&i2);
		 nand_pre(i1,i2);
		 break;
	case '2':clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 uni();
		 break;
	case '3':exit(0);
		 break;
	default: cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!!!!!!!" ;
		 delay(800);
		 clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 val=gatemenu();
		 nand(val);
		 break;
}
}
void nor_pre(int x,int y)
 {
	for(int i=1;i<4;i++)
	{
	  for(int j=0;j<50;j++)
	  {
		cleardevice();
		or_nor();
		line(361,205,415,205);
		circle(358,205,3);
		if(x==1 && y==0)
		 {	circle(258+j,189,3);
			floodfill(258+j,189,4);
		 }
		else if(x==0 && y==1)
		 {
			circle(258+j,221,3);
			floodfill(258+j,221,4);
		 }
		else if(x==1 && y==1)
		{  	circle(258+j,189,3);
			floodfill(258+j,189,4);
			circle(258+j,221,3);
			floodfill(258+j,221,4);
		}
		else if(x==0 && y==0)
		{	circle(418+j,205,3);
			floodfill(418+j,205,4);
			snd();
		}
		delay(10);
	  }
	delay(100);
	}
 }
void nor(char x)
{
switch(x)
{
	case '1':int i1,i2;
		 cleardevice();
		 setbkcolor(0);
		 truth("1","0","0","0");
		 setcolor(RED);
		 or_nor();
		line(361,205,415,205);
		circle(358,205,3);
		 printf("\n\n\n\t\tEnter input A:\t");
		 scanf("%d",&i1);
		 printf("\n\t\tenter input B:\t");
		 scanf("%d",&i2);
		 nor_pre(i1,i2);
		 break;
	case '2':clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 uni();
		 break;
	case '3':exit(0);
		 break;
	default: cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!!!!!!!" ;
		 delay(800);
		 clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 val=gatemenu();
		 nor(val);
		 break;
}
}
void nt()
{	line(260,205,310,205);
line(310,180,310,230);
line(310,180,350,205);
line(350,205,310,230);
line(350,205,400,205);
circle(258,205,3);// input1
circle(403,205,3);    //output
outtextxy(255,193,"A");
outtextxy(405,195,"Y");
}
void not_pre(int x)
 {
	for(int i=1;i<4;i++)
	{
	  for(int j=0;j<50;j++)
	  {
		 cleardevice();
		nt();
		if(x==1 )
		 {	circle(258+j,204,3);
			floodfill(258+j,204,4);
		 }
		else if(x==0)
		 {
			circle(403+j,204,3);
			floodfill(403+j,204,4);
			snd();
		 }
		delay(10);
	  }
	delay(100);
	}
 }
void not(char x)
{
switch(x)
{
	case '1':int i;
		 cleardevice();
		 setbkcolor(0);
		 setcolor(WHITE);
		 outtextxy(142,110,"INPUT");
		 outtextxy(193,110,"OUTPUT");
		 outtextxy(165,125,"0");
		 outtextxy(165,145,"1");
		 outtextxy(215,125,"0");
		 outtextxy(215,145,"1");
		 setcolor(RED);
		 rectangle(140,100,240,160);
		 rectangle(140,120,240,140);
		 line(190,100,190,160);
		 nt();
		 printf("\n\n\n\t\tEnter input A:\t");
		 scanf("%d",&i);
		 not_pre(i);
		 break;
	case '2':clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 basic();
		 break;
	case '3':exit(0);
		 break;
	default: cout<<"\n\n\n\t\tWRONG choice!!!!!!!!!!!!!!!" ;
		 delay(800);
		 clrscr();
		 cleardevice();
		 gotoxy(200,300);
		 val=gatemenu();
		 not(val);
		 break;
}
}
