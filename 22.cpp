#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <ctime>
#include <fstream>

using namespace std;
int random (int N) { return rand() % N; }

void snegovik (int kx, int ky, int color1, int color2)
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle( kx, ky, 10);
     circle (kx, ky+25, 15);
     circle (kx-4, ky-1, 3 );
     circle (kx+4, ky-1, 3 );
     circle (kx, ky+4, 3 );
     circle (kx, ky+15, 3 );
     circle (kx, ky+23, 3 );
     circle (kx, ky+31, 3 );
     floodfill(kx,ky,color1); 
}

void outtextxy(int x, int y, int lvl)
{
     char buf[3];
     snprintf(buf, sizeof(buf), "%d", lvl);
     outtextxy(x, y, buf);
}

void outtextxyT(int x, int y, int t)
{
     char baf[3];
     snprintf(baf, sizeof(baf), "%d", t);
     outtextxy(x, y, baf);
}

void outtextxyJ(int x, int y, int j)
{
     char bif[3];
     snprintf(bif, sizeof(bif), "%d", j);
     outtextxy(x, y, bif);
}

void ykrachenia ( int o, int p, int color1,int color2 )
{ 
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle( o, p, 10);
     floodfill( o, p, color1); 
}


void zvezda( int z, int m, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     moveto (z, m);   
     lineto (z+15, m+10);
     lineto (z, m+20);
     lineto (z-15, m+10);
     lineto (z, m);
     floodfill( z, m, color1); 
}


void PRAVO ( int x, int y, int color1,int color2 )
{ 
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x+10,y-10,5);
     moveto(x+5,y+5);
     lineto(x+17,y+6);
     floodfill(x,y,color1); 
}

void LEVO ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-10,y-10,5);
     moveto(x-5,y+5);
     lineto(x-17,y+6);
     floodfill(x,y,color1);   
}

void VERH ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-8,y,5);
     circle(x+8,y,5);
     moveto(x+5,y-12);
     lineto(x-5,y-12);
     floodfill(x,y,color1);   
}

void VNIZ ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-8,y,5);
     circle(x+8,y,5);
     moveto(x+5,y+12);
     lineto(x-5,y+12);
     floodfill(x,y,color1); 
}

main () 
{  
float time=0;
int go=0, score=0, Polochenie=0, pynkt=0, k, x, y, Yx, Yy, Stena=0, chel=4, lvl=1, Siel1, Siel2, Siel3, Siel4, Zx, Zy, color1, color2, END=0, Flag=0, Flag1, Knopka;
printf("          МЕНЮ\n");
printf("\n1) Начать новую игру.\n2) Выход.\n");

LABLE: 
       printf("\nВЫБЕРИТЕ ПУНКТ МЕНЮ: ");
       scanf("%d", &pynkt);
       
if ((pynkt>2) || (pynkt<1)) 
{
printf("Выбранного вами пункта не существует.\nПовторите попытку");
goto LABLE;
}

else
if (pynkt==2) 
{
return 0;
}

else
if (pynkt==1)
{        
printf ("\nПРАВИЛА ИГРЫ:\n1) Ваша задача: собрать все ёлочные игрушки.\n2) Опасайтесь злых снеговиков, они очень опасны.\n3) Соберите необходимое количество урашений для перехода на следующий уровень.\n4) При окончании игры нажмите Esc.\n5) При нахождении бага игры, обращайтесь к создателю.");
LABLE4: 
        printf ("\n\nGO(1)?: ");
        scanf ("%d", &go);

if (go!=1) 
{
printf("Выбранного вами пункта не существует.\nПовторите попытку");
goto LABLE4;
}

if (go==1)
{
initwindow (900, 601);
setfillstyle(1, 0);
bar (0, 0, 399, 399);
setcolor(RED);
moveto(0,0);
lineto(600,0);
lineto(600,600);
lineto(0,600);
lineto(0,0);
moveto(259,0);
lineto(259,159);
moveto(259,240);
lineto(259,259);
moveto(259,240);
lineto(240,240);
lineto(240,259);
lineto(259,259);
moveto(160,159);
lineto(259,159);
moveto(159,160);
lineto(159,259);
moveto(259,340);
lineto(259,359);
lineto(240,359);
lineto(240,340);
lineto(259,340);
moveto(259,440);
lineto(259,600);
moveto(340,0);
lineto(340,159);
lineto(440,159);
lineto(440,259);
moveto(0,259);
lineto(159,259);
moveto(340,259);
lineto(359,259);
lineto(359,240);
lineto(340,240);
lineto(340,259);
moveto(440,259);
lineto(600,259);
moveto(0,340);
lineto(159,340);
lineto(159,440);
lineto(259,440);
moveto(340,340);
lineto(359,340);
lineto(359,359);
lineto(340,359);
lineto(340,340);
moveto(440,340);
lineto(600,340);
moveto(440,340);
lineto(440,440);
lineto(340,440);
lineto(340,600);
moveto(159,159);
lineto(160,159);
rectangle (140, 140, 459, 459);
rectangle (59, 59, 540, 540);
moveto(535,0);
lineto(535,59);
lineto(600,59);
setcolor(BLACK);
moveto(139,259);
lineto(60,259);
moveto(140,260);
lineto(140,339);
moveto(60,340);
lineto(139,340);
moveto(60,340);
lineto(139,340);
moveto(260,140);
lineto(339,140);
moveto(259,139);
lineto(259,60);
moveto(340,139);
lineto(340,60);
moveto(259,0);
lineto(259,58);
moveto(340,0);
lineto(340,58);
moveto(259,541);
lineto(259,599);
moveto(340,541);
lineto(340,599);
moveto(260,459);
lineto(339,459);
moveto(259,460);
lineto(259,539);
moveto(340,460);
lineto(340,539);
moveto(460,259);
lineto(539,259);
moveto(460,340);
lineto(539,340);
moveto(459,339);
lineto(459,260);
moveto(600,260);
lineto(600,339);
setfillstyle (1, 4);
floodfill (257, 257, 4);
setfillstyle (1, 4);
floodfill (347, 257, 4);
setfillstyle (1, 4);
floodfill (347, 347, 4);
setfillstyle (1, 4);
floodfill (257, 347, 4);
setfillstyle (1, 4);
floodfill (257, 441, 4);
setfillstyle (1, 4);
floodfill (342, 441, 4);
setfillstyle (1, 4);
floodfill (342, 155, 4);
setfillstyle (1, 4);
floodfill (255, 155, 4);
setfillstyle (1, 4);
floodfill (595, 595, 4);
setfillstyle (1, 4);
floodfill (50, 267, 4);
setfillstyle (1, 4);
floodfill (50, 100, 4);
setfillstyle (1, 4);
floodfill (598, 90, 4);
setcolor (GREEN);
moveto (750,300);
lineto (830,300);
lineto (670,300);
lineto (715,280);
lineto (690,280);
lineto (735,260);
lineto (710,260);
lineto (750,240);
moveto (830,300);
lineto (785,280);
lineto (810,280);
lineto (765,260);
lineto (790,260);
lineto (750,240);
setcolor (BROWN);
moveto (750,300);
moveto (760,300);
lineto (760,325);
lineto (740,325);
lineto (740,300);


x = 300; y = 300;
VNIZ ( x, y, 15, 0 );

setcolor(RED);
outtextxy( 555, 5, "Lvl: ");
setcolor(RED);
outtextxy( 538, 22, "Score: ");
setcolor(RED);
outtextxy( 551, 40, "Aim: ");

setcolor(WHITE);
outtextxy( 547, 240, "Next lvl");


if (lvl == 1)
{
Yx=100; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=100; Yy=100; ykrachenia ( Yx, Yy, 14, 14 );  
Yx=500; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=500; Yy=100; ykrachenia ( Yx, Yy, 14, 14 );
}
  
if (Flag==1)
{
ZAKRIT:
{
closegraph();
initwindow(900,900);
settextstyle(0,HORIZ_DIR,5);
outtextxy(140, 150, "GAME OVER!!!" );
outtextxy(140, 300, "YOUR SCORE:" );
outtextxyT( 600, 300, score);
LABLE1:
{
Knopka=getch();
if (Knopka==27)
return 0;
else goto LABLE1;
}
} 
}

if (Flag1==1)
{
KONEC:
{
closegraph();
initwindow(900,900);
settextstyle(0,HORIZ_DIR,5);
outtextxy(140, 150, "YOU WIN!!!" );
outtextxy(140, 250, "RAZRABOTCHIK:");
outtextxy(140, 350, "Bakharev Maksim"); 
printf ("\n\nruntime= %f", clock()/1000.0);

time=clock()/1000.0;
ofstream fp("TABL.txt", ios::app);
fp<<time<< endl;
fp.close();

LABLE2:
{
Knopka=getch();
if (Knopka==27)
return 0;
else goto LABLE2;
} 
}
}

int Sx, Sy, Sx1, Sy1, Sx2, Sy2, Sx3, Sy3;
Sx = 220; Sy = 185; 
Sx1= 220; Sy1= 385;
Sx2= 380; Sy2=  85;
Sx3= 380; Sy3= 485; 

while (1)
{  
snegovik (Sx, Sy, 9, 0);
snegovik (Sx1, Sy1, 9, 0);
snegovik (Sx2, Sy2, 9, 0);
snegovik (Sx3, Sy3, 9, 0);

krug:
while (1)
{
                 for (int shagi=1; shagi <160; shagi++)
{
snegovik ( Sx, Sy, 0, 0);
Sx++;
snegovik ( Sx, Sy, 9,0 );

snegovik ( Sx1, Sy1, 0, 0);
Sx1++;
snegovik ( Sx1, Sy1, 9,0 );

snegovik ( Sx2, Sy2, 0, 0);
Sx2--;
snegovik ( Sx2, Sy2, 9,0 );

snegovik ( Sx3, Sy3, 0, 0);
Sx3--;
snegovik ( Sx3, Sy3, 9,0 );

{
if (kbhit())
{
k=getch();
setcolor(RED);
outtextxyT( 580, 22, score);
setcolor(RED);
outtextxyJ( 580, 40, chel);
setcolor(RED);
outtextxy( 580, 5, lvl);

if ( k == 75)
{
Stena = getpixel(x-21, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x-=5;
LEVO ( x, y, 15,0 );
Polochenie=3;
}
}

if ( k == 72)
{
Stena = getpixel(x, y-21);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y-=5;
VERH ( x, y, 15,0 );
Polochenie=1;
}
}

if ( k == 77)
{
Stena = getpixel(x+20, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x+=5;
PRAVO ( x, y, 15,0 );
Polochenie=2;
}
}

if ( k == 80)
{  
Stena = getpixel(x, y+20);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y+=5;
VNIZ ( x, y, 15,0 );
Polochenie=0;
}
}

Siel1 = getpixel(x, y+20);
Siel2 = getpixel(x, y-21);
Siel3 = getpixel(x+20, y);
Siel4 = getpixel(x-21, y);
if ((Siel1 == 14) || (Siel1 == 5)) {  ykrachenia (x, y+30, 0, 0); score++;  }
if ((Siel2 == 14) || (Siel2 == 5)) {  ykrachenia (x, y-30, 0, 0); score++;  }
if ((Siel3 == 14) || (Siel3 == 5)) {  ykrachenia (x+30, y, 0, 0); score++;  }
if ((Siel4 == 14) || (Siel4 == 5)) {  ykrachenia (x-30, y, 0, 0); score++;  }


if (score==1) {setcolor(YELLOW);  ykrachenia(723,300,14,0);}
if (score==2) {setcolor(YELLOW);  ykrachenia(700,300,14,0);}
if (score==3) {setcolor(YELLOW);  ykrachenia(778,300,14,0);}
if (score==4) {setcolor(YELLOW);  ykrachenia(801,300,14,0);}
if (score==5) {setcolor(YELLOW);  ykrachenia(824,300,14,0);}
if (score==6) {setcolor(YELLOW);  ykrachenia(677,300,14,0);}
if (score==7) {setcolor(YELLOW);  ykrachenia(723,280,14,0);}
if (score==8) {setcolor(YELLOW);  ykrachenia(700,280,14,0);}
if (score==9) {setcolor(YELLOW);  ykrachenia(778,280,14,0);}
if (score==10){setcolor(YELLOW);  ykrachenia(801,280,14,0);}
if (score==11){setcolor(YELLOW);  ykrachenia(723,260,14,0);}
if (score==12){setcolor(YELLOW);  ykrachenia(778,260,14,0);}
if (score>12) {setcolor(5);       zvezda(750,230,5,5); Flag1++; goto KONEC;}
}

if ((x<=10) || (y<=10) || (y>=590))
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
closegraph();
printf ("\n   КОНЕЦ ИГРЫ!!!\n\nВы набрали %d очка(ов)\n", score);
goto LABLE;
}

if (score==chel) 
{
setcolor(BLACK);
moveto (540, 260);    
lineto (540, 339);  
}

if (x>=585)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);       
x=300; y=300;  
VNIZ ( x, y, 15,0 );  
Polochenie=0;  

if (lvl==1)
{
chel=12;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);
 
Yx=100; Yy=500; ykrachenia ( Yx, Yy, 14, 14 );
Yx=100; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=190; Yy=190; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=410; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=190; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=410; Yy=190; ykrachenia ( Yx, Yy, 14, 14 );
Yx=500; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=500; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
}

if (lvl==2)
{
chel=13;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);

Zx= 100; Zy=300;
ykrachenia ( Zx, Zy, 5, 5); 
}
lvl++;          
}
}

END = getpixel(x+20, y);
if (END==9)
{ 
goto ZAKRIT;
}  

END = getpixel(x-21, y);
if (END==9)
{ 
goto ZAKRIT;
} 

END = getpixel(x, y+20);
if (END==9)
{ 
goto ZAKRIT;
} 

END = getpixel(x, y-21);
if (END==9)
{ 
goto ZAKRIT;
} 
}
                   for (int shagi=1;shagi <160;shagi++)
{
snegovik ( Sx, Sy, 0, 0);
Sx--;
snegovik ( Sx, Sy, 9,0 );

snegovik ( Sx1, Sy1, 0, 0);
Sx1--;
snegovik ( Sx1, Sy1, 9,0 );

snegovik ( Sx2, Sy2, 0, 0);
Sx2++;
snegovik ( Sx2, Sy2, 9,0 );

snegovik ( Sx3, Sy3, 0, 0);
Sx3++;
snegovik ( Sx3, Sy3, 9,0 );

{
if (kbhit())
{
k=getch();
setcolor(RED);
outtextxyT( 580, 22, score);
setcolor(RED);
outtextxyJ( 580, 40, chel);
setcolor(RED);
outtextxy( 580, 5, lvl);

if ( k == 75)
{
Stena = getpixel(x-21, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x-=5;
LEVO ( x, y, 15,0 );
Polochenie=3;
}
}

if ( k == 72)
{
Stena = getpixel(x, y-21);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y-=5;
VERH ( x, y, 15,0 );
Polochenie=1;
}
}

if ( k == 77)
{
Stena = getpixel(x+20, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x+=5;
PRAVO ( x, y, 15,0 );
Polochenie=2;
}
}

if ( k == 80)
{  
Stena = getpixel(x, y+20);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y+=5;
VNIZ ( x, y, 15,0 );
Polochenie=0;
}
}

Siel1 = getpixel(x, y+20);
Siel2 = getpixel(x, y-21);
Siel3 = getpixel(x+20, y);
Siel4 = getpixel(x-21, y);
if ((Siel1 == 14) || (Siel1 == 5)) {  ykrachenia (x, y+30, 0, 0); score++;  }
if ((Siel2 == 14) || (Siel2 == 5)) {  ykrachenia (x, y-30, 0, 0); score++;  }
if ((Siel3 == 14) || (Siel3 == 5)) {  ykrachenia (x+30, y, 0, 0); score++;  }
if ((Siel4 == 14) || (Siel4 == 5)) {  ykrachenia (x-30, y, 0, 0); score++;  }


if (score==1) {setcolor(YELLOW);  ykrachenia(723,300,14,0);}
if (score==2) {setcolor(YELLOW);  ykrachenia(700,300,14,0);}
if (score==3) {setcolor(YELLOW);  ykrachenia(778,300,14,0);}
if (score==4) {setcolor(YELLOW);  ykrachenia(801,300,14,0);}
if (score==5) {setcolor(YELLOW);  ykrachenia(824,300,14,0);}
if (score==6) {setcolor(YELLOW);  ykrachenia(677,300,14,0);}
if (score==7) {setcolor(YELLOW);  ykrachenia(723,280,14,0);}
if (score==8) {setcolor(YELLOW);  ykrachenia(700,280,14,0);}
if (score==9) {setcolor(YELLOW);  ykrachenia(778,280,14,0);}
if (score==10) {setcolor(YELLOW); ykrachenia(801,280,14,0);}
if (score==11) {setcolor(YELLOW); ykrachenia(723,260,14,0);}
if (score==12) {setcolor(YELLOW); ykrachenia(778,260,14,0);}
if (score>12) {setcolor(5); zvezda(750,230,5,5); Flag1++; goto KONEC;}
}

if ((x<=10) || (y<=10) || (y>=590))
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
closegraph();
printf ("\n   КОНЕЦ ИГРЫ!!!\n\nВы набрали %d очка(ов)\n", score);
goto LABLE;
}

if (score==chel) 
{
setcolor(BLACK);
moveto (540, 260);    
lineto (540, 339);  
}

if (x>=585)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);       
x=300; y=300;  
VNIZ ( x, y, 15,0 );  
Polochenie=0;  

if (lvl==1)
{
chel=12;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);
 
Yx=100; Yy=500; ykrachenia ( Yx, Yy, 14, 14 );
Yx=100; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=190; Yy=190; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=410; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=190; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=410; Yy=190; ykrachenia ( Yx, Yy, 14, 14 );
Yx=500; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=500; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
}

if (lvl==2)
{
chel=13;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);
Zx= 100; Zy=300;
ykrachenia ( Zx, Zy, 5, 5); 
}

lvl++;         
}
}

END = getpixel(x+20, y);
if (END==9)
{ 
goto ZAKRIT;
}  

END = getpixel(x-21, y);
if (END==9)
{ 
goto ZAKRIT;
} 

END = getpixel(x, y+20);
if (END==9)
{ 
goto ZAKRIT;
} 

END = getpixel(x, y-21);
if (END==9)
{ 
goto ZAKRIT;
} 
}
goto krug;
}
      
if ( k == 27 )
{
closegraph();
goto LABLE;
}

Siel1 = getpixel(x, y+20);
Siel2 = getpixel(x, y-21);
Siel3 = getpixel(x+20, y);
Siel4 = getpixel(x-21, y);
if ((Siel1 == 14) || (Siel1 == 5)) {  ykrachenia (x, y+30, 0, 0); score++;  }
if ((Siel2 == 14) || (Siel2 == 5)) {  ykrachenia (x, y-30, 0, 0); score++;  }
if ((Siel3 == 14) || (Siel3 == 5)) {  ykrachenia (x+30, y, 0, 0); score++;  }
if ((Siel4 == 14) || (Siel4 == 5)) {  ykrachenia (x-30, y, 0, 0); score++;  }

if (score==1) {setcolor(YELLOW);  ykrachenia(723,300,14,0);}
if (score==2) {setcolor(YELLOW);  ykrachenia(700,300,14,0);}
if (score==3) {setcolor(YELLOW);  ykrachenia(778,300,14,0);}
if (score==4) {setcolor(YELLOW);  ykrachenia(801,300,14,0);}
if (score==5) {setcolor(YELLOW);  ykrachenia(824,300,14,0);}
if (score==6) {setcolor(YELLOW);  ykrachenia(677,300,14,0);}
if (score==7) {setcolor(YELLOW);  ykrachenia(723,280,14,0);}
if (score==8) {setcolor(YELLOW);  ykrachenia(700,280,14,0);}
if (score==9) {setcolor(YELLOW);  ykrachenia(778,280,14,0);}
if (score==10) {setcolor(YELLOW); ykrachenia(801,280,14,0);}
if (score==11) {setcolor(YELLOW); ykrachenia(723,260,14,0);}
if (score==12) {setcolor(YELLOW); ykrachenia(778,260,14,0);}
if (score>12) {setcolor(5); zvezda(750,230,5,5); Flag1++; goto KONEC;}
}
}
}
}

