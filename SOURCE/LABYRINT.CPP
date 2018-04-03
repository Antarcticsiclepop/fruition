#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <math.h>

void arrow(int xar, int yar, int aco, int size)
{
	int tri[6];
	if (size==0) size=24;
	else size=18;
	tri[0] = 0+xar; tri[1] = 0+yar;
	tri[2] = (size-4)+xar; tri[3] = (size/2)+yar;
	tri[4] = 0+xar; tri[5] = size+yar;
	setcolor(0); setfillstyle(1,aco);
	fillpoly(3,tri);
}

void upkey(int xar, int yar)
{
	int tri[14];
	tri[0] = 8+xar; tri[1] = 0+yar;
	tri[2] = 0+xar; tri[3] = 8+yar;
	tri[4] = 6+xar; tri[5] = 8+yar;
	tri[6] = 6+xar; tri[7] = 18+yar;
	tri[8] = 10+xar; tri[9] = 18+yar;
	tri[10] = 10+xar; tri[11] = 8+yar;
	tri[12] = 16+xar; tri[13] = 8+yar;
	setcolor(0); setfillstyle(1,15);
	fillpoly(7,tri);
}

void downkey(int xar, int yar)
{
	int tri[14];
	tri[0] = 6+xar; tri[1] = 0+yar;
	tri[2] = 6+xar; tri[3] = 10+yar;
	tri[4] = 0+xar; tri[5] = 10+yar;
	tri[6] = 8+xar; tri[7] = 18+yar;
	tri[8] = 16+xar; tri[9] = 10+yar;
	tri[10] = 10+xar; tri[11] = 10+yar;
	tri[12] = 10+xar; tri[13] = 0+yar;
	setcolor(0); setfillstyle(1,15);
	fillpoly(7,tri);
}

void leftkey(int xar, int yar)
{
	int tri[14];
	tri[0] = 8+xar; tri[1] = 0+yar;
	tri[2] = 0+xar; tri[3] = 8+yar;
	tri[4] = 8+xar; tri[5] = 16+yar;
	tri[6] = 8+xar; tri[7] = 10+yar;
	tri[8] = 18+xar; tri[9] = 10+yar;
	tri[10] = 18+xar; tri[11] = 6+yar;
	tri[12] = 8+xar; tri[13] = 6+yar;
	setcolor(0); setfillstyle(1,15);
	fillpoly(7,tri);
}

void rightkey(int xar, int yar)
{
	int tri[14];
	tri[0] = 10+xar; tri[1] = 0+yar;
	tri[2] = 10+xar; tri[3] = 6+yar;
	tri[4] = 0+xar; tri[5] = 6+yar;
	tri[6] = 0+xar; tri[7] = 10+yar;
	tri[8] = 10+xar; tri[9] = 10+yar;
	tri[10] = 10+xar; tri[11] = 16+yar;
	tri[12] = 18+xar; tri[13] = 8+yar;
	setcolor(0); setfillstyle(1,15);
	fillpoly(7,tri);
}

void stairs(int xpos, int ypos, float scale)
{
	setfillstyle(1,8);
	bar(1*scale+xpos , 2*scale+ypos , 3*scale+xpos , 15*scale+ypos);
	bar(4*scale+xpos , 4*scale+ypos , 7*scale+xpos , 15*scale+ypos);
	bar(8*scale+xpos , 6*scale+ypos , 11*scale+xpos , 15*scale+ypos);
	bar(12*scale+xpos , 8*scale+ypos , 15*scale+xpos , 15*scale+ypos);
	setfillstyle(1,7);
	bar(0*scale+xpos , 0*scale+ypos , 16*scale+xpos , 1*scale+ypos);
	bar(0*scale+xpos , 1*scale+ypos , 1*scale+xpos , 16*scale+ypos);
	bar(15*scale+xpos , 1*scale+ypos , 16*scale+xpos , 15*scale+ypos);
	bar(0*scale+xpos , 15*scale+ypos , 16*scale+xpos , 16*scale+ypos);
	bar(3*scale+xpos , 3*scale+ypos , 4*scale+xpos , 15*scale+ypos);
	bar(7*scale+xpos , 5*scale+ypos , 8*scale+xpos , 15*scale+ypos);
	bar(11*scale+xpos , 7*scale+ypos , 12*scale+xpos , 15*scale+ypos);
}

void cherry(int xpos, int ypos, float scale)
{
	setfillstyle(1,4);
	bar(3*scale+xpos , 6*scale+ypos , 6*scale+xpos , 7*scale+ypos);
	bar(2*scale+xpos , 7*scale+ypos , 8*scale+xpos , 8*scale+ypos);
	bar(2*scale+xpos , 8*scale+ypos , 7*scale+xpos , 9*scale+ypos);
	bar(2*scale+xpos , 9*scale+ypos , 6*scale+xpos , 11*scale+ypos);
	bar(3*scale+xpos , 11*scale+ypos , 6*scale+xpos , 12*scale+ypos);
	bar(8*scale+xpos , 8*scale+ypos , 12*scale+xpos , 9*scale+ypos);
	bar(7*scale+xpos , 9*scale+ypos , 13*scale+xpos , 13*scale+ypos);
	bar(8*scale+xpos , 13*scale+ypos , 12*scale+xpos , 14*scale+ypos);
	setfillstyle(1,15);
	bar(3*scale+xpos , 9*scale+ypos , 4*scale+xpos , 10*scale+ypos);
	bar(4*scale+xpos , 10*scale+ypos , 5*scale+xpos , 11*scale+ypos);
	bar(8*scale+xpos , 11*scale+ypos , 9*scale+xpos , 12*scale+ypos);
	bar(9*scale+xpos , 12*scale+ypos , 10*scale+xpos , 13*scale+ypos);
	setfillstyle(1,6);
	bar(12*scale+xpos , 2*scale+ypos , 14*scale+xpos , 4*scale+ypos);
	bar(10*scale+xpos , 3*scale+ypos , 12*scale+xpos , 4*scale+ypos);
	bar(8*scale+xpos , 4*scale+ypos , 10*scale+xpos , 5*scale+ypos);
	bar(11*scale+xpos , 4*scale+ypos , 12*scale+xpos , 6*scale+ypos);
	bar(7*scale+xpos , 5*scale+ypos , 8*scale+xpos , 6*scale+ypos);
	bar(6*scale+xpos , 6*scale+ypos , 7*scale+xpos , 7*scale+ypos);
	bar(10*scale+xpos , 6*scale+ypos , 11*scale+xpos , 7*scale+ypos);
	bar(5*scale+xpos , 7*scale+ypos , 6*scale+xpos , 8*scale+ypos);
	bar(9*scale+xpos , 7*scale+ypos , 10*scale+xpos , 10*scale+ypos);
}

void pear(int xpos, int ypos, float scale)
{
	setfillstyle(1,6);
	bar(9*scale+xpos , 1*scale+ypos , 11*scale+xpos , 2*scale+ypos);
	bar(8*scale+xpos , 2*scale+ypos , 9*scale+xpos , 3*scale+ypos);
	setfillstyle(1,2);
	bar(7*scale+xpos , 3*scale+ypos , 10*scale+xpos , 5*scale+ypos);
	bar(6*scale+xpos , 5*scale+ypos , 11*scale+xpos , 8*scale+ypos);
	bar(5*scale+xpos , 8*scale+ypos , 12*scale+xpos , 10*scale+ypos);
	bar(4*scale+xpos , 10*scale+ypos , 13*scale+xpos , 13*scale+ypos);
	bar(5*scale+xpos , 13*scale+ypos , 12*scale+xpos , 14*scale+ypos);
	bar(6*scale+xpos , 14*scale+ypos , 11*scale+xpos , 15*scale+ypos);
	setfillstyle(1,15);
	bar(6*scale+xpos , 10*scale+ypos , 7*scale+xpos , 12*scale+ypos);
	bar(7*scale+xpos , 12*scale+ypos , 8*scale+xpos , 13*scale+ypos);
}

void pretzel(int xpos, int ypos, float scale)
{
	setfillstyle(1,6);
	bar(3*scale+xpos , 1*scale+ypos , 6*scale+xpos , 2*scale+ypos);
	bar(11*scale+xpos , 1*scale+ypos , 13*scale+xpos , 2*scale+ypos);
	bar(2*scale+xpos , 2*scale+ypos , 8*scale+xpos , 3*scale+ypos);
	bar(9*scale+xpos , 2*scale+ypos , 14*scale+xpos , 3*scale+ypos);
	bar(2*scale+xpos , 3*scale+ypos , 4*scale+xpos , 4*scale+ypos);
	bar(6*scale+xpos , 3*scale+ypos , 7*scale+xpos , 4*scale+ypos);
	bar(9*scale+xpos , 3*scale+ypos , 11*scale+xpos , 4*scale+ypos);
	bar(13*scale+xpos , 3*scale+ypos , 15*scale+xpos , 8*scale+ypos);
	bar(1*scale+xpos , 4*scale+ypos , 3*scale+xpos , 7*scale+ypos);
	bar(8*scale+xpos , 4*scale+ypos , 10*scale+xpos , 5*scale+ypos);
	bar(7*scale+xpos , 5*scale+ypos , 9*scale+xpos , 7*scale+ypos);
	bar(1*scale+xpos , 7*scale+ypos , 4*scale+xpos , 8*scale+ypos);
	bar(6*scale+xpos , 7*scale+ypos , 8*scale+xpos , 9*scale+ypos);
	bar(9*scale+xpos , 7*scale+ypos , 10*scale+xpos , 9*scale+ypos);
	bar(2*scale+xpos , 8*scale+ypos , 4*scale+xpos , 9*scale+ypos);
	bar(10*scale+xpos , 8*scale+ypos , 11*scale+xpos , 10*scale+ypos);
	bar(12*scale+xpos , 8*scale+ypos , 15*scale+xpos , 9*scale+ypos); 
	bar(3*scale+xpos , 9*scale+ypos , 4*scale+xpos , 10*scale+ypos);
	bar(5*scale+xpos , 9*scale+ypos , 7*scale+xpos , 11*scale+ypos);
	bar(12*scale+xpos , 9*scale+ypos , 14*scale+xpos , 10*scale+ypos);
	bar(10*scale+xpos , 10*scale+ypos , 12*scale+xpos , 11*scale+ypos);
	bar(4*scale+xpos , 11*scale+ypos , 6*scale+xpos , 12*scale+ypos);
	bar(7*scale+xpos , 11*scale+ypos , 10*scale+xpos , 13*scale+ypos);
	bar(11*scale+xpos , 11*scale+ypos , 13*scale+xpos , 13*scale+ypos);
	bar(3*scale+xpos , 12*scale+ypos , 5*scale+xpos , 14*scale+ypos);
	bar(12*scale+xpos , 12*scale+ypos , 14*scale+xpos , 14*scale+ypos);
	bar(2*scale+xpos , 13*scale+ypos , 3*scale+xpos , 14*scale+ypos);
	setfillstyle(1,15);
	bar(3*scale+xpos , 1*scale+ypos , 4*scale+xpos , 2*scale+ypos);
	bar(9*scale+xpos , 1*scale+ypos , 10*scale+xpos , 2*scale+ypos);
	bar(12*scale+xpos , 3*scale+ypos , 13*scale+xpos , 4*scale+ypos);
	bar(3*scale+xpos , 7*scale+ypos , 4*scale+xpos , 8*scale+ypos);
	bar(6*scale+xpos , 7*scale+ypos , 7*scale+xpos , 8*scale+ypos);
	bar(14*scale+xpos , 8*scale+ypos , 15*scale+xpos , 9*scale+ypos);
	bar(12*scale+xpos , 11*scale+ypos , 13*scale+xpos , 12*scale+ypos);
	bar(4*scale+xpos , 13*scale+ypos , 5*scale+xpos , 14*scale+ypos);
}

void plum(int xpos, int ypos, float scale)
{
	setfillstyle(1,2);
	bar(9*scale+xpos , 2*scale+ypos , 10*scale+xpos , 3*scale+ypos);
	bar(8*scale+xpos , 3*scale+ypos , 12*scale+xpos , 4*scale+ypos);
	bar(9*scale+xpos , 4*scale+ypos , 11*scale+xpos , 5*scale+ypos);
	setfillstyle(1,13);
	bar(7*scale+xpos , 2*scale+ypos , 8*scale+xpos , 5*scale+ypos);
	bar(6*scale+xpos , 5*scale+ypos , 9*scale+xpos , 6*scale+ypos);
	bar(7*scale+xpos , 6*scale+ypos , 8*scale+xpos , 7*scale+ypos);
	setfillstyle(1,5);
	bar(4*scale+xpos , 5*scale+ypos , 6*scale+xpos , 6*scale+ypos);
	bar(9*scale+xpos , 5*scale+ypos , 11*scale+xpos , 6*scale+ypos);
	bar(3*scale+xpos , 6*scale+ypos , 7*scale+xpos , 7*scale+ypos);
	bar(8*scale+xpos , 6*scale+ypos , 12*scale+xpos , 7*scale+ypos);
	bar(2*scale+xpos , 7*scale+ypos , 13*scale+xpos , 11*scale+ypos);
	bar(3*scale+xpos , 11*scale+ypos , 12*scale+xpos , 13*scale+ypos);
	bar(5*scale+xpos , 13*scale+ypos , 10*scale+xpos , 14*scale+ypos);
	setfillstyle(1,15);
	bar(10*scale+xpos , 9*scale+ypos , 11*scale+xpos , 11*scale+ypos);
	bar(9*scale+xpos , 11*scale+ypos , 10*scale+xpos , 12*scale+ypos);
}

void berry(int xpos, int ypos, float scale)
{
	setfillstyle(1,2);
	bar(4*scale+xpos , 3*scale+ypos , 11*scale+xpos , 6*scale+ypos);
	setfillstyle(1,6);
	bar(7*scale+xpos , 2*scale+ypos , 8*scale+xpos , 4*scale+ypos);
	setfillstyle(1,4);
	bar(3*scale+xpos , 4*scale+ypos , 5*scale+xpos , 5*scale+ypos);
	bar(10*scale+xpos , 4*scale+ypos , 12*scale+xpos , 5*scale+ypos);
	bar(2*scale+xpos , 5*scale+ypos , 7*scale+xpos , 6*scale+ypos);
	bar(8*scale+xpos , 5*scale+ypos , 13*scale+xpos , 6*scale+ypos);
	bar(2*scale+xpos , 6*scale+ypos , 13*scale+xpos , 9*scale+ypos);
	bar(3*scale+xpos , 9*scale+ypos , 12*scale+xpos , 11*scale+ypos);
	bar(4*scale+xpos , 11*scale+ypos , 10*scale+xpos , 12*scale+ypos);
	bar(5*scale+xpos , 12*scale+ypos , 10*scale+xpos , 13*scale+ypos);
	bar(7*scale+xpos , 13*scale+ypos , 8*scale+xpos , 14*scale+ypos);
	setfillstyle(1,15);
	bar(11*scale+xpos , 5*scale+ypos , 12*scale+xpos , 6*scale+ypos);
	bar(3*scale+xpos , 6*scale+ypos , 4*scale+xpos , 7*scale+ypos);
	bar(9*scale+xpos , 6*scale+ypos , 10*scale+xpos , 7*scale+ypos);
	bar(5*scale+xpos , 7*scale+ypos , 6*scale+xpos , 8*scale+ypos);
	bar(7*scale+xpos , 7*scale+ypos , 8*scale+xpos , 8*scale+ypos);
	bar(10*scale+xpos , 8*scale+ypos , 11*scale+xpos , 9*scale+ypos);
	bar(4*scale+xpos , 9*scale+ypos , 5*scale+xpos , 10*scale+ypos);
	bar(7*scale+xpos , 9*scale+ypos , 8*scale+xpos , 10*scale+ypos);
	bar(6*scale+xpos , 11*scale+ypos , 7*scale+xpos , 12*scale+ypos);
	bar(9*scale+xpos , 11*scale+ypos , 10*scale+xpos , 12*scale+ypos);
}

void banana(int xpos, int ypos, float scale)
{
	setfillstyle(1,6);
	bar(12*scale+xpos , 1*scale+ypos , 13*scale+xpos , 2*scale+ypos);
	bar(11*scale+xpos , 2*scale+ypos , 12*scale+xpos , 3*scale+ypos);
	setfillstyle(1,14);
	bar(12*scale+xpos , 3*scale+ypos , 14*scale+xpos , 4*scale+ypos);
	bar(10*scale+xpos , 4*scale+ypos , 14*scale+xpos , 6*scale+ypos);
	bar(9*scale+xpos , 6*scale+ypos , 10*scale+xpos , 7*scale+ypos);
	bar(11*scale+xpos , 6*scale+ypos , 14*scale+xpos , 7*scale+ypos);
	bar(8*scale+xpos , 7*scale+ypos , 9*scale+xpos , 8*scale+ypos);
	bar(10*scale+xpos , 7*scale+ypos , 13*scale+xpos , 8*scale+ypos);
	bar(7*scale+xpos , 8*scale+ypos , 8*scale+xpos , 9*scale+ypos);
	bar(9*scale+xpos , 8*scale+ypos , 13*scale+xpos , 9*scale+ypos);
	bar(6*scale+xpos , 9*scale+ypos , 7*scale+xpos , 10*scale+ypos);
	bar(8*scale+xpos , 9*scale+ypos , 12*scale+xpos , 10*scale+ypos);
	bar(5*scale+xpos , 10*scale+ypos , 6*scale+xpos , 11*scale+ypos);
	bar(7*scale+xpos , 10*scale+ypos , 12*scale+xpos , 11*scale+ypos);
	bar(4*scale+xpos , 11*scale+ypos , 5*scale+xpos , 12*scale+ypos);
	bar(6*scale+xpos , 11*scale+ypos , 11*scale+xpos , 12*scale+ypos);
	bar(2*scale+xpos , 12*scale+ypos , 10*scale+xpos , 13*scale+ypos);
	bar(3*scale+xpos , 13*scale+ypos , 8*scale+xpos , 14*scale+ypos);
	setfillstyle(1,15);
	bar(9*scale+xpos , 10*scale+ypos , 10*scale+xpos , 11*scale+ypos);
	bar(8*scale+xpos , 11*scale+ypos , 9*scale+xpos , 12*scale+ypos);
	bar(7*scale+xpos , 12*scale+ypos , 8*scale+xpos , 13*scale+ypos);
}

void battererase(float scale, int xpos, int ypos)
{
	setfillstyle(1,0);
	bar(0*scale+xpos-2 , 0*scale+ypos , 14*scale+xpos , 17*scale+ypos);
}

void batterside(float scale, int xpos, int ypos, int col, int neg, int inv, int cero, int color)
{
	setfillstyle(1,color);
	bar((inv+4*neg)*scale+xpos+cero*col*neg/2 , 0*scale+ypos , (inv+10*neg)*scale+xpos+cero*col*neg/2 , 1*scale+ypos);
	bar((inv+3*neg)*scale+xpos+cero*col*neg/2 , 1*scale+ypos , (inv+11*neg)*scale+xpos+cero*col*neg/2 , 2*scale+ypos);
	bar((inv+2*neg)*scale+xpos+cero*col*neg/2 , 2*scale+ypos , (inv+11*neg)*scale+xpos+cero*col*neg/2 , 3*scale+ypos);
	bar((inv+1*neg)*scale+xpos+cero*col*neg/2 , 3*scale+ypos , (inv+12*neg)*scale+xpos+cero*col*neg/2 , 4*scale+ypos);
	bar((inv+0*neg)*scale+xpos+cero*col*neg/2 , 4*scale+ypos , (inv+12*neg)*scale+xpos+cero*col*neg/2 , 5*scale+ypos);
	bar((inv+2*neg)*scale+xpos+cero*col*neg/2 , 5*scale+ypos , (inv+12*neg)*scale+xpos+cero*col*neg/2 , 6*scale+ypos);
	bar((inv+3*neg)*scale+xpos+cero*col*neg/2 , 6*scale+ypos , (inv+11*neg)*scale+xpos+cero*col*neg/2 , 7*scale+ypos);
	bar((inv+4*neg)*scale+xpos+cero*col*neg/2 , 7*scale+ypos , (inv+10*neg)*scale+xpos+cero*col*neg/2 , 8*scale+ypos);
	bar((inv+5*neg)*scale+xpos+cero*col*neg/2 , 8*scale+ypos , (inv+11*neg)*scale+xpos+cero*col*neg/2 , 13*scale+ypos);
	bar((inv+6*neg)*scale+xpos+cero*col*neg/2 , 13*scale+ypos , (inv+10*neg)*scale+xpos+cero*col*neg/2 , 17*scale+ypos);
	setfillstyle(1,15);
	bar((inv+4*neg)*scale+xpos+cero*col*neg/2 , 6*scale+ypos , (inv+9*neg)*scale+xpos+cero*col*neg/2 , 7*scale+ypos);
	bar((inv+5*neg)*scale+xpos+cero*col*neg/2 , 7*scale+ypos , (inv+9*neg)*scale+xpos+cero*col*neg/2 , 8*scale+ypos);
	bar((inv+9*neg)*scale+xpos+cero*col*neg/2 , 8*scale+ypos , (inv+10*neg)*scale+xpos+cero*col*neg/2 , 9*scale+ypos);
	bar((inv+6*neg)*scale+xpos+cero*col*neg/2 , 9*scale+ypos , (inv+7*neg)*scale+xpos+cero*col*neg/2 , 10*scale+ypos);
	bar((inv+8*neg)*scale+xpos+cero*col*neg/2 , 9*scale+ypos , (inv+10*neg)*scale+xpos+cero*col*neg/2 , 10*scale+ypos);
	bar((inv+6*neg)*scale+xpos+cero*col*neg/2 , 11*scale+ypos , (inv+7*neg)*scale+xpos+cero*col*neg/2 , 12*scale+ypos);
	bar((inv+8*neg)*scale+xpos+cero*col*neg/2 , 11*scale+ypos , (inv+9*neg)*scale+xpos+cero*col*neg/2 , 12*scale+ypos);
	bar((inv+7*neg)*scale+xpos+cero*col*neg/2 , 13*scale+ypos , (inv+9*neg)*scale+xpos+cero*col*neg/2 , 16*scale+ypos);
}

void batterdown(float scale, int xpos, int ypos, int ren, int cero, int color)
{
	setfillstyle(1,color);
	bar(3*scale+xpos , 1*scale+ypos-cero*ren/2 , 9*scale+xpos , 2*scale+ypos-cero*ren/2);
	bar(2*scale+xpos , 2*scale+ypos-cero*ren/2 , 10*scale+xpos , 3*scale+ypos-cero*ren/2);
	bar(1*scale+xpos , 3*scale+ypos-cero*ren/2 , 11*scale+xpos , 4*scale+ypos-cero*ren/2);
	bar(0*scale+xpos , 4*scale+ypos-cero*ren/2 , 12*scale+xpos , 6*scale+ypos-cero*ren/2);
	bar(1*scale+xpos , 6*scale+ypos-cero*ren/2 , 11*scale+xpos , 8*scale+ypos-cero*ren/2);
	bar(0*scale+xpos , 8*scale+ypos-cero*ren/2 , 12*scale+xpos , 12*scale+ypos-cero*ren/2);
	bar(1*scale+xpos , 12*scale+ypos-cero*ren/2 , 11*scale+xpos , 13*scale+ypos-cero*ren/2);
	bar(2*scale+xpos , 13*scale+ypos-cero*ren/2 , 10*scale+xpos , 16*scale+ypos-cero*ren/2);
	bar(2*scale+xpos , 16*scale+ypos-cero*ren/2 , 5*scale+xpos , 17*scale+ypos-cero*ren/2);
	bar(7*scale+xpos , 16*scale+ypos-cero*ren/2 , 10*scale+xpos , 17*scale+ypos-cero*ren/2);
	setfillstyle(1,15);
	bar(1*scale+xpos , 8*scale+ypos-cero*ren/2 , 2*scale+xpos , 10*scale+ypos-cero*ren/2);
	bar(10*scale+xpos , 8*scale+ypos-cero*ren/2 , 11*scale+xpos , 10*scale+ypos-cero*ren/2);
	bar(1*scale+xpos , 11*scale+ypos-cero*ren/2 , 2*scale+xpos , 12*scale+ypos-cero*ren/2);
	bar(10*scale+xpos , 11*scale+ypos-cero*ren/2 , 11*scale+xpos , 12*scale+ypos-cero*ren/2);
	bar(3*scale+xpos , 11*scale+ypos-cero*ren/2 , 9*scale+xpos , 12*scale+ypos-cero*ren/2);
	bar(4*scale+xpos , 12*scale+ypos-cero*ren/2 , 8*scale+xpos , 13*scale+ypos-cero*ren/2);
	bar(3*scale+xpos , 14*scale+ypos-cero*ren/2 , 5*scale+xpos , 15*scale+ypos-cero*ren/2);
	bar(7*scale+xpos , 14*scale+ypos-cero*ren/2 , 9*scale+xpos , 15*scale+ypos-cero*ren/2);
}

void batterbown(float scale, int xpos, int ypos, int ren, int neg, int inv, int cero, int color)
{
	setfillstyle(1,color);
	bar((inv+3*neg)*scale+xpos , 1*scale+ypos-ren*cero/4 , (inv+9*neg)*scale+xpos , 2*scale+ypos-ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 2*scale+ypos-ren*cero/4 , (inv+10*neg)*scale+xpos , 3*scale+ypos-ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 3*scale+ypos-ren*cero/4 , (inv+11*neg)*scale+xpos , 4*scale+ypos-ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 4*scale+ypos-ren*cero/4 , (inv+12*neg)*scale+xpos , 6*scale+ypos-ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 6*scale+ypos-ren*cero/4 , (inv+11*neg)*scale+xpos , 8*scale+ypos-ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 8*scale+ypos-ren*cero/4 , (inv+12*neg)*scale+xpos , 10*scale+ypos-ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 10*scale+ypos-ren*cero/4 , (inv+11*neg)*scale+xpos , 11*scale+ypos-ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 11*scale+ypos-ren*cero/4 , (inv+10*neg)*scale+xpos , 15*scale+ypos-ren*cero/4);
	bar((inv+4*neg)*scale+xpos , 15*scale+ypos-ren*cero/4 , (inv+10*neg)*scale+xpos , 16*scale+ypos-ren*cero/4);
	bar((inv+7*neg)*scale+xpos , 16*scale+ypos-ren*cero/4 , (inv+10*neg)*scale+xpos , 17*scale+ypos-ren*cero/4);
	setfillstyle(1,15);
	bar((inv+1*neg)*scale+xpos , 8*scale+ypos-ren*cero/4 , (inv+2*neg)*scale+xpos , 9*scale+ypos-ren*cero/4);
	bar((inv+10*neg)*scale+xpos , 9*scale+ypos-ren*cero/4 , (inv+11*neg)*scale+xpos , 10*scale+ypos-ren*cero/4);
	bar((inv+9*neg)*scale+xpos , 10*scale+ypos-ren*cero/4 , (inv+10*neg)*scale+xpos , 11*scale+ypos-ren*cero/4);
	bar((inv+3*neg)*scale+xpos , 11*scale+ypos-ren*cero/4 , (inv+7*neg)*scale+xpos , 12*scale+ypos-ren*cero/4);
	bar((inv+8*neg)*scale+xpos , 11*scale+ypos-ren*cero/4 , (inv+9*neg)*scale+xpos , 12*scale+ypos-ren*cero/4);
	bar((inv+4*neg)*scale+xpos , 12*scale+ypos-ren*cero/4 , (inv+7*neg)*scale+xpos , 13*scale+ypos-ren*cero/4);
	bar((inv+7*neg)*scale+xpos , 14*scale+ypos-ren*cero/4 , (inv+9*neg)*scale+xpos , 15*scale+ypos-ren*cero/4);
}

void batterup(float scale, int xpos, int ypos, int ren, int cero, int color)
{
	setfillstyle(1,color);
	bar(3*scale+xpos , 0*scale+ypos+cero*ren/2 , 9*scale+xpos , 1*scale+ypos+cero*ren/2);
	bar(2*scale+xpos , 1*scale+ypos+cero*ren/2 , 10*scale+xpos , 3*scale+ypos+cero*ren/2);
	bar(1*scale+xpos , 3*scale+ypos+cero*ren/2 , 11*scale+xpos , 4*scale+ypos+cero*ren/2);
	bar(0*scale+xpos , 4*scale+ypos+cero*ren/2 , 12*scale+xpos , 6*scale+ypos+cero*ren/2);
	bar(1*scale+xpos , 6*scale+ypos+cero*ren/2 , 11*scale+xpos , 8*scale+ypos+cero*ren/2);
	bar(0*scale+xpos , 8*scale+ypos+cero*ren/2 , 12*scale+xpos , 11*scale+ypos+cero*ren/2);
	bar(1*scale+xpos , 11*scale+ypos+cero*ren/2 , 11*scale+xpos , 13*scale+ypos+cero*ren/2);
	bar(2*scale+xpos , 13*scale+ypos+cero*ren/2 , 10*scale+xpos , 16*scale+ypos+cero*ren/2);
	bar(2*scale+xpos , 16*scale+ypos+cero*ren/2 , 5*scale+xpos , 17*scale+ypos+cero*ren/2);
	bar(7*scale+xpos , 16*scale+ypos+cero*ren/2 , 10*scale+xpos , 17*scale+ypos+cero*ren/2);
	setfillstyle(1,15);
	bar(1*scale+xpos , 8*scale+ypos+cero*ren/2 , 2*scale+xpos , 10*scale+ypos+cero*ren/2);
	bar(3*scale+xpos , 9*scale+ypos+cero*ren/2 , 9*scale+xpos , 10*scale+ypos+cero*ren/2);
	bar(10*scale+xpos , 8*scale+ypos+cero*ren/2 , 11*scale+xpos , 10*scale+ypos+cero*ren/2);
	bar(1*scale+xpos , 11*scale+ypos+cero*ren/2 , 2*scale+xpos , 12*scale+ypos+cero*ren/2);
	bar(3*scale+xpos , 11*scale+ypos+cero*ren/2 , 9*scale+xpos , 12*scale+ypos+cero*ren/2);
	bar(10*scale+xpos , 11*scale+ypos+cero*ren/2 , 11*scale+xpos , 12*scale+ypos+cero*ren/2);
	bar(4*scale+xpos , 12*scale+ypos+cero*ren/2 , 8*scale+xpos , 13*scale+ypos+cero*ren/2);
	bar(3*scale+xpos , 14*scale+ypos+cero*ren/2 , 5*scale+xpos , 15*scale+ypos+cero*ren/2);
	bar(7*scale+xpos , 14*scale+ypos+cero*ren/2 , 9*scale+xpos , 15*scale+ypos+cero*ren/2);
}

void batteruq(float scale, int xpos, int ypos, int ren, int neg, int inv, int cero, int color)
{
	setfillstyle(1,color);
	bar((inv+3*neg)*scale+xpos , 0*scale+ypos+ren*cero/4 , (inv+9*neg)*scale+xpos , 1*scale+ypos+ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 1*scale+ypos+ren*cero/4 , (inv+10*neg)*scale+xpos , 3*scale+ypos+ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 3*scale+ypos+ren*cero/4 , (inv+11*neg)*scale+xpos , 4*scale+ypos+ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 4*scale+ypos+ren*cero/4 , (inv+12*neg)*scale+xpos , 7*scale+ypos+ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 7*scale+ypos+ren*cero/4 , (inv+11*neg)*scale+xpos , 8*scale+ypos+ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 8*scale+ypos+ren*cero/4 , (inv+12*neg)*scale+xpos , 10*scale+ypos+ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 10*scale+ypos+ren*cero/4 , (inv+11*neg)*scale+xpos , 11*scale+ypos+ren*cero/4);
	bar((inv+0*neg)*scale+xpos , 11*scale+ypos+ren*cero/4 , (inv+10*neg)*scale+xpos , 13*scale+ypos+ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 13*scale+ypos+ren*cero/4 , (inv+10*neg)*scale+xpos , 14*scale+ypos+ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 14*scale+ypos+ren*cero/4 , (inv+10*neg)*scale+xpos , 15*scale+ypos+ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 15*scale+ypos+ren*cero/4 , (inv+8*neg)*scale+xpos , 16*scale+ypos+ren*cero/4);
	bar((inv+2*neg)*scale+xpos , 16*scale+ypos+ren*cero/4 , (inv+5*neg)*scale+xpos , 17*scale+ypos+ren*cero/4);
	setfillstyle(1,15);
	bar((inv+10*neg)*scale+xpos , 8*scale+ypos+ren*cero/4 , (inv+11*neg)*scale+xpos , 9*scale+ypos+ren*cero/4);
	bar((inv+3*neg)*scale+xpos , 9*scale+ypos+ren*cero/4 , (inv+9*neg)*scale+xpos , 10*scale+ypos+ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 9*scale+ypos+ren*cero/4 , (inv+2*neg)*scale+xpos , 11*scale+ypos+ren*cero/4);
	bar((inv+3*neg)*scale+xpos , 11*scale+ypos+ren*cero/4 , (inv+9*neg)*scale+xpos , 12*scale+ypos+ren*cero/4);
	bar((inv+3*neg)*scale+xpos , 12*scale+ypos+ren*cero/4 , (inv+8*neg)*scale+xpos , 13*scale+ypos+ren*cero/4);
	bar((inv+1*neg)*scale+xpos , 12*scale+ypos+ren*cero/4 , (inv+2*neg)*scale+xpos , 13*scale+ypos+ren*cero/4);
	bar((inv+3*neg)*scale+xpos , 14*scale+ypos+ren*cero/4 , (inv+5*neg)*scale+xpos , 15*scale+ypos+ren*cero/4);
}
	
void batter(int draw, float scale, int xpos, int ypos, int col, int ren, int move, int color)
{
	int inv, neg, fix, spd=50;
	
	if (draw==1) //UP
	{
		if (move!=0)
		{

			batteruq(scale, xpos, ypos, ren, 1, 0, 3, color);
			delay(spd);
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos+ren*3/4 , 14*scale+xpos , 17*scale+ypos+ren*3/4);

			batterup(scale, xpos, ypos, ren, 1, color);
			delay(spd);
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos+ren/2 , 14*scale+xpos , 17*scale+ypos+ren/2);

			batteruq(scale, xpos, ypos, ren, -1, 12, 1, color);
			delay(spd-10);
			sound(500);delay(10);nosound();
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos+ren/4 , 14*scale+xpos , 17*scale+ypos+ren/4);
		}

		batterup(scale, xpos, ypos, ren, 0, color);
	}
	else if (draw==2) //DOWN
	{
		if (move!=0)
		{

			batterbown(scale, xpos, ypos, ren, 1, 0, 3, color);
			delay(spd);
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos-ren*3/4 , 14*scale+xpos , 17*scale+ypos-ren*3/4);

			batterdown(scale, xpos, ypos, ren, 1, color);
			delay(spd);
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos-ren/2 , 14*scale+xpos , 17*scale+ypos-ren/2);

			batterbown(scale, xpos, ypos, ren, -1, 12, 1, color);
			delay(spd-10);
			sound(500);delay(10);nosound();
			setfillstyle(1,0);
			bar(0*scale+xpos , 0*scale+ypos-ren/4 , 14*scale+xpos , 17*scale+ypos-ren/4);
		}

		batterdown(scale, xpos, ypos, ren, 0, color);
	}
	
	if (draw == 3 || draw == 4) //LEFT || RIGHT
	{
		if (draw == 3) { inv = 0; neg = 1; fix =0;}
		else{inv = 12;neg = -1; fix=2;}

		if (move!=0)
		{
			setfillstyle(1,color);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 1*scale+ypos , (inv+10*neg)*scale+xpos+col*neg*3/4 , 2*scale+ypos);
			bar((inv+3*neg)*scale+xpos+col*neg*3/4 , 2*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 3*scale+ypos);
			bar((inv+2*neg)*scale+xpos+col*neg*3/4 , 3*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 4*scale+ypos);
			bar((inv+1*neg)*scale+xpos+col*neg*3/4 , 4*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 5*scale+ypos);
			bar((inv+0*neg)*scale+xpos+col*neg*3/4 , 5*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 6*scale+ypos);
			bar((inv+2*neg)*scale+xpos+col*neg*3/4 , 6*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 7*scale+ypos);
			bar((inv+3*neg)*scale+xpos+col*neg*3/4 , 7*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 8*scale+ypos);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 8*scale+ypos , (inv+10*neg)*scale+xpos+col*neg*3/4 , 9*scale+ypos);
			bar((inv+5*neg)*scale+xpos+col*neg*3/4 , 9*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 11*scale+ypos);
			bar((inv+5*neg)*scale+xpos+col*neg*3/4 , 11*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 12*scale+ypos);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 12*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 13*scale+ypos);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 13*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 14*scale+ypos);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 14*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 16*scale+ypos);
			bar((inv+10*neg)*scale+xpos+col*neg*3/4 , 16*scale+ypos , (inv+12*neg)*scale+xpos+col*neg*3/4 , 17*scale+ypos);
			setfillstyle(1,15);
			bar((inv+4*neg)*scale+xpos+col*neg*3/4 , 7*scale+ypos , (inv+9*neg)*scale+xpos+col*neg*3/4 , 8*scale+ypos);
			bar((inv+5*neg)*scale+xpos+col*neg*3/4 , 8*scale+ypos , (inv+9*neg)*scale+xpos+col*neg*3/4 , 9*scale+ypos);
			bar((inv+9*neg)*scale+xpos+col*neg*3/4 , 9*scale+ypos , (inv+10*neg)*scale+xpos+col*neg*3/4 , 10*scale+ypos);
			bar((inv+7*neg)*scale+xpos+col*neg*3/4 , 10*scale+ypos , (inv+9*neg)*scale+xpos+col*neg*3/4 , 11*scale+ypos);
			bar((inv+6*neg)*scale+xpos+col*neg*3/4 , 11*scale+ypos , (inv+9*neg)*scale+xpos+col*neg*3/4 , 12*scale+ypos);
			bar((inv+7*neg)*scale+xpos+col*neg*3/4 , 12*scale+ypos , (inv+8*neg)*scale+xpos+col*neg*3/4 , 13*scale+ypos);
			bar((inv+5*neg)*scale+xpos+col*neg*3/4 , 12*scale+ypos , (inv+6*neg)*scale+xpos+col*neg*3/4 , 13*scale+ypos);
			bar((inv+9*neg)*scale+xpos+col*neg*3/4 , 13*scale+ypos , (inv+10*neg)*scale+xpos+col*neg*3/4 , 15*scale+ypos);
			bar((inv+10*neg)*scale+xpos+col*neg*3/4 , 14*scale+ypos , (inv+11*neg)*scale+xpos+col*neg*3/4 , 16*scale+ypos);
			bar((inv+5*neg)*scale+xpos+col*neg*3/4 , 14*scale+ypos , (inv+7*neg)*scale+xpos+col*neg*3/4 , 15*scale+ypos);
			delay(spd);
			setfillstyle(1,0);
			bar(xpos+col*neg*3/4 , ypos , 14*scale+xpos+col*neg*3/4 , 17*scale+ypos);

			batterside(scale, xpos, ypos, col, neg, inv, 1, color);
			delay(spd);
			setfillstyle(1,0);
			bar(xpos+col*neg/2 , ypos , 14*scale+xpos+col*neg/2 , 17*scale+ypos);

			setfillstyle(1,color);
			bar((inv+fix+5*neg)*scale+xpos+col*neg/4 , 1*scale+ypos , (inv+fix+10*neg)*scale+xpos+col*neg/4 , 2*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 2*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 3*scale+ypos);
			bar((inv+fix+3*neg)*scale+xpos+col*neg/4 , 3*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 4*scale+ypos);
			bar((inv+fix+2*neg)*scale+xpos+col*neg/4 , 4*scale+ypos , (inv+fix+12*neg)*scale+xpos+col*neg/4 , 5*scale+ypos);
			bar((inv+fix+0*neg)*scale+xpos+col*neg/4 , 5*scale+ypos , (inv+fix+12*neg)*scale+xpos+col*neg/4 , 6*scale+ypos);
			bar((inv+fix+2*neg)*scale+xpos+col*neg/4 , 6*scale+ypos , (inv+fix+12*neg)*scale+xpos+col*neg/4 , 7*scale+ypos);
			bar((inv+fix+3*neg)*scale+xpos+col*neg/4 , 7*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 8*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 8*scale+ypos , (inv+fix+10*neg)*scale+xpos+col*neg/4 , 9*scale+ypos);
			bar((inv+fix+5*neg)*scale+xpos+col*neg/4 , 9*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 10*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 10*scale+ypos , (inv+fix+13*neg)*scale+xpos+col*neg/4 , 11*scale+ypos);
			bar((inv+fix+3*neg)*scale+xpos+col*neg/4 , 11*scale+ypos , (inv+fix+14*neg)*scale+xpos+col*neg/4 , 13*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 13*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 14*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 14*scale+ypos , (inv+fix+12*neg)*scale+xpos+col*neg/4 , 15*scale+ypos);
			bar((inv+fix+3*neg)*scale+xpos+col*neg/4 , 15*scale+ypos , (inv+fix+12*neg)*scale+xpos+col*neg/4 , 16*scale+ypos);
			bar((inv+fix+3*neg)*scale+xpos+col*neg/4 , 16*scale+ypos , (inv+fix+7*neg)*scale+xpos+col*neg/4 , 17*scale+ypos);
			setfillstyle(1,15);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 7*scale+ypos , (inv+fix+9*neg)*scale+xpos+col*neg/4 , 8*scale+ypos);
			bar((inv+fix+5*neg)*scale+xpos+col*neg/4 , 8*scale+ypos , (inv+fix+9*neg)*scale+xpos+col*neg/4 , 9*scale+ypos);
			bar((inv+fix+9*neg)*scale+xpos+col*neg/4 , 9*scale+ypos , (inv+fix+10*neg)*scale+xpos+col*neg/4 , 10*scale+ypos);
			bar((inv+fix+8*neg)*scale+xpos+col*neg/4 , 10*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 11*scale+ypos);
			bar((inv+fix+6*neg)*scale+xpos+col*neg/4 , 10*scale+ypos , (inv+fix+7*neg)*scale+xpos+col*neg/4 , 11*scale+ypos);
			bar((inv+fix+4*neg)*scale+xpos+col*neg/4 , 11*scale+ypos , (inv+fix+5*neg)*scale+xpos+col*neg/4 , 12*scale+ypos);
			bar((inv+fix+6*neg)*scale+xpos+col*neg/4 , 11*scale+ypos , (inv+fix+8*neg)*scale+xpos+col*neg/4 , 12*scale+ypos);
			bar((inv+fix+10*neg)*scale+xpos+col*neg/4 , 11*scale+ypos , (inv+fix+11*neg)*scale+xpos+col*neg/4 , 12*scale+ypos);
			bar((inv+fix+12*neg)*scale+xpos+col*neg/4 , 11*scale+ypos , (inv+fix+13*neg)*scale+xpos+col*neg/4 , 12*scale+ypos);
			bar((inv+fix+9*neg)*scale+xpos+col*neg/4 , 13*scale+ypos , (inv+fix+10*neg)*scale+xpos+col*neg/4 , 15*scale+ypos);
			bar((inv+fix+6*neg)*scale+xpos+col*neg/4 , 13*scale+ypos , (inv+fix+8*neg)*scale+xpos+col*neg/4 , 14*scale+ypos);
			bar((inv+fix+5*neg)*scale+xpos+col*neg/4 , 14*scale+ypos , (inv+fix+7*neg)*scale+xpos+col*neg/4 , 15*scale+ypos);
			bar((inv+fix+5*neg)*scale+xpos+col*neg/4 , 15*scale+ypos , (inv+fix+6*neg)*scale+xpos+col*neg/4 , 16*scale+ypos);
			delay(spd-10);
			sound(500);delay(10);nosound();
			setfillstyle(1,0);
			bar(xpos+col*neg/4 , ypos , 14*scale+xpos+col*neg/4 , 17*scale+ypos);
		}
		batterside(scale, xpos, ypos, col, neg, inv, 0, color);
	}
}

void labwall(int mat[60][64], int matren, int matcol, int col, int ren, int top)
{
	int i, j;
	
	setfillstyle(1,1);
	bar(0,top,640,top+2); bar(0,478,640,480);

	for (i=1; i<(matcol*2)-1;i+=2)
	for (j=0; j<(matren*2)-1;j+=2)
	if (mat[j][i] == 1)	bar(col*(1+i-(1+i)/2) , top+ren*(j/2)+2 , 2+col*(1+i-(1+i)/2) , top+4+ren*(1+(j/2)));

	for (j=1; j<(matren*2)-1;j+=2)
	for (i=0; i<(matcol*2)-1;i+=2)
	if (mat[j][i] == 1) bar(col*(i/2) , top+ren*(1+j-(1+j)/2)+2 , 2+col*(1+(i/2)) , top+4+ren*(1+j-(1+j)/2));
}

void labdraw(int mat[60][64], int matren, int matcol, int col, int ren, int top, int x, int y, int redraw, float scale)
{
	int i, j, color, style, xpos, ypos;

	{
		for (j=0;j<(matren*2)-1;j+=2)
		for (i=0;i<(matcol*2)-1;i+=2)
		{
			if (mat[j][i] > 0 && mat[j][i] < 8 && redraw == 0)
			{
				xpos = col*(i/2)+2+(col-(16*scale))/2;
				ypos = ren*(j/2)+top+3+(ren-(16*scale))/2;

				switch (mat[j][i])
				{
					case 1: stairs(xpos, ypos, scale); break;
					case 2: cherry(xpos, ypos, scale); break;
					case 3: banana(xpos, ypos, scale); break;
					case 4: pear(xpos, ypos, scale); break;
					case 5: berry(xpos, ypos, scale); break;
					case 6: plum(xpos, ypos, scale); break;
					case 7: pretzel(xpos, ypos, scale); break;
				}
			}
			else if (mat[j][i] > 7 && (j != y || i != x))
			{
				color = mat[j][i];
				setcolor(0);setfillstyle(1,color);
				fillellipse((col/2)+col*(i-(1+i)/2) , top+(ren/2)+ren*(j/2) , col/4 , ren/4);
			}
		}
	}

	for (i=1;i<(matcol*2)-1;i+=2)
	for (j=0; j<(matren*2)-1;j+=2)
	{
		if (mat[y][x] == abs(mat[j][i])) mat[j][i] *=(-1);

		if (mat[j][i] > 7 || mat[j][i] < -7)
		{
			color = abs(mat[j][i]);
			if (mat[j][i] > 7) style = 1;
			else style = 4;
			
			setfillstyle(style,color);
			bar(col*(1+i-(1+i)/2) , top+ren*(j/2)+4 , 2+col*(1+i-(1+i)/2) , top+2+ren*(1+(j/2)));
		}
	}

	for (j=1;j<(matren*2)-1;j+=2)
	for (i=0; i<(matcol*2)-1;i+=2)
	{
		if (mat[y][x] == abs(mat[j][i])) mat[j][i] *=(-1);

		if (mat[j][i] > 7 || mat[j][i] < -7)
		{
			color = abs(mat[j][i]);
			if (mat[j][i] > 7) style = 1;
			else style = 4;
			
			setfillstyle(style,color);
			bar(col*(i/2)+4 , top+ren*(1+j-(1+j)/2)+2 , col*(1+(i/2)) , top+4+ren*(1+j-(1+j)/2));
		}
	}
}

int pausemenu(int restart)
{
	int key=13, i=0, cs, result;
	
	setfillstyle(1,0); bar(200,160,480,320);
	setfillstyle(1,5); 
	bar(200,160,480,200);bar(200,318,480,320);
	bar(200,160,202,320);bar(478,160,480,320);
	
	setcolor(15); settextstyle(3,0,3); outtextxy(290,165,"PAUSE");
	settextstyle(3,0,2); outtextxy(250,210,"CONTINUE");
	outtextxy(250,270,"EXIT");
	if (restart != 0) setcolor(15); else setcolor(7);
	outtextxy(250,240,"RESTART");
	do
	{
		if (key==72 || key==80 || key==13)
		{
			for(cs=0;cs<3;cs++) arrow(215,215+(30*cs),0,1);
			arrow(215,215+(30*(i)),15,1);
		}
	
		key = getch();
		switch (key)
		{
			case 72: if (i==0) i=2;
					 else
					 {
						i--;
						if (restart == 0 && i == 1) i--;
					 } break;
			case 80: if (i==2) i=0;
					 else
					 {
						i++;
						if (restart == 0 && i == 1) i++;
					 } break;
			case 13: switch (i)
					 {
						case 0: result = 1; break;
						case 1: result = 2; break;
						case 2: result = 3; break;
					 } break;
			case 27: result = 1; key = 13; break;
		}
		
	}while (key != 13);
	return (result);
}

void board(int top)
{
	setfillstyle(1,1);
	bar(0,0,640,top);
	settextstyle(3,0,2); setcolor(7);
	outtextxy(10,0,"POINTS:");
	outtextxy(227,0,"STEPS:");
	outtextxy(395,0,"TRIES:");
}

void loading(int level)
{
	clearviewport();
	int a, b, c, d, e, f, i, j=0, spike[46];
	char lvltxt[1];
	
	spike[0] = 0;
	spike[1] = 0;
	spike[44] = 0;
	spike [45] = 480;
	for (i=3; i<44; i+=2) {spike[i] = (24*j); j++;}
	for (i=2; i<44; i+=4) spike[i] = 160;
	for (i=4; i<44; i+=4) spike[i] = 180;
	
	setfillstyle(1,3);
	setcolor(0);
	fillpoly(23,spike);
	settextstyle(3,0,5); setcolor(15);
	outtextxy(240,190,"LOADING LEVEL");
	gcvt(level+1,1,lvltxt);
	outtextxy(550,190,lvltxt);
	for (i=0; i<3; i++) for (j=0; j<6; j++)

	{
		switch (j)
		{
			case 0:	a=0; b=5; c=10; d=15; e=10; f=5; break;
			case 1:	a=5; b=10; c=15; d=10; e=5; f=0; break;
			case 2:	a=10; b=15; c=10; d=5; e=0; f=5; break;
			case 3:	a=15; b=10; c=5; d=0; e=5; f=10; break;
			case 4:	a=10; b=5; c=0; d=5; e=10; f=15; break;
			case 5:	a=5; b=0; c=10; d=15; e=10; f=5; break;
		}
		
		setfillstyle(1,0); bar(250,250,550,350);
			
		cherry(250, 250+a, 3);
		banana(300, 250+b, 3);
		pear(350, 250+c, 3);
		berry(400, 250+d, 3);
		plum(450, 250+e, 3);
		pretzel(500, 250+f, 3);
		
		delay(100);
	}

	clearviewport();
}

void labplay(int matcol, int matren, int mat[60][64], float file[10], int &option)
{
	loading(file[6]);
	
	int top=26, key, flag=0, draw=1, col, ren, redraw=0, x, y, s, a, xpos, ypos, tries;
	float score, steps, scale;
	char pasos[5], restnum[3], sconum[6];

	option = 0;
	x = file[4];
	y = file[5];
	col = 640/matcol;
	ren = (480-top)/matren;

	if (col > ren) scale = (ren-4)/18.0;
	else scale = (col-4)/18.0;

	s = (col+6-14*scale)/2;
	a = (ren+6-16*scale)/2;

	labwall(mat, matren, matcol, col, ren, top);
	labdraw(mat, matren, matcol, col, ren, top, x, y, redraw, scale);
	board(top);

	xpos = ((x/2)*col)+s;
	ypos = ((y/2)*ren)+a+top;
	batter(draw, scale, xpos, ypos, col, ren, flag, file[0]);

	score = file[1];
	steps = file[2];
	tries = file[3];
	
	settextstyle(3,0,2); setcolor(15);
	gcvt(steps,5,pasos);outtextxy(298,0,pasos);
	gcvt(tries,1,restnum);outtextxy(464,0,restnum);
	gcvt(score,6,sconum);outtextxy(92,0,sconum);

	do
	{
		key = getch();

		if (key == 72 || key == 80 || key ==75 || key == 77 || key == 27)
		{
			battererase(scale, xpos, ypos);
			switch(key)
			{
				case 72:if (mat[y-1][x]<=0 && y != 0) //UP
						{
							if (mat[y-1][x] < -7 || mat[y][x] > 7) redraw = 1;
							y -= 2;
							ypos -= ren;
							flag=1;
						}
						draw=1;
						break;
				case 80:if (mat[y+1][x]<=0 && y < matren*2-2) //DOWN
						{
							if (mat[y+1][x] < -7 || mat[y][x] > 7) redraw = 1;
							y += 2;
							ypos += ren;
							flag=1;
						}
						draw=2;
						break;
				case 75:if (mat[y][x-1]<=0 && x != 0) //LEFT
						{
							if (mat[y][x-1] < -7 || mat[y][x] > 7) redraw = 1;
							x -= 2;
							flag=1;
							xpos -= col;
						}
						draw=3;
						break;
				case 77:if (mat[y][x+1]<=0 && x < matcol*2-2) //RIGHT
						{
							if (mat[y][x+1] < -7 || mat[y][x] > 7) redraw = 1;
							x += 2;
							flag=1;
							xpos += col;
						}
						draw=4;
						break;
				case 27:option = pausemenu(file[3]); break;
			}

			if (option == 1)
			{
				setfillstyle(1,0); bar(200,160,480,320);
				labwall(mat, matren, matcol, col, ren, top);
				labdraw(mat, matren, matcol, col, ren, top, x, y, redraw, scale);
				option = 0;
			}
			
			batter(draw, scale, xpos, ypos, col, ren, flag, file[0]);
			
			if ((redraw == 1 || mat[y][x] > 7) & flag == 1)
			{
				if (mat[y][x] > 7) sound(1000);delay(10);nosound();
				labdraw(mat, matren, matcol, col, ren, top, x, y, redraw, scale);
				redraw = 0;
			}

			if (flag == 1)
			{
				settextstyle(3,0,2);setcolor(1);gcvt(steps,5,pasos);outtextxy(298,0,pasos);
				steps++; setcolor(15);gcvt(steps,5,pasos);outtextxy(298,0,pasos);
				flag=0;
			}

			if (mat[y][x] > 1 && mat[y][x] < 8)
			{
				settextstyle(3,0,2);setcolor(1);gcvt(score,6,sconum);outtextxy(92,0,sconum);
				switch (mat[y][x])
				{
					case 2: score += 100;
							break;
					case 3: score += 200;
							break;
					case 4: score += 400;
							break;
					case 5: score += 800;
							break;
					case 6: score += 1600;
							break;
					case 7: score += 3200;
							break;
				}
				sound(700);delay(10);sound(1300);delay(10);nosound();mat[y][x] = 0;
				battererase(scale, xpos, ypos); batter(draw, scale, xpos, ypos, col, ren, flag, file[0]);
				setcolor(15);gcvt(score,6,sconum);outtextxy(92,0,sconum);
			}
		}
	}while (option != 3 && mat[y][x] != 1 && (option != 2 || file[3] == 0)); // && key != 13

	file[1] = score; file[2] = steps;
	
	if (mat[y][x] == 1) // || key == 13
	{
		file[6] += 1; file[7] = 0;
		file[8] = file[1]; file[9] = file[2];
	}

	if (option == 3){ file[4] = x; file[5] = y; }
	if (option == 2 && tries > 0) {tries--; file[3] = tries; file[7] = 0;}
}

void process(float file[10], int remat[60][64], int matlvl[60][64], int matcol, int matren)
{
	int i, j;
	for (j=0; j<=matren*2-2; j++) for (i=0; i<=matcol*2-2; i++) remat[j][i] = matlvl[j][i];
	file[1] = file[8];
	file[2] = file[9];
	file[4] = matcol*2-2;
	file[5] = matren*2-2;
	file[7] = 1;
}

void lab1run(int &matcol, int &matren, float file[10], int remat[60][64])
{
	matcol = 8; matren = 6;

	if (file[7] == 0)
	{
		int matlvl[60][64]={
		{0,0,0,-12,0,0,0,0,0,1,2,0,0,0,0}, //0
		{0,1,1,1,1,1,1,1,0,1,1,1,0,1,12}, //1
		{0,-14,0,0,0,1,0,0,0,1,0,0,0,1,0}, //2
		{1,1,1,1,0,1,0,1,-13,1,0,1,14,1,0}, //3
		{0,0,12,1,1,1,3,1,0,1,13,1,0,1,4}, //4
		{0,1,1,1,1,1,1,1,0,1,1,1,0,1,1}, //5
		{0,-14,0,0,0,0,0,0,0,12,0,0,0,0,14}, //6
		{0,1,1,1,1,1,0,1,0,1,0,1,1,1,1}, //7
		{0,1,3,1,2,1,0,1,2,1,0,1,0,0,0}, //8
		{0,1,0,1,0,1,13,1,1,1,0,1,0,1,0}, //9
		{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0}, //10
		};
		process(file, remat, matlvl, matcol, matren);
	}
}

void lab2run(int &matcol, int &matren, float file[10], int remat[60][64])
{
	matcol = 12; matren= 9;

	if (file[7] == 0)
	{
		int matlvl[60][64]={
		{0,0-9,0,0,1,1,0,0,14,1,4,0,0,0,0,8,0,0,0,1,0,0,5}, //0
		{0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,0,1,13,1,1}, //1
		{0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0}, //2
		{12,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0}, //3
		{6,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,3,1,0,0,0,9,0}, //4
		{1,1,0,1,0,1,0,1,1,1,0,1,-14,1,0,1,1,1,0,1,1,1,1}, //5
		{0,0,0,1,3,1,2,1,0,0,0,1,0,1,0,12,0,0,0,14,0,0,0}, //6
		{0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,0}, //7
		{0,13,0,0,0,0,0,0,0,14,0,1,0,0,0,1,0,1,4,0,0,1,8}, //8
		{1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1}, //9
		{3,1,0,1,0,0,0,0,0,1,2,1,12,1,0,1,0,0,0,1,0,13,0}, //10
		{0,1,0,1,8,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,0}, //11
		{0,0,0,1,0,1,4,1,13,0,0,1,0,0,0,0,0,1,0,0,0,1,0}, //12
		{1,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,-12,1,0}, //13
		{0,0,0,0,0,1,0,14,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0}, //14
		{0,1,0,1,1,1,1,1,0,1,0,1,9,1,1,1,1,1,0,1,1,1,0}, //15
		{9,1,0,0,0,0,2,1,0,0,0,0,0,0,0,0-8,5,1,0,0,2,1,0}, //16
		};
		process(file, remat, matlvl, matcol, matren);
	}
}

void lab3run(int &matcol, int &matren, float file[10], int remat[60][64])
{
	matcol = 16; matren= 12;

	if (file[7] == 0)
	{
		int matlvl[60][64]={
		{0,13,0,0,0,0,0,0,5,1,4,-12,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-14,0}, //0
		{0,1,1,1,1,1,14,1,1,1,1,1,0,1,0,1,0,1,1,1,12,1,0,1,1,1,1,1,1,1,0}, //1
		{0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,3,1,0,1,0,0,0,0,0,1,6,0,0}, //2
		{0,1,-12,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1}, //3
		{1,1,0,0,0,0,0,10,0,1,0,0,0,0,0,1,2,0,0,0,0,1,2,0,0,1,11,1,0,0,0}, //4
		{1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0}, //5
		{3,1,0,0,0,1,8,1,0,-9,0,1,0,0,0,0,4,1,0,1,0,0,12,1,0,1,0,8,0,1,7}, //6
		{0,1,1,1,-13,1,0,1,0,1,0,1,0,1,8,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,1}, //7
		{0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, //8
		{1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,14,1,1,1,1,1,1,1,0,1,11}, //9
		{0,0,0,0,0,0,0,0,0,0,0,9,0,1,0,0,0,0,0,1,0,0,0,0,0,0,3,1,0,1,0}, //10
		{0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0}, //11
		{0,1,9,0,0,1,0,-14,0,0,0,1,0,-14,0,0,0,11,0,0,0,0,0,1,0,0,0,0,0,1,4}, //12
		{0,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1}, //13
		{0,0,0,0,0,1,0,0,0,1,10,1,0,1,0,-11,0,0,0,10,0,1,0,0,0,0,0,1,0,0,0}, //14
		{1,1,1,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,1,1,1,1,12,1,0,1,0}, //15
		{0,0,0,0,0,1,0,1,0,0,0,13,0,1,0,1,0,0,3,1,6,1,0,11,0,1,0,1,14,1,0}, //16
		{10,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,0}, //17
		{0,1,0,1,0,0,0,0,2,1,0,1,0,0,0,0,0,1,13,0,0,0,0,1,0,1,0,0,0,0,0}, //18
		{0,1,0,1,0,1,1,1,1,1,0,1,9,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0}, //19
		{0,1,0,0,0,1,0,0,0,-13,0,1,0,1,4,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0}, //20
		{0,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,0,1,1}, //21
		{4,1,5,0,0,0,0,1,3,0,0,1,0,0,0,1,3,1,4,0,0,14,0,0,0,1,0,0,0,0,0} //22
		};
		process(file, remat, matlvl, matcol, matren);
	}
}

void lab4run(int &matcol, int &matren, float file[10], int remat[60][64])
{
	matcol = 20; matren= 15;

	if (file[7] == 0)
	{
		int matlvl[60][64]={
		{0,10,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,14,1,0,0,0,0,0,0,0,1,3,0,0,1,12,0,0}, //0
		{0,1,1,1,-11,1,0,1,0,1,1,1,-10,1,1,1,1,1,9,1,10,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,0}, //1
		{9,1,0,0,0,1,3,1,0,1,13,1,0,0,2,1,0,0,0,1,0,0,0,1,9,1,0,0,0,0,0,0,0,0,0,1,2,1,0}, //2
		{1,1,0,1,1,1,1,1,-8,1,0,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,8,1,1,1,0,1,0}, //3
		{0,0,0,0,0,0,0,1,0,0,0,1,0,1,8,0,0,1,0,0,0,14,0,0,0,13,0,1,0,0,0,1,0,1,0,0,0,-11,0}, //4
		{0,1,-10,1,0,1,-12,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,1,1,1}, //5
		{2,1,0,1,11,1,0,0,10,1,0,0,0,-14,0,0,0,-9,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,11,4,1,13}, //6
		{1,1,0,1,1,1,1,1,1,1,10,1,0,1,1,1,0,1,1,1,0,1,1,1,9,1,1,1,12,1,0,1,1,1,0,1,1,1,0}, //7
		{0,11,0,0,0,1,0,0,0,1,5,1,0,0,0,1,14,1,2,0,0,0,0,1,0,0,0,1,0,1,10,1,0,0,0,0,0,1,0}, //8
		{0,1,0,1,0,1,12,1,0,1,1,1,-13,1,0,1,1,1,1,1,1,1,-13,1,1,1,0,1,0,1,1,1,0,1,-14,1,0,1,-12}, //9
		{0,1,0,1,3,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0}, //10
		{0,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, //11
		{12,1,0,-8,0,0,0,8,0,0,14,1,2,1,12,0,0,1,0,1,14,1,6,1,8,1,0,0,0,0,0,0,0,-13,0,-10,0,0,14}, //12
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1,1,1,14,1,1,1,1,1,1,1,1}, //13
		{3,1,0,1,0,0,0,-14,0,0,0,0,0,0,3,1,0,1,0,-13,0,1,0,0,0,1,3,1,0,0,0,1,0,0,0,1,0,0,0}, //14
		{0,1,14,1,0,1,1,1,0,1,1,1,-9,1,1,1,11,1,1,1,0,1,0,1,0,1,1,1,12,1,1,1,0,1,0,1,0,1,-13}, //15
		{0,0,0,0,0,12,0,1,0,1,13,0,0,1,0,0,0,0,2,1,0,1,10,1,0,0,0,0,0,1,2,1,0,1,7,1,5,1,0}, //16
		{1,1,1,1,1,1,0,1,-11,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,11,1,0,1,0,1,15,1,1,1,1,1,0}, //17
		{9,1,14,0,0,0,0,1,0,0,0,13,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,10,0}, //18
		{0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1}, //19
		{0,0,0,-13,0,0,0,8,0,1,0,0,0,-12,0,1,0,0,0,15,0,0,0,0,2,1,0,1,0,0,0,0,0,1,0,0,0,0,0}, //20
		{1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,-10,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,0}, //21
		{10,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,0,1,11,0,0,1,0,1,0,0,0,1,0,0,3,1,0,1,0,0,0,1,12}, //22
		{1,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1}, //23
		{0,0,15,1,0,1,0,1,11,0,0,1,0,1,8,1,0,1,0,0,0,1,0,1,13,1,0,12,0,1,0,0,0,1,0,1,0,0,0}, //24
		{0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,0}, //25
		{0,1,0,0,0,1,0,1,0,-12,0,1,0,0,0,0,0,1,0,1,0,0,0,-12,0,0,0,0,0,1,0,1,0,15,0,1,2,1,1}, //26
		{0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,12,1,0,1,13,1,0,1,1,1,0,1,1}, //27
		{0,9,0,1,0,0,0,1,5,1,0,0,0,10,0,0,0,1,0,10,0,1,4,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0}, //28
		};
		process(file, remat, matlvl, matcol, matren);
	}
}

void regist(float file[10], char namf[6])
{
	char letter; int loop=0, i=3;
	namf[0] = '\x0'; file[3] = 3;
	clearviewport();

	setcolor(7); outtextxy(5,450,"PRESS 'ENTER' TO ACCEPT");
	
	
	setfillstyle(1,5);
	bar(0,35,640,80);
	settextstyle(3,0,5); setcolor(15);
	outtextxy(220,30,"REGISTER");

	setcolor(15); rectangle(200,110,400,160);
	settextstyle(3,0,1); setcolor(7);
	outtextxy(210,120,"NAME:");

	do{
		letter = getch();
		if (isalnum(letter) && strlen(namf) < 6)
		{
			loop = strlen(namf);
			namf[loop] = toupper(letter);
			namf[loop+1] = '\x0';
			setcolor(15); outtextxy(290,120,namf);
		}
		else if (letter == 8 && strlen(namf) > 0)
		{
			loop = strlen(namf);
			setcolor(0); outtextxy(290,120,namf);
			namf[loop-1] = '\x0';
			setcolor(15); outtextxy(290,120,namf);
		}
		if (letter == 13 && strlen(namf) == 0)
		{
			sound (500); delay(10); nosound();
		}
	}
	while (letter != 13 || strlen(namf) == 0);

	setcolor(15); rectangle(200,170,400,370);
	settextstyle(3,0,1); setcolor(7);
	outtextxy(250,180,"CHARACTER:");
	leftkey(220, 270);
	rightkey(360, 270);

	do
	{
		batterside(7, 250, 225, 0, 1, 0, 0, i);
		letter = getch();
		switch (letter)
		{
			case 75: if (i==2) i=6; else i--; break;
			case 77: if (i==6) i=2; else i++; break;
		}
		file[0] = i;
	}while (letter != 13);
}

void gamestart(float file[10], int remat[60][64])
{
	int matcol, matren, option;
	do
	{
		if (file[6] == 0)
		{
			lab1run(matcol, matren, file, remat);
			labplay(matcol, matren, remat, file, option);
		}

		if (file[6] == 1)
		{
			lab2run(matcol, matren, file, remat);
			labplay(matcol, matren, remat, file, option);
		}
		if (file[6] == 2)
		{
			lab3run(matcol, matren, file, remat);
			labplay(matcol, matren, remat, file, option);
		}
		if (file[6] == 3)
		{
			lab4run(matcol, matren, file, remat);
			labplay(matcol, matren, remat, file, option);
		}
	}while (option == 2);
	clearviewport();
}

void drawbegin(float file1[10], float file2[10], float file3[10], char namf1[6], char namf2[6], char namf3[6], int toggle)
{
	int j;
	char score[5], steps[5], level[1];

	clearviewport();
	
	setfillstyle(1,5);
	bar(0,35,640,80);
	settextstyle(3,0,5); setcolor(15);
	if (toggle == 0) outtextxy(70,30,"SELECT FILE");
	if (toggle == 1) outtextxy(110,30,"DELETE FILE");
	for(j=0; j<3; j++)
		{
			setcolor(15);
			rectangle(130,120+(90*j),530,200+(90*j));
		}

	if (file1[0] != 0)
	{
		setcolor(7);
		settextstyle(3,0,3);
		outtextxy(145,128,"NAME:");
		settextstyle(3,0,1);
		outtextxy(285,128,"POINTS:");
		outtextxy(285,148,"STEPS:");
		outtextxy(285,168,"LEVEL:");

		setcolor(15);
		settextstyle(3,0,4);
		outtextxy(145,150,namf1);
		settextstyle(3,0,1);
		gcvt(file1[1],5,score); outtextxy(365,128,score);
		gcvt(file1[2],5,steps); outtextxy(365,148,steps);
		if (file1[6] == 5) outtextxy(365,168,"COMPLETE");
		else {gcvt(file1[6]+1,1,level); outtextxy(365,168,level);}

		batterside(3, 480, 135, 0, 1, 0, 0, file1[0]);
	}
	else
	{
		setcolor(7); settextstyle(3,0,4); outtextxy(145,134,"NEW FILE");
	}

	if (file2[0] != 0)
	{
		setcolor(7);
		settextstyle(3,0,3);
		outtextxy(145,218,"NAME:");
		settextstyle(3,0,1);
		outtextxy(285,218,"POINTS:");
		outtextxy(285,238,"STEPS:");
		outtextxy(285,258,"LEVEL:");

		setcolor(15);
		settextstyle(3,0,4);
		outtextxy(145,240,namf2);
		settextstyle(3,0,1);
		gcvt(file2[1],5,score); outtextxy(365,218,score);
		gcvt(file2[2],5,steps); outtextxy(365,238,steps);
		if (file2[6] == 5) outtextxy(365,258,"COMPLETE");
		else {gcvt(file2[6]+1,1,level); outtextxy(365,258,level);}

		batterside(3, 480, 225, 0, 1, 0, 0, file2[0]);
	}
	else
	{
		setcolor(7); settextstyle(3,0,4); outtextxy(145,224,"NEW FILE");
	}

	if (file3[0] != 0)
	{
		setcolor(7);
		settextstyle(3,0,3);
		outtextxy(145,308,"NAME:");
		settextstyle(3,0,1);
		outtextxy(285,308,"POINTS:");
		outtextxy(285,328,"STEPS:");
		outtextxy(285,348,"LEVEL:");

		setcolor(15);
		settextstyle(3,0,4);
		outtextxy(145,332,namf3);
		settextstyle(3,0,1);
		gcvt(file3[1],5,score); outtextxy(365,308,score);
		gcvt(file3[2],5,steps); outtextxy(365,328,steps);
		if (file3[6] == 5) outtextxy(365,348,"COMPLETE");
		else {gcvt(file3[6]+1,1,level); outtextxy(365,348,level);}

		batterside(3, 480, 315, 0, 1, 0, 0, file3[0]);
	}
	else
	{
		setcolor(7); settextstyle(3,0,4); outtextxy(145,314,"NEW FILE");
	}

	settextstyle(3,0,3); setcolor(15);
	if (toggle == 0) outtextxy(145,400,"RETURN");
	if (toggle == 1) outtextxy(145,400,"CANCEL");

	if (toggle == 0) {setcolor(4); outtextxy(325,400,"DELETE FILE");}
}

void eliminararchivo(float file1[10], float file2[10], float file3[10], char namf1[6], char namf2[6], char namf3[6], int &i)
{
	int key=13, cs=0, j; i=0;
	do{
		if (key==13) drawbegin(file1, file2, file3, namf1, namf2, namf3, 1);

		if (key==72 || key==80 || key==13)
		{
			for(cs=0;cs<3;cs++) arrow(90,150+(90*cs),0,0);
			if (i <= 2) arrow(90,150+(90*(i)),15,0);

			for(cs=0;cs<1;cs++) arrow(105+(180*cs),405,0,0);
			if (i >= 3) arrow(105+(180*(i-3)),405,15,0);

			for(j=0; j<3; j++)
			{
				setcolor(15);
				rectangle(130,120+(90*j),530,200+(90*j));
			}
			setcolor(4);
			if (i <= 2) rectangle(130,120+(90*i),530,200+(90*i));
		}

		key = getch();

		switch(key)
		{
			case 72: if (i != 0) i--; else i=3; break;
			case 80: if (i != 3) i++; else i=0; break;
			case 13: switch(i)
					{
						case 0: for(j=0; j<10; j++) file1[j] = 0; key = 27; break;
						case 1: for(j=0; j<10; j++) file2[j] = 0; key = 27; break;
						case 2: for(j=0; j<10; j++) file3[j] = 0; key = 27; break;
						case 3: key = 27; break;
					}
		}
	}while (key != 27);
}

void menubegin(float file1[10], float file2[10], float file3[10], int remat1[60][64], int remat2[60][64], int remat3[60][64], char namf1[6], char namf2[6], char namf3[6])
{
	int key=13, cs=0, i=0;

	do{
		if (key==13) drawbegin(file1, file2, file3, namf1, namf2, namf3, 0);

		if (key==72 || key==80 || key==13)
		{
			for(cs=0;cs<3;cs++) arrow(90,150+(90*cs),0,0);
			if (i <= 2) arrow(90,150+(90*(i)),15,0);

			for(cs=0;cs<2;cs++) arrow(105+(180*cs),405,0,0);
			if (i >= 3) arrow(105+(180*(i-3)),405,15,0);
		}

		key = getch();

		switch(key)
		{
			case 72: if (i != 0) i--; else i=4; break;
			case 80: if (i != 4) i++; else i=0; break;
			case 13: switch(i)
					 {
						case 0: if (file1[0] == 0) regist(file1, namf1);
								else gamestart(file1, remat1);
								break;
						case 1: if (file2[0] == 0) regist(file2, namf2);
								else gamestart(file2, remat2);
								break;
						case 2: if (file3[0] == 0) regist(file3, namf3);
								else gamestart(file3, remat3);
								break;
						case 3: key = 27; break;
						case 4: eliminararchivo(file1, file2, file3, namf1, namf2, namf3, i); break;
					 }
					 break;
		}
	}while (key != 27);
}

void drawselect()
{
	clearviewport();

	setfillstyle(1,5);
	bar(0,35,640,80);
	settextstyle(3,0,5); setcolor(15);
	outtextxy(120,30,"SELECT LEVEL");

	settextstyle(3,0,3); setcolor(15);
	outtextxy(120,110,"FIRST LEVEL");
	outtextxy(120,150,"SECOND LEVEL");
	outtextxy(120,190,"THIRD LEVEL");
	outtextxy(120,230,"FOURTH LEVEL");
	outtextxy(120,310,"EXIT");
}

void menuselect()
{
	int matcol, matren, remat[60][64], option;
	int key=13,j=0, tf, i;
	float file[10];
	do
	{
		if (key==13)
		{
			drawselect();
			for (i=0; i<10; i++) file[i] = 0;
			file[0] = 3;
		}

		if (key==72 || key==80 || key==13)
		{
			for (tf=0;tf<6;tf++) arrow(90,115+(40*tf),0,1);
			arrow(90,115+(40*(j)),15,1);
		}

		key = getch();

		switch(key)
		{
			case 72: if (j == 5) j=3;
					 else if (j != 0) j--;
					 else j=5; break;
			case 80: if (j == 3) j=5;
					 else if (j != 5) j++;
					 else j=0; break;
			case 13: switch(j)
					 {
						case 0: lab1run(matcol, matren, file, remat); file[6] = 0; break;
						case 1: lab2run(matcol, matren, file, remat); file[6] = 1; break;
						case 2: lab3run(matcol, matren, file, remat); file[6] = 2; break;
						case 3: lab4run(matcol, matren, file, remat); file[6] = 3; break;
						case 5: key = 27; break;
					 }
					 if (j != 5) labplay(matcol, matren, remat, file, option); break;
		}
	}while (key != 27);
}

void menucontrols()
{
	clearviewport();

	setfillstyle(1,5);
	bar(0,35,640,80);
	settextstyle(3,0,5); setcolor(15);
	outtextxy(200,30,"CONTROLS");

	settextstyle(3,0,3); setcolor(15);
	outtextxy(90,110,"'   ' - MOVE UP");
	outtextxy(90,150,"'   ' - MOVE DOWN");
	outtextxy(90,190,"'   ' - MOVE LEFT");
	outtextxy(90,230,"'   ' - MOVE RIGHT");
	outtextxy(90,270,"'ESC' - PAUSE");
	upkey(100,118); downkey(100,158); leftkey(98,198); rightkey(98,238);
	settextstyle(3,0,3); setcolor(7);
	outtextxy(5,450,"PRESS 'ENTER' TO RETURN");

	char key;

	do{key = getch(); if (key == 13) key = 27;}while (key != 27);
}

void menuguide()
{
	int i, j;
	char key;
	clearviewport();

	setfillstyle(1,5);
	bar(0,35,640,80);
	settextstyle(3,0,5); setcolor(15);
	outtextxy(270,30,"GUIDE");

	settextstyle(3,0,2); setcolor(15);
	rectangle(40,120,310,250);
	outtextxy(80,130,"DYNAMIC WALLS");
	settextstyle(3,0,1); setcolor(7);
	outtextxy(75,155,"CLOSED / OPENED");
	for (i=8; i<=15; i++)
	{
		setfillstyle(1,i);
		bar(60+(15*(i-8)) , 190 , 62+(15*(i-8)) , 230);
		setfillstyle(4,i);
		bar(180+(15*(i-8)) , 190 , 182+(15*(i-8)) , 230);
	}

	setcolor(15);
	rectangle(40,270,310,400);
	settextstyle(3,0,2);
	outtextxy(130,280,"BUTTONS");
	settextstyle(3,0,1); setcolor(7);
	outtextxy(70,305,"ALTERNATE THE WALLS");
	outtextxy(90,325,"WITH THE SAME COLOR");
	for (i=8; i<=15; i++)
	{
		setcolor(0);setfillstyle(1,i);
		fillellipse(70+(30*(i-8)) , 370 , 12 , 12);
	}

	setcolor(15);
	rectangle(330,120,600,400);
	settextstyle(3,0,2);
	outtextxy(425,130,"POINTS");
	settextstyle(3,0,1); setcolor(7);
	cherry(370,170,2);
	outtextxy(420,170,"100 POINTS");
	banana(370,206,2);
	outtextxy(420,206,"200 POINTS");
	pear(370,242,2);
	outtextxy(420,242,"400 POINTS");
	cherry(370,278,2);
	outtextxy(420,278,"800 POINTS");
	plum(370,314,2);
	outtextxy(420,314,"1600 POINTS");
	pretzel(370,350,2);
	outtextxy(420,350,"3200 POINTS");

	settextstyle(3,0,2); setcolor(7);
	outtextxy(5,450,"PRESS 'ENTER' TO RETURN");

	do{key = getch(); if (key == 13) key = 27;}while (key != 27);
}

void drawmenu()
{
	clearviewport();
	setfillstyle(1,3);
	bar(0,25,640,170);
	bar(0,425,640,455);
	settextstyle(8,0,8); setcolor(0);
	outtextxy(135,0,"FRUITION");
	outtextxy(105,70,"LABYRINTH");
	settextstyle(3,0,2);
	outtextxy(170,425,"MADE BY ERIK SALAZAR");
	settextstyle(3,0,4); setcolor(15);
	outtextxy(120,200,"BEGIN");
	outtextxy(120,240,"SELECT LEVEL");
	outtextxy(120,280,"CONTROLS");
	outtextxy(120,320,"GUIDE");
	outtextxy(120,360,"EXIT");
}

void main()
{
	int gd,gm; gd=DETECT; initgraph(&gd,&gm,"C:\\BGI");
	int key=13, i=0, cs, j, k, remat1[60][64], remat2[60][64], remat3[60][64];
	float file1[10], file2[10], file3[10];
	// 0.char 1.score 2.steps 3.tries 4.x 5.y 6.level 7.restore 8.rescore 9.resteps
	char namf1[6], namf2[6], namf3[6];

	for (j=0; j<10; j++)
	{
		file1[j] = 0; file2[j] = 0; file3[j] = 0;
	}
	namf1[0] = '\x0'; namf2[0] = '\x0'; namf3[0] = '\x0';

	do
	{
		if (key==13) drawmenu();

		if (key==72 || key==80 || key==13)
		{
			for(cs=0;cs<5;cs++) arrow(90,210+(40*cs),0,0);
			arrow(90,210+(40*(i)),15,0);
		}

		key = getch();

		switch(key)
		{
			case 72: if (i != 0) i--; else i=4; break;
			case 80: if (i != 4) i++; else i=0; break;
			case 13: switch(i)
					 {
						case 0: menubegin(file1, file2, file3, remat1, remat2, remat3, namf1, namf2, namf3); break;
						case 1: menuselect(); break;
						case 2: menucontrols(); break;
						case 3: menuguide(); break;
						case 4: key = 27; break;
					 }
		}
	}while (key != 27);
}