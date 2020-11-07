#ifndef IGRAPHICS_H
#define IGRAPHICS_H

#pragma comment(lib, "glut32.lib")
#pragma comment(lib, "glaux.lib")

# include <stdio.h>
# include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#include <time.h>
#include <math.h>
#include "GL/glaux.h"



void iDraw();
void iKeyboard(unsigned char);
void iSpecialKeyboard(unsigned char);
void iMouseMove(int, int);
void iMouse(int button, int state, int x, int y);

static void  __stdcall iA0(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA1(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA2(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA3(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA4(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA5(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA6(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA7(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA8(HWND,unsigned int, unsigned int, unsigned long);
static void  __stdcall iA9(HWND,unsigned int, unsigned int, unsigned long);




int iSetTimer(int msec, void (*f)(void));
void iPauseTimer(int index);
void iResumeTimer(int index);
void iShowBMP2(int x, int y, char filename[], int ignoreColor);
void iShowBMP(int x, int y, char filename[]);
void iGetPixelColor (int cursorX, int cursorY, int rgb[]);
void iText(GLdouble x, GLdouble y, char *str, void* font=GLUT_BITMAP_8_BY_13);
void iPoint(double x, double y, int size=0);
void iLine(double x1, double y1, double x2, double y2);
void iFilledPolygon(double x[], double y[], int n);
void iPolygon(double x[], double y[], int n);
void iRectangle(double left, double bottom, double dx, double dy);
void iFilledRectangle(double left, double bottom, double dx, double dy);
void iFilledCircle(double x, double y, double r, int slices=100);
void iCircle(double x, double y, double r, int slices=100);
void iEllipse(double x, double y, double a, double b, int slices=100);
void iFilledEllipse(double x, double y, double a, double b, int slices=100);
void iRotate(double x, double y, double degree);
void iUnRotate();
void iSetColor(double r, double g, double b);
void iDelay(int sec);
void iClear();
void displayFF(void);
void animFF(void);
void keyboardHandler1FF(unsigned char key, int x, int y);
void keyboardHandler2FF(int key, int x, int y);
void mouseMoveHandlerFF(int mx, int my);
void mouseHandlerFF(int button, int state, int x, int y);
void iInitialize(int width=500, int height=500, char *title="iGraphics");




#endif // IGRAPHICS_H
