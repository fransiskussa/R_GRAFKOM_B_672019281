#include <stdlib.h>
#include <iostream>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
using namespace std;
float xrot = 0;
float yrot = 0;
float xdiff = 0;
float ydiff = 0;
bool mousedown = false;
//int a = 141;
	//int b = 160;
int a;
int b;
int c, d, e, f;
int g, h, j, k, i, l;
void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMove(int x, int y);
void mouseButton(int button, int state, int x, int y);

int is_depth;
void mouseMove(int x, int y) {
	if (mousedown) {
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

void mouseButton(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		mousedown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else {
		mousedown = false;
	}
	glutPostRedisplay();
}


void init(void) {
	glClearColor(255.0, 0.0, 255.0, 255.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);
	is_depth = 1;
	glPointSize(9.0);
	glLineWidth(5.0f);
}
void kotak(int a, int b, int d, int e, int c, int f) {
	for (int i = 0; i < c; i++) {
		glBegin(GL_QUADS);
		glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
		glVertex3f(a += f, 100, 75);
		glVertex3f(b += f, 100, 75);
		glVertex3f(d += f, 50, 75);
		glVertex3f(e += f, 50, 75);

	}
	glEnd();
}


void tampil(void) {
	//Bangun L1 dari kiri ke kanan
	//Alas L2 dari kanan ke kiri


	if (is_depth) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}
	else {
		glClear(GL_COLOR_BUFFER_BIT);
	}

	glPushMatrix();
	glRotatef(xrot, 1, 0, 0);
	glRotatef(yrot, 0, 1, 0);

	//Alas
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);
	glVertex3f(-200, 0, 300);
	glVertex3f(600, 0, 300);
	glVertex3f(600, 0, -200);
	glVertex3f(-200, 0, -200);
	glEnd();

	//1 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-130, 30, 50);
	glVertex3f(-130, 0, 50);
	glVertex3f(-130, 0, -50);
	glVertex3f(-130, 30, -50);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 30, 50);
	glVertex3f(-130, 0, 50);
	glVertex3f(-130, 0, -50);
	glVertex3f(-130, 30, -50);
	glEnd();

	//kursi 
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 10, 20);
	glEnd();
	//kursi 
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 0, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 0, 20);
	glEnd();

	//2
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 19);
	glVertex3f(-121, 0, 19);
	glVertex3f(-120, 0, 19);
	glVertex3f(-120, 10, 19);
	glEnd();

	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-121, 0, 19);
	glVertex3f(-121, 10, 19);
	glEnd();

	//samping kanan
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 10, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 0, 19);
	glVertex3f(-120, 10, 19);
	glEnd();

	//kursi sisi 2
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 20);
	glVertex3f(-114, 0, 20);
	glVertex3f(-113, 0, 20);
	glVertex3f(-113, 10, 20);
	glEnd();

	//2
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 19);
	glVertex3f(-114, 0, 19);
	glVertex3f(-113, 0, 19);
	glVertex3f(-113, 10, 19);
	glEnd();

	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 20);
	glVertex3f(-114, 0, 20);
	glVertex3f(-114, 0, 19);
	glVertex3f(-114, 10, 19);
	glEnd();

	//samping kanan
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-113, 10, 20);
	glVertex3f(-113, 0, 20);
	glVertex3f(-113, 0, 19);
	glVertex3f(-113, 10, 19);
	glEnd();

	//kursi tiga
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 0, 15);
	glVertex3f(-113, 0, 15);
	glVertex3f(-113, 10, 15);
	glEnd();

	//2
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 14);
	glVertex3f(-114, 0, 14);
	glVertex3f(-113, 0, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 0, 15);
	glVertex3f(-114, 0, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	//samping kanan
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-113, 10, 15);
	glVertex3f(-113, 0, 15);
	glVertex3f(-113, 0, 14);
	glVertex3f(-113, 10, 14);
	glEnd();


	//kursi empat 
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 10, 15);
	glEnd();
	//kursi 
	//1
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 10, 15);
	glEnd();

	//2
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 14);
	glVertex3f(-121, 0, 14);
	glVertex3f(-120, 0, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-121, 0, 14);
	glVertex3f(-121, 10, 14);
	glEnd();

	//samping kanan
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 0, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	//kursi duduk
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 10, 14);
	glVertex3f(-113, 10, 14);
	glVertex3f(-113, 10, 20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 11, 20);
	glVertex3f(-121, 11, 14);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 11, 20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 11, 20);
	glVertex3f(-113, 11, 20);
	glVertex3f(-113, 10, 20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 14);
	glVertex3f(-121, 11, 14);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 11, 20);
	glVertex3f(-121, 11, 14);
	glVertex3f(-121, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-113, 10, 20);
	glVertex3f(-113, 11, 20);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-115, 10, 15);
	glVertex3f(-115, 17, 15);
	glVertex3f(-114, 17, 15);
	glVertex3f(-114, 10, 15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-115, 17, 15);
	glVertex3f(-115, 17, 14);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 17, 15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-115, 10, 14);
	glVertex3f(-115, 17, 14);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-115, 10, 15);
	glVertex3f(-115, 17, 15);
	glVertex3f(-115, 17, 14);
	glVertex3f(-115, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 17, 15);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	//cagak2
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 17, 15);
	glVertex3f(-119, 17, 15);
	glVertex3f(-119, 10, 15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 17, 15);
	glVertex3f(-120, 17, 14);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 17, 15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 10, 14);
	glVertex3f(-120, 17, 14);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 17, 15);
	glVertex3f(-120, 17, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-119, 10, 15);
	glVertex3f(-119, 17, 15);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 10, 14);
	glEnd();

	//kursisenderan
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 19, 16);
	glVertex3f(-121, 15, 16);
	glVertex3f(-113, 15, 16);
	glVertex3f(-113, 19, 16);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 19, 15);
	glVertex3f(-121, 15, 15);
	glVertex3f(-113, 15, 15);
	glVertex3f(-113, 19, 15);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-121, 19, 16);
	glVertex3f(-121, 15, 16);
	glVertex3f(-121, 15, 15);
	glVertex3f(-121, 19, 15);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.671f, 0.322f, 0.0f);
	glVertex3f(-113, 19, 16);
	glVertex3f(-113, 15, 16);
	glVertex3f(-113, 15, 15);
	glVertex3f(-113, 19, 15);
	glEnd();

	//line loop
		//kursi 
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 10, 20);
	glEnd();
	//kursi 
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 0, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 0, 20);
	glEnd();

	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 19);
	glVertex3f(-121, 0, 19);
	glVertex3f(-120, 0, 19);
	glVertex3f(-120, 10, 19);
	glEnd();

	//samping kiri
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 0, 20);
	glVertex3f(-121, 0, 19);
	glVertex3f(-121, 10, 19);
	glEnd();

	//samping kanan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 10, 20);
	glVertex3f(-120, 0, 20);
	glVertex3f(-120, 0, 19);
	glVertex3f(-120, 10, 19);
	glEnd();

	//kursi sisi 2
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 20);
	glVertex3f(-114, 0, 20);
	glVertex3f(-113, 0, 20);
	glVertex3f(-113, 10, 20);
	glEnd();

	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 19);
	glVertex3f(-114, 0, 19);
	glVertex3f(-113, 0, 19);
	glVertex3f(-113, 10, 19);
	glEnd();

	//samping kiri
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 20);
	glVertex3f(-114, 0, 20);
	glVertex3f(-114, 0, 19);
	glVertex3f(-114, 10, 19);
	glEnd();

	//samping kanan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-113, 10, 20);
	glVertex3f(-113, 0, 20);
	glVertex3f(-113, 0, 19);
	glVertex3f(-113, 10, 19);
	glEnd();

	//kursi tiga
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 0, 15);
	glVertex3f(-113, 0, 15);
	glVertex3f(-113, 10, 15);
	glEnd();

	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 14);
	glVertex3f(-114, 0, 14);
	glVertex3f(-113, 0, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	//samping kiri
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 0, 15);
	glVertex3f(-114, 0, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	//samping kanan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-113, 10, 15);
	glVertex3f(-113, 0, 15);
	glVertex3f(-113, 0, 14);
	glVertex3f(-113, 10, 14);
	glEnd();


	//kursi empat 
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 10, 15);
	glEnd();
	//kursi 
	//1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 10, 15);
	glEnd();

	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 14);
	glVertex3f(-121, 0, 14);
	glVertex3f(-120, 0, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	//samping kiri
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 15);
	glVertex3f(-121, 0, 15);
	glVertex3f(-121, 0, 14);
	glVertex3f(-121, 10, 14);
	glEnd();

	//samping kanan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 0, 15);
	glVertex3f(-120, 0, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	//kursi duduk
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 10, 14);
	glVertex3f(-113, 10, 14);
	glVertex3f(-113, 10, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 11, 20);
	glVertex3f(-121, 11, 14);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 11, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 11, 20);
	glVertex3f(-113, 11, 20);
	glVertex3f(-113, 10, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 14);
	glVertex3f(-121, 11, 14);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 10, 20);
	glVertex3f(-121, 11, 20);
	glVertex3f(-121, 11, 14);
	glVertex3f(-121, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-113, 10, 20);
	glVertex3f(-113, 11, 20);
	glVertex3f(-113, 11, 14);
	glVertex3f(-113, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-115, 10, 15);
	glVertex3f(-115, 17, 15);
	glVertex3f(-114, 17, 15);
	glVertex3f(-114, 10, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-115, 17, 15);
	glVertex3f(-115, 17, 14);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 17, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-115, 10, 14);
	glVertex3f(-115, 17, 14);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-115, 10, 15);
	glVertex3f(-115, 17, 15);
	glVertex3f(-115, 17, 14);
	glVertex3f(-115, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-114, 10, 15);
	glVertex3f(-114, 17, 15);
	glVertex3f(-114, 17, 14);
	glVertex3f(-114, 10, 14);
	glEnd();

	//cagak2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 17, 15);
	glVertex3f(-119, 17, 15);
	glVertex3f(-119, 10, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 17, 15);
	glVertex3f(-120, 17, 14);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 17, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 10, 14);
	glVertex3f(-120, 17, 14);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 10, 15);
	glVertex3f(-120, 17, 15);
	glVertex3f(-120, 17, 14);
	glVertex3f(-120, 10, 14);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-119, 10, 15);
	glVertex3f(-119, 17, 15);
	glVertex3f(-119, 17, 14);
	glVertex3f(-119, 10, 14);
	glEnd();

	//kursisenderan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 19, 16);
	glVertex3f(-121, 15, 16);
	glVertex3f(-113, 15, 16);
	glVertex3f(-113, 19, 16);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 19, 15);
	glVertex3f(-121, 15, 15);
	glVertex3f(-113, 15, 15);
	glVertex3f(-113, 19, 15);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-121, 19, 16);
	glVertex3f(-121, 15, 16);
	glVertex3f(-121, 15, 15);
	glVertex3f(-121, 19, 15);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-113, 19, 16);
	glVertex3f(-113, 15, 16);
	glVertex3f(-113, 15, 15);
	glVertex3f(-113, 19, 15);
	glEnd();

	//2 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-100, 30, 50);
	glVertex3f(-100, 0, 50);
	glVertex3f(-130, 0, 50);
	glVertex3f(-130, 30, 50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-100, 30, 50);
	glVertex3f(-100, 0, 50);
	glVertex3f(-130, 0, 50);
	glVertex3f(-130, 30, 50);
	glEnd();


	//3 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-100, 0, 100);
	glVertex3f(-100, 30, 100);
	glVertex3f(-100, 30, 50);
	glVertex3f(-100, 0, 50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-100, 0, 100);
	glVertex3f(-100, 30, 100);
	glVertex3f(-100, 30, 50);
	glVertex3f(-100, 0, 50);
	glEnd();


	//4(depan) L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-100, 0, 100);
	glVertex3f(-40, 0, 100);
	glVertex3f(-40, 30, 100);
	glVertex3f(-100, 30, 100);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-100, 0, 100);
	glVertex3f(-40, 0, 100);
	glVertex3f(-40, 30, 100);
	glVertex3f(-100, 30, 100);
	glEnd();

	//5 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-40, 0, 100);
	glVertex3f(-40, 30, 100);
	glVertex3f(-40, 30, -50);
	glVertex3f(-40, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-40, 0, 100);
	glVertex3f(-40, 30, 100);
	glVertex3f(-40, 30, -50);
	glVertex3f(-40, 0, -50);
	glEnd();

	//6 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(0, 0, 80);
	glVertex3f(0, 30, 80);
	glVertex3f(0, 30, -50);
	glVertex3f(0, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 80);
	glVertex3f(0, 30, 80);
	glVertex3f(0, 30, -50);
	glVertex3f(0, 0, -50);
	glEnd();

	//7 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(0, 0, 80);
	glVertex3f(30, 0, 80);
	glVertex3f(30, 30, 80);
	glVertex3f(0, 30, 80);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 80);
	glVertex3f(30, 0, 80);
	glVertex3f(30, 30, 80);
	glVertex3f(0, 30, 80);
	glEnd();


	//8 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(30, 0, 80);
	glVertex3f(30, 30, 80);
	glVertex3f(30, 30, 30);
	glVertex3f(30, 0, 30);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(30, 0, 80);
	glVertex3f(30, 30, 80);
	glVertex3f(30, 30, 30);
	glVertex3f(30, 0, 30);
	glEnd();

	//9 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(30, 30, 30);
	glVertex3f(30, 0, 30);
	glVertex3f(130, 0, 30);
	glVertex3f(130, 30, 30);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(30, 30, 30);
	glVertex3f(30, 0, 30);
	glVertex3f(130, 0, 30);
	glVertex3f(130, 30, 30);
	glEnd();


	//10 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(130, 0, 30);
	glVertex3f(130, 30, 30);
	glVertex3f(130, 30, -50);
	glVertex3f(130, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(130, 0, 30);
	glVertex3f(130, 30, 30);
	glVertex3f(130, 30, -50);
	glVertex3f(130, 0, -50);
	glEnd();

	//11 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(170, 0, 50);
	glVertex3f(170, 30, 50);
	glVertex3f(170, 30, -50);
	glVertex3f(170, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 0, 50);
	glVertex3f(170, 30, 50);
	glVertex3f(170, 30, -50);
	glVertex3f(170, 0, -50);
	glEnd();


	//12 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(170, 0, 50);
	glVertex3f(280, 0, 50);
	glVertex3f(280, 30, 50);
	glVertex3f(170, 30, 50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 0, 50);
	glVertex3f(280, 0, 50);
	glVertex3f(280, 30, 50);
	glVertex3f(170, 30, 50);
	glEnd();


	//13 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(280, 0, 50);
	glVertex3f(280, 30, 50);
	glVertex3f(280, 30, -50);
	glVertex3f(280, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(280, 0, 50);
	glVertex3f(280, 30, 50);
	glVertex3f(280, 30, -50);
	glVertex3f(280, 0, -50);
	glEnd();


	//14 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(310, 0, 50);
	glVertex3f(310, 30, 50);
	glVertex3f(310, 30, -50);
	glVertex3f(310, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(310, 0, 50);
	glVertex3f(310, 30, 50);
	glVertex3f(310, 30, -50);
	glVertex3f(310, 0, -50);
	glEnd();



	//15 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(310, 0, 50);
	glVertex3f(405, 0, 50);
	glVertex3f(405, 30, 50);
	glVertex3f(310, 30, 50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(310, 0, 50);
	glVertex3f(405, 0, 50);
	glVertex3f(405, 30, 50);
	glVertex3f(310, 30, 50);
	glEnd();

	//16 L1
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(405, 0, 50);
	glVertex3f(405, 30, 50);
	glVertex3f(405, 30, -50);
	glVertex3f(405, 0, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(405, 0, 50);
	glVertex3f(405, 30, 50);
	glVertex3f(405, 30, -50);
	glVertex3f(405, 0, -50);
	glEnd();



	//alas L2 1 kanan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(425, 30, 85);
	glVertex3f(425, 30, -50);
	glVertex3f(310, 30, -50);
	glVertex3f(310, 30, 85);
	glEnd();


	//alas L2 2
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(330, 30, 110);
	glVertex3f(330, 30, -50);
	glVertex3f(160, 30, -50);
	glVertex3f(160, 30, 110);
	glEnd();

	//alas L2 3-1
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(170, 30, -50);
	glVertex3f(170, 30, 85);
	glVertex3f(0, 30, 85);
	glVertex3f(0, 30, -50);
	glEnd();

	//alas L2 3-2
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(40, 30, 30);
	glVertex3f(40, 30, 85);
	glVertex3f(-40, 30, 85);
	glVertex3f(-40, 30, 30);
	glEnd();

	//alas L2 3-3
	//glBegin(GL_POLYGON);
	//glColor3f(1, 0, 0);
	//glVertex3f(0, 30, 90);
	//glVertex3f(0, 30, 30);
	//glEnd();


	//alas L2 4-1
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-140, 30, 60);
	glVertex3f(-140, 30, -50);
	glVertex3f(0, 30, -50);
	glVertex3f(0, 30, 60);
	glEnd();

	//alas L2 4-2
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-120, 30, 60);
	glVertex3f(-120, 30, 110);
	glVertex3f(-15, 30, 110);
	glVertex3f(-15, 30, 60);
	glEnd();

	////////////////// Lantai 2 //////////////////
	//samping
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 30, -48);
	glVertex3f(-129, 50, -48);
	glVertex3f(-129, 50, 48);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 50, 48);
	glVertex3f(-100, 50, 48);
	glVertex3f(-100, 30, 48);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-100, 30, 48);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-100, 50, 48);
	glEnd();
	//4
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 30, 75);
	glEnd();
	//5
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-95, 30, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 50, 90);
	glVertex3f(-95, 30, 90);
	glEnd();
	//6
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-95, 30, 90);
	glVertex3f(-95, 50, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 30, 90);
	glEnd();

	//6.0
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-90, 30, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-90, 30, 92.5);
	glEnd();

	//6.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-90, 30, 92.5);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 30, 90);
	glEnd();

	//6.3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-77, 30, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-77, 30, 92.5);
	glEnd();

	//6.4
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-77, 30, 92.5);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 30, 90);
	glEnd();


	//6.6
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-64, 30, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-64, 30, 92.5);
	glEnd();

	//6.7
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-64, 30, 92.5);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 30, 90);
	glEnd();

	//6.9
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-51, 30, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-51, 30, 92.5);
	glEnd();

	//6.9.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-51, 30, 92.5);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 30, 90);
	glEnd();

	//7
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-38, 30, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 50, 65);
	glVertex3f(-38, 30, 65);
	glEnd();
	//8
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(-38, 30, 65);
	glVertex3f(-38, 50, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 30, 65);
	glEnd();

	//8.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-25, 30, 65.1);
	glVertex3f(-25, 50, 65.1);
	glVertex3f(0, 50, 65.1);
	glVertex3f(0, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(5, 30, 65.1);
	glVertex3f(5, 50, 65.1);
	glVertex3f(30, 50, 65.1);
	glVertex3f(30, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(35, 30, 65.1);
	glVertex3f(35, 50, 65.1);
	glVertex3f(60, 50, 65.1);
	glVertex3f(60, 30, 65.1);
	glEnd();


	//8.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(65, 30, 65.1);
	glVertex3f(65, 50, 65.1);
	glVertex3f(90, 50, 65.1);
	glVertex3f(90, 30, 65.1);
	glEnd();


	//8.3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(95, 30, 65.1);
	glVertex3f(95, 50, 65.1);
	glVertex3f(120, 50, 65.1);
	glVertex3f(120, 30, 65.1);
	glEnd();

	//9
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(130, 30, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 50, -50);
	glVertex3f(130, 30, -50);
	glEnd();

	//10
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(160, 50, -50);
	glVertex3f(160, 30, -50);
	glEnd();

	//11
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 30, 65);
	glEnd();

	//11.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(169, 30, 65.1);
	glVertex3f(169, 50, 65.1);
	glVertex3f(189, 50, 65.1);
	glVertex3f(189, 30, 65.1);
	glEnd();

	//11.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(197, 30, 65.1);
	glVertex3f(197, 50, 65.1);
	glVertex3f(217, 50, 65.1);
	glVertex3f(217, 30, 65.1);
	glEnd();

	//11.3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(225, 30, 65.1);
	glVertex3f(225, 50, 65.1);
	glVertex3f(245, 50, 65.1);
	glVertex3f(245, 30, 65.1);
	glEnd();

	//11.4
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(253, 30, 65.1);
	glVertex3f(253, 50, 65.1);
	glVertex3f(273, 50, 65.1);
	glVertex3f(273, 30, 65.1);
	glEnd();

	//12
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(280, 30, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 50, -50);
	glVertex3f(280, 30, -50);
	glEnd();

	//13
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(310, 50, -50);
	glVertex3f(310, 30, -50);
	glEnd();

	//14
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(410, 50, 65);
	glVertex3f(410, 30, 65);
	glEnd();

	//14.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(313, 30, 65.1);
	glVertex3f(313, 50, 65.1);
	glVertex3f(343, 50, 65.1);
	glVertex3f(343, 30, 65.1);
	glEnd();

	//14.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(345, 30, 65.1);
	glVertex3f(345, 50, 65.1);
	glVertex3f(375, 50, 65.1);
	glVertex3f(375, 30, 65.1);
	glEnd();

	//14.3
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(377, 30, 65.1);
	glVertex3f(377, 50, 65.1);
	glVertex3f(407, 50, 65.1);
	glVertex3f(407, 30, 65.1);
	glEnd();

	//15
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.9f, 0.0f);
	glVertex3f(410, 30, 65);
	glVertex3f(410, 50, 65);
	glVertex3f(410, 50, -50);
	glVertex3f(410, 30, -50);
	glEnd();

	//outline
	// 	   //samping
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 30, -48);
	glVertex3f(-129, 50, -48);
	glVertex3f(-129, 50, 48);
	glEnd();
	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 50, 48);
	glVertex3f(-100, 50, 48);
	glVertex3f(-100, 30, 48);
	glEnd();
	//3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-100, 30, 48);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-100, 50, 48);
	glEnd();
	//4
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 30, 75);
	glEnd();
	//5
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-95, 30, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 50, 90);
	glVertex3f(-95, 30, 90);
	glEnd();
	//6
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-95, 30, 90);
	glVertex3f(-95, 50, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 30, 90);
	glEnd();

	//6.0
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-90, 30, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-90, 30, 92.5);
	glEnd();

	//6.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-90, 30, 92.5);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 30, 90);
	glEnd();

	//6.3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-77, 30, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-77, 30, 92.5);
	glEnd();

	//6.4
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-77, 30, 92.5);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 30, 90);
	glEnd();


	//6.6
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-64, 30, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-64, 30, 92.5);
	glEnd();

	//6.7
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-64, 30, 92.5);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 30, 90);
	glEnd();

	//6.9
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-51, 30, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-51, 30, 92.5);
	glEnd();

	//6.9.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-51, 30, 92.5);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 30, 90);
	glEnd();

	//7
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-38, 30, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 50, 65);
	glVertex3f(-38, 30, 65);
	glEnd();
	//8
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-38, 30, 65);
	glVertex3f(-38, 50, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 30, 65);
	glEnd();

	//8.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-25, 30, 65.1);
	glVertex3f(-25, 50, 65.1);
	glVertex3f(0, 50, 65.1);
	glVertex3f(0, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(5, 30, 65.1);
	glVertex3f(5, 50, 65.1);
	glVertex3f(30, 50, 65.1);
	glVertex3f(30, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(35, 30, 65.1);
	glVertex3f(35, 50, 65.1);
	glVertex3f(60, 50, 65.1);
	glVertex3f(60, 30, 65.1);
	glEnd();


	//8.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(65, 30, 65.1);
	glVertex3f(65, 50, 65.1);
	glVertex3f(90, 50, 65.1);
	glVertex3f(90, 30, 65.1);
	glEnd();


	//8.3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(95, 30, 65.1);
	glVertex3f(95, 50, 65.1);
	glVertex3f(120, 50, 65.1);
	glVertex3f(120, 30, 65.1);
	glEnd();

	//9
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(130, 30, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 50, -50);
	glVertex3f(130, 30, -50);
	glEnd();

	//10
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(160, 50, -50);
	glVertex3f(160, 30, -50);
	glEnd();

	//11
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 30, 65);
	glEnd();

	//11.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(169, 30, 65.1);
	glVertex3f(169, 50, 65.1);
	glVertex3f(189, 50, 65.1);
	glVertex3f(189, 30, 65.1);
	glEnd();

	//11.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(197, 30, 65.1);
	glVertex3f(197, 50, 65.1);
	glVertex3f(217, 50, 65.1);
	glVertex3f(217, 30, 65.1);
	glEnd();

	//11.3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(225, 30, 65.1);
	glVertex3f(225, 50, 65.1);
	glVertex3f(245, 50, 65.1);
	glVertex3f(245, 30, 65.1);
	glEnd();

	//11.4
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(253, 30, 65.1);
	glVertex3f(253, 50, 65.1);
	glVertex3f(273, 50, 65.1);
	glVertex3f(273, 30, 65.1);
	glEnd();

	//12
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(280, 30, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 50, -50);
	glVertex3f(280, 30, -50);
	glEnd();

	//13
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(310, 50, -50);
	glVertex3f(310, 30, -50);
	glEnd();

	//14
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(410, 50, 65);
	glVertex3f(410, 30, 65);
	glEnd();

	//14.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(313, 30, 65.1);
	glVertex3f(313, 50, 65.1);
	glVertex3f(343, 50, 65.1);
	glVertex3f(343, 30, 65.1);
	glEnd();

	//14.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(345, 30, 65.1);
	glVertex3f(345, 50, 65.1);
	glVertex3f(375, 50, 65.1);
	glVertex3f(375, 30, 65.1);
	glEnd();

	//14.3
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(377, 30, 65.1);
	glVertex3f(377, 50, 65.1);
	glVertex3f(407, 50, 65.1);
	glVertex3f(407, 30, 65.1);
	glEnd();

	//15
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(410, 30, 65);
	glVertex3f(410, 50, 65);
	glVertex3f(410, 50, -50);
	glVertex3f(410, 30, -50);
	glEnd();
	/////alaslt2/////
	//1
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(-95, 50, 100);
	glVertex3f(-95, 50, -50);
	glVertex3f(-30, 50, -50);
	glVertex3f(-30, 50, 100);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(-38, 50, 75);
	glVertex3f(-38, 50, -50);
	glVertex3f(135, 50, -50);
	glVertex3f(135, 50, 75);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(-135, 50, 55);
	glVertex3f(-135, 50, -50);
	glVertex3f(-100, 50, -50);
	glVertex3f(-100, 50, 55);
	glEnd();
	//4
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(-105, 50, 85);
	glVertex3f(-105, 50, -50);
	glVertex3f(-95, 50, -50);
	glVertex3f(-95, 50, 85);
	glEnd();
	//5
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(155, 50, 75);
	glVertex3f(155, 50, -50);
	glVertex3f(295, 50, -50);
	glVertex3f(295, 50, 75);
	glEnd();
	//6
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);
	glVertex3f(305, 50, 75);
	glVertex3f(305, 50, -50);
	glVertex3f(415, 50, -50);
	glVertex3f(415, 50, 75);
	glEnd();
	//pagar
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(425, 30, 85);
	glVertex3f(425, 30, -50);
	glVertex3f(425, 40, -50);
	glVertex3f(425, 40, 85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 30, 85);
	glVertex3f(425, 30, 85);
	glVertex3f(425, 40, 85);
	glVertex3f(330, 40, 85);
	glEnd();
	//tangga
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 30, 90);
	glVertex3f(330, 30, 85);
	glVertex3f(330, 40, 85);
	glVertex3f(330, 40, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 30, 110);
	glVertex3f(330, 30, 105);
	glVertex3f(330, 40, 105);
	glVertex3f(330, 40, 110);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 30, 90);
	glVertex3f(390, 15, 90);
	glVertex3f(390, 25, 90);
	glVertex3f(330, 40, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 0, 105);
	glVertex3f(390, 0, 105);
	glVertex3f(390, 25, 105);
	glVertex3f(330, 40, 105);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(390, 15, 90);
	glVertex3f(410, 15, 90);
	glVertex3f(410, 25, 90);
	glVertex3f(390, 25, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(410, 15, 120);
	glVertex3f(410, 15, 90);
	glVertex3f(410, 25, 90);
	glVertex3f(410, 25, 120);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(330, 0, 120);
	glVertex3f(410, 15, 120);
	glVertex3f(410, 25, 120);
	glVertex3f(330, 10, 120);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(330, 30, 105);
	glVertex3f(390, 15, 105);
	glVertex3f(390, 15, 90);
	glVertex3f(330, 30, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(390, 15, 120);
	glVertex3f(410, 15, 120);
	glVertex3f(410, 15, 90);
	glVertex3f(390, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(390, 15, 120);
	glVertex3f(330, 0, 120);
	glVertex3f(330, 0, 105);
	glVertex3f(390, 15, 105);
	glEnd();
	//tanggakelar
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(160, 30, 110);
	glVertex3f(330, 30, 110);
	glVertex3f(330, 40, 110);
	glVertex3f(160, 40, 110);
	glEnd();
	//tangga
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(160, 30, 85);
	glVertex3f(160, 30, 110);
	glVertex3f(160, 40, 110);
	glVertex3f(160, 40, 85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(160, 30, 90);
	glVertex3f(100, 15, 90);
	glVertex3f(100, 25, 90);
	glVertex3f(160, 40, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(160, 0, 105);
	glVertex3f(100, 0, 105);
	glVertex3f(100, 25, 105);
	glVertex3f(160, 40, 105);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(100, 15, 125);
	glVertex3f(160, 0, 125);
	glVertex3f(160, 10, 125);
	glVertex3f(100, 25, 125);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(100, 15, 90);
	glVertex3f(80, 15, 90);
	glVertex3f(80, 25, 90);
	glVertex3f(100, 25, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(80, 15, 90);
	glVertex3f(80, 15, 125);
	glVertex3f(80, 25, 125);
	glVertex3f(80, 25, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(100, 15, 125);
	glVertex3f(80, 15, 125);
	glVertex3f(80, 25, 125);
	glVertex3f(100, 25, 125);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(100, 15, 105);
	glVertex3f(160, 30, 105);
	glVertex3f(160, 30, 90);
	glVertex3f(100, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(80, 15, 125);
	glVertex3f(100, 15, 125);
	glVertex3f(100, 15, 90);
	glVertex3f(80, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(100, 15, 125);
	glVertex3f(160, 0, 125);
	glVertex3f(160, 0, 105);
	glVertex3f(100, 15, 105);
	glEnd();
	//tanggakelar
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-15, 30, 85);
	glVertex3f(160, 30, 85);
	glVertex3f(160, 40, 85);
	glVertex3f(-15, 40, 85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-15, 30, 110);
	glVertex3f(-15, 30, 85);
	glVertex3f(-15, 40, 85);
	glVertex3f(-15, 40, 110);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 30, 110);
	glVertex3f(-15, 30, 110);
	glVertex3f(-15, 40, 110);
	glVertex3f(-120, 40, 110);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 30, 60);
	glVertex3f(-120, 30, 110);
	glVertex3f(-120, 40, 110);
	glVertex3f(-120, 40, 60);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-120, 30, 60);
	glVertex3f(-120, 30, 110);
	glVertex3f(-120, 40, 110);
	glVertex3f(-120, 40, 60);
	glEnd();
	//tangga spiral
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-140, 30, 60);
	glVertex3f(-120, 30, 60);
	glVertex3f(-120, 40, 60);
	glVertex3f(-140, 40, 60);
	glEnd();
	//tangga spiral kelar
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-140, 30, -50);
	glVertex3f(-140, 30, 60);
	glVertex3f(-140, 40, 60);
	glVertex3f(-140, 40, -50);
	glEnd();
	//pagar kelar

	//list lantai 3 kiri 
	//samping 1
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-135, 60, 55);
	glVertex3f(-135, 60, -50);
	glVertex3f(-135, 50, -50);
	glVertex3f(-135, 50, 55);
	glEnd();

	// depan 1
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-105, 60, 55);
	glVertex3f(-135, 60, 55);
	glVertex3f(-135, 50, 55);
	glVertex3f(-105, 50, 55);
	glEnd();

	//samping 2
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-105, 60, 85);
	glVertex3f(-105, 60, 55);
	glVertex3f(-105, 50, 55);
	glVertex3f(-105, 50, 85);
	glEnd();

	//depan 2
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-95, 60, 85);
	glVertex3f(-105, 60, 85);
	glVertex3f(-105, 50, 85);
	glVertex3f(-95, 50, 85);
	glEnd();

	//samping 3
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-95, 60, 100);
	glVertex3f(-95, 60, 85);
	glVertex3f(-95, 50, 85);
	glVertex3f(-95, 50, 100);
	glEnd();

	//depan 3
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-95, 60, 100);
	glVertex3f(-30, 60, 100);
	glVertex3f(-30, 50, 100);
	glVertex3f(-95, 50, 100);
	glEnd();

	//samping 4
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-30, 60, 100);
	glVertex3f(-30, 60, -50);
	glVertex3f(-30, 50, -50);
	glVertex3f(-30, 50, 100);
	glEnd();


	//belakang 5
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-135, 60, -50);
	glVertex3f(135, 60, -50);
	glVertex3f(135, 50, -50);
	glVertex3f(-135, 50, -50);
	glEnd();

	//list lantai 3 tengah 
	//kotak kiri 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, -40);
	glVertex3f(155, 100, -50);
	glVertex3f(155, 80, -50);
	glVertex3f(155, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, -40);
	glVertex3f(155, 65, -50);
	glVertex3f(155, 50, -50);
	glVertex3f(155, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, -1);
	glVertex3f(155, 100, -39);
	glVertex3f(155, 80, -39);
	glVertex3f(155, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, -1);
	glVertex3f(155, 65, -39);
	glVertex3f(155, 50, -39);
	glVertex3f(155, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, 0);
	glVertex3f(155, 100, 34);
	glVertex3f(155, 80, 34);
	glVertex3f(155, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, 0);
	glVertex3f(155, 65, 34);
	glVertex3f(155, 50, 34);
	glVertex3f(155, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, 65);
	glVertex3f(155, 100, 35);
	glVertex3f(155, 80, 35);
	glVertex3f(155, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, 65);
	glVertex3f(155, 65, 35);
	glVertex3f(155, 50, 35);
	glVertex3f(155, 50, 65);
	glEnd();

	//kotak kiri 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, 75);
	glVertex3f(155, 100, 66);
	glVertex3f(155, 80, 66);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, 75);
	glVertex3f(155, 65, 66);
	glVertex3f(155, 50, 66);
	glVertex3f(155, 50, 75);
	glEnd();

	//kotak 1.1 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 100, 75);
	glVertex3f(160, 100, 75);
	glVertex3f(160, 80, 75);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(155, 65, 75);
	glVertex3f(160, 65, 75);
	glVertex3f(160, 50, 75);
	glVertex3f(155, 50, 75);
	glEnd();



	//linelop
	//kotak kiri 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, -40);
	glVertex3f(155, 100, -50);
	glVertex3f(155, 80, -50);
	glVertex3f(155, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, -40);
	glVertex3f(155, 65, -50);
	glVertex3f(155, 50, -50);
	glVertex3f(155, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, -1);
	glVertex3f(155, 100, -39);
	glVertex3f(155, 80, -39);
	glVertex3f(155, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, -1);
	glVertex3f(155, 65, -39);
	glVertex3f(155, 50, -39);
	glVertex3f(155, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, 0);
	glVertex3f(155, 100, 34);
	glVertex3f(155, 80, 34);
	glVertex3f(155, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, 0);
	glVertex3f(155, 65, 34);
	glVertex3f(155, 50, 34);
	glVertex3f(155, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, 65);
	glVertex3f(155, 100, 35);
	glVertex3f(155, 80, 35);
	glVertex3f(155, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, 65);
	glVertex3f(155, 65, 35);
	glVertex3f(155, 50, 35);
	glVertex3f(155, 50, 65);
	glEnd();

	//kotak kiri 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, 75);
	glVertex3f(155, 100, 66);
	glVertex3f(155, 80, 66);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, 75);
	glVertex3f(155, 65, 66);
	glVertex3f(155, 50, 66);
	glVertex3f(155, 50, 75);
	glEnd();

	//kotak 1.1 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 100, 75);
	glVertex3f(160, 100, 75);
	glVertex3f(160, 80, 75);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 65, 75);
	glVertex3f(160, 65, 75);
	glVertex3f(160, 50, 75);
	glVertex3f(155, 50, 75);
	glEnd();








	//kotak gede
	//kiri,kanan,kanan,kiri
	kotak(141, 160, 160, 141, 6, 21);
	//LINELOOP
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(162, 100, 75.1);
	glVertex3f(181, 100, 75.1);
	glVertex3f(181, 50, 75.1);
	glVertex3f(162, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(183, 100, 75.1);
	glVertex3f(202, 100, 75.1);
	glVertex3f(202, 50, 75.1);
	glVertex3f(183, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(204, 100, 75.1);
	glVertex3f(223, 100, 75.1);
	glVertex3f(223, 50, 75.1);
	glVertex3f(204, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(225, 100, 75.1);
	glVertex3f(244, 100, 75.1);
	glVertex3f(244, 50, 75.1);
	glVertex3f(225, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(246, 100, 75.1);
	glVertex3f(265, 100, 75.1);
	glVertex3f(265, 50, 75.1);
	glVertex3f(246, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(267, 100, 75.1);
	glVertex3f(286, 100, 75.1);
	glVertex3f(286, 50, 75.1);
	glVertex3f(267, 50, 75.1);
	glEnd();



	//kotak 8.1 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(289, 100, 75);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 80, 75);
	glVertex3f(289, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(289, 65, 75);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 50, 75);
	glVertex3f(289, 50, 75);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 100, 66);
	glVertex3f(294, 80, 66);
	glVertex3f(294, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 65, 66);
	glVertex3f(294, 50, 66);
	glVertex3f(294, 50, 75);
	glEnd();

	//kotak kanan 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 100, -40);
	glVertex3f(294, 100, -50);
	glVertex3f(294, 80, -50);
	glVertex3f(294, 80, -40);
	glEnd();

	//kotak kanan 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 65, -40);
	glVertex3f(294, 65, -50);
	glVertex3f(294, 50, -50);
	glVertex3f(294, 50, -40);
	glEnd();

	//kotak kanan 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 100, -1);
	glVertex3f(294, 100, -39);
	glVertex3f(294, 80, -39);
	glVertex3f(294, 80, -1);
	glEnd();

	//kotak kanan 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 65, -1);
	glVertex3f(294, 65, -39);
	glVertex3f(294, 50, -39);
	glVertex3f(294, 50, -1);
	glEnd();

	//kotak kanan 3.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 100, 0);
	glVertex3f(294, 100, 34);
	glVertex3f(294, 80, 34);
	glVertex3f(294, 80, 0);
	glEnd();

	//kotak kanan 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 65, 0);
	glVertex3f(294, 65, 34);
	glVertex3f(294, 50, 34);
	glVertex3f(294, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 100, 65);
	glVertex3f(294, 100, 35);
	glVertex3f(294, 80, 35);
	glVertex3f(294, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(294, 65, 65);
	glVertex3f(294, 65, 35);
	glVertex3f(294, 50, 35);
	glVertex3f(294, 50, 65);
	glEnd();

	//kotak 8.1 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(289, 100, 75);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 80, 75);
	glVertex3f(289, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(289, 65, 75);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 50, 75);
	glVertex3f(289, 50, 75);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 100, 66);
	glVertex3f(294, 80, 66);
	glVertex3f(294, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 65, 66);
	glVertex3f(294, 50, 66);
	glVertex3f(294, 50, 75);
	glEnd();

	//kotak kanan 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 100, -40);
	glVertex3f(294, 100, -50);
	glVertex3f(294, 80, -50);
	glVertex3f(294, 80, -40);
	glEnd();

	//kotak kanan 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 65, -40);
	glVertex3f(294, 65, -50);
	glVertex3f(294, 50, -50);
	glVertex3f(294, 50, -40);
	glEnd();

	//kotak kanan 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 100, -1);
	glVertex3f(294, 100, -39);
	glVertex3f(294, 80, -39);
	glVertex3f(294, 80, -1);
	glEnd();

	//kotak kanan 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 65, -1);
	glVertex3f(294, 65, -39);
	glVertex3f(294, 50, -39);
	glVertex3f(294, 50, -1);
	glEnd();

	//kotak kanan 3.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 100, 0);
	glVertex3f(294, 100, 34);
	glVertex3f(294, 80, 34);
	glVertex3f(294, 80, 0);
	glEnd();

	//kotak kanan 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 65, 0);
	glVertex3f(294, 65, 34);
	glVertex3f(294, 50, 34);
	glVertex3f(294, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 100, 65);
	glVertex3f(294, 100, 35);
	glVertex3f(294, 80, 35);
	glVertex3f(294, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(294, 65, 65);
	glVertex3f(294, 65, 35);
	glVertex3f(294, 50, 35);
	glVertex3f(294, 50, 65);
	glEnd();


	//list lantai 3 kanan
	//kotak kiri 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, 75);
	glVertex3f(305, 100, 66);
	glVertex3f(305, 80, 66);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, 75);
	glVertex3f(305, 65, 66);
	glVertex3f(305, 50, 66);
	glVertex3f(305, 50, 75);
	glEnd();

	//kotak kiri 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, -40);
	glVertex3f(305, 100, -50);
	glVertex3f(305, 80, -50);
	glVertex3f(305, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, -40);
	glVertex3f(305, 65, -50);
	glVertex3f(305, 50, -50);
	glVertex3f(305, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, -1);
	glVertex3f(305, 100, -39);
	glVertex3f(305, 80, -39);
	glVertex3f(305, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, -1);
	glVertex3f(305, 65, -39);
	glVertex3f(305, 50, -39);
	glVertex3f(305, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, 0);
	glVertex3f(305, 100, 34);
	glVertex3f(305, 80, 34);
	glVertex3f(305, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, 0);
	glVertex3f(305, 65, 34);
	glVertex3f(305, 50, 34);
	glVertex3f(305, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, 65);
	glVertex3f(305, 100, 35);
	glVertex3f(305, 80, 35);
	glVertex3f(305, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, 65);
	glVertex3f(305, 65, 35);
	glVertex3f(305, 50, 35);
	glVertex3f(305, 50, 65);
	glEnd();


	//kotak kanan 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 100, -40);
	glVertex3f(415, 100, -50);
	glVertex3f(415, 80, -50);
	glVertex3f(415, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 65, -40);
	glVertex3f(415, 65, -50);
	glVertex3f(415, 50, -50);
	glVertex3f(415, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 100, -1);
	glVertex3f(415, 100, -39);
	glVertex3f(415, 80, -39);
	glVertex3f(415, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 65, -1);
	glVertex3f(415, 65, -39);
	glVertex3f(415, 50, -39);
	glVertex3f(415, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 100, 0);
	glVertex3f(415, 100, 34);
	glVertex3f(415, 80, 34);
	glVertex3f(415, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 65, 0);
	glVertex3f(415, 65, 34);
	glVertex3f(415, 50, 34);
	glVertex3f(415, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 100, 65);
	glVertex3f(415, 100, 35);
	glVertex3f(415, 80, 35);
	glVertex3f(415, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 65, 65);
	glVertex3f(415, 65, 35);
	glVertex3f(415, 50, 35);
	glVertex3f(415, 50, 65);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 100, 66);
	glVertex3f(415, 80, 66);
	glVertex3f(415, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 65, 66);
	glVertex3f(415, 50, 66);
	glVertex3f(415, 50, 75);
	glEnd();

	//kotak 1.1 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 100, 75);
	glVertex3f(310, 100, 75);
	glVertex3f(310, 80, 75);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak 1.2 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(305, 65, 75);
	glVertex3f(310, 65, 75);
	glVertex3f(310, 50, 75);
	glVertex3f(305, 50, 75);
	glEnd();


	//list lantai 3 kanan
	//kotak kiri 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, 75);
	glVertex3f(305, 100, 66);
	glVertex3f(305, 80, 66);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, 75);
	glVertex3f(305, 65, 66);
	glVertex3f(305, 50, 66);
	glVertex3f(305, 50, 75);
	glEnd();

	//kotak kiri 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, -40);
	glVertex3f(305, 100, -50);
	glVertex3f(305, 80, -50);
	glVertex3f(305, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, -40);
	glVertex3f(305, 65, -50);
	glVertex3f(305, 50, -50);
	glVertex3f(305, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, -1);
	glVertex3f(305, 100, -39);
	glVertex3f(305, 80, -39);
	glVertex3f(305, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, -1);
	glVertex3f(305, 65, -39);
	glVertex3f(305, 50, -39);
	glVertex3f(305, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, 0);
	glVertex3f(305, 100, 34);
	glVertex3f(305, 80, 34);
	glVertex3f(305, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, 0);
	glVertex3f(305, 65, 34);
	glVertex3f(305, 50, 34);
	glVertex3f(305, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, 65);
	glVertex3f(305, 100, 35);
	glVertex3f(305, 80, 35);
	glVertex3f(305, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, 65);
	glVertex3f(305, 65, 35);
	glVertex3f(305, 50, 35);
	glVertex3f(305, 50, 65);
	glEnd();


	//kotak kanan 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 100, -40);
	glVertex3f(415, 100, -50);
	glVertex3f(415, 80, -50);
	glVertex3f(415, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 65, -40);
	glVertex3f(415, 65, -50);
	glVertex3f(415, 50, -50);
	glVertex3f(415, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 100, -1);
	glVertex3f(415, 100, -39);
	glVertex3f(415, 80, -39);
	glVertex3f(415, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 65, -1);
	glVertex3f(415, 65, -39);
	glVertex3f(415, 50, -39);
	glVertex3f(415, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 100, 0);
	glVertex3f(415, 100, 34);
	glVertex3f(415, 80, 34);
	glVertex3f(415, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 65, 0);
	glVertex3f(415, 65, 34);
	glVertex3f(415, 50, 34);
	glVertex3f(415, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 100, 65);
	glVertex3f(415, 100, 35);
	glVertex3f(415, 80, 35);
	glVertex3f(415, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 65, 65);
	glVertex3f(415, 65, 35);
	glVertex3f(415, 50, 35);
	glVertex3f(415, 50, 65);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 100, 66);
	glVertex3f(415, 80, 66);
	glVertex3f(415, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 65, 66);
	glVertex3f(415, 50, 66);
	glVertex3f(415, 50, 75);
	glEnd();

	//kotak 1.1 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 100, 75);
	glVertex3f(310, 100, 75);
	glVertex3f(310, 80, 75);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak 1.2 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(305, 65, 75);
	glVertex3f(310, 65, 75);
	glVertex3f(310, 50, 75);
	glVertex3f(305, 50, 75);
	glEnd();








	//kotak gede
	//kiri,kanan,kanan,kiri
	kotak(296, 310, 310, 296, 6, 16);
	//LINELOOP
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(312, 100, 75.1);
	glVertex3f(326, 100, 75.1);
	glVertex3f(326, 50, 75.1);
	glVertex3f(312, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(328, 100, 75.1);
	glVertex3f(342, 100, 75.1);
	glVertex3f(342, 50, 75.1);
	glVertex3f(328, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(344, 100, 75.1);
	glVertex3f(358, 100, 75.1);
	glVertex3f(358, 50, 75.1);
	glVertex3f(344, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(360, 100, 75.1);
	glVertex3f(374, 100, 75.1);
	glVertex3f(374, 50, 75.1);
	glVertex3f(360, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(376, 100, 75.1);
	glVertex3f(390, 100, 75.1);
	glVertex3f(390, 50, 75.1);
	glVertex3f(376, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(392, 100, 75.1);
	glVertex3f(406, 100, 75.1);
	glVertex3f(406, 50, 75.1);
	glVertex3f(392, 50, 75.1);
	glEnd();








	//kotak 8.1 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(410, 100, 75);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 80, 75);
	glVertex3f(410, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(410, 65, 75);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 50, 75);
	glVertex3f(410, 50, 75);
	glEnd();

	//kotak 8.1 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(410, 100, 75);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 80, 75);
	glVertex3f(410, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(410, 65, 75);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 50, 75);
	glVertex3f(410, 50, 75);
	glEnd();

	//lis bangunan 2
	//kotak kiri 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 100, -40);
	glVertex3f(-27, 100, -50);
	glVertex3f(-27, 80, -50);
	glVertex3f(-27, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, -40);
	glVertex3f(-27, 65, -50);
	glVertex3f(-27, 50, -50);
	glVertex3f(-27, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 100, 5);
	glVertex3f(-27, 100, -39);
	glVertex3f(-27, 80, -39);
	glVertex3f(-27, 80, 5);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, -1);
	glVertex3f(-27, 65, -39);
	glVertex3f(-27, 50, -39);
	glVertex3f(-27, 50, -1);
	glEnd();


	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, 0);
	glVertex3f(-27, 65, 34);
	glVertex3f(-27, 50, 34);
	glVertex3f(-27, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 100, 65);
	glVertex3f(-27, 100, 41);
	glVertex3f(-27, 80, 41);
	glVertex3f(-27, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, 65);
	glVertex3f(-27, 65, 35);
	glVertex3f(-27, 50, 35);
	glVertex3f(-27, 50, 65);
	glEnd();

	//kotak kiri 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 100, 75);
	glVertex3f(-27, 100, 66);
	glVertex3f(-27, 80, 66);
	glVertex3f(-27, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, 75);
	glVertex3f(-27, 65, 66);
	glVertex3f(-27, 50, 66);
	glVertex3f(-27, 50, 75);
	glEnd();

	//kotak 1.1 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 100, 75);
	glVertex3f(-22, 100, 75);
	glVertex3f(-22, 80, 75);
	glVertex3f(-27, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-27, 65, 75);
	glVertex3f(-22, 65, 75);
	glVertex3f(-22, 50, 75);
	glVertex3f(-27, 50, 75);
	glEnd();


	//kotak kanan 1.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 100, -40);
	glVertex3f(135, 100, -50);
	glVertex3f(135, 80, -50);
	glVertex3f(135, 80, -40);
	glEnd();

	//kotak kanan 1.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 65, -40);
	glVertex3f(135, 65, -50);
	glVertex3f(135, 50, -50);
	glVertex3f(135, 50, -40);
	glEnd();

	//kotak kanan 2.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 100, -1);
	glVertex3f(135, 100, -39);
	glVertex3f(135, 80, -39);
	glVertex3f(135, 80, -1);
	glEnd();

	//kotak kanan 2.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 65, -1);
	glVertex3f(135, 65, -39);
	glVertex3f(135, 50, -39);
	glVertex3f(135, 50, -1);
	glEnd();

	//kotak kanan 3.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 100, 0);
	glVertex3f(135, 100, 34);
	glVertex3f(135, 80, 34);
	glVertex3f(135, 80, 0);
	glEnd();

	//kotak kanan 3.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 65, 0);
	glVertex3f(135, 65, 34);
	glVertex3f(135, 50, 34);
	glVertex3f(135, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 100, 65);
	glVertex3f(135, 100, 35);
	glVertex3f(135, 80, 35);
	glVertex3f(135, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 65, 65);
	glVertex3f(135, 65, 35);
	glVertex3f(135, 50, 35);
	glVertex3f(135, 50, 65);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 100, 75);
	glVertex3f(135, 100, 66);
	glVertex3f(135, 80, 66);
	glVertex3f(135, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(135, 65, 75);
	glVertex3f(135, 65, 66);
	glVertex3f(135, 50, 66);
	glVertex3f(135, 50, 75);
	glEnd();


	//lineloop
	//kotak kiri 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 100, -40);
	glVertex3f(-27, 100, -50);
	glVertex3f(-27, 80, -50);
	glVertex3f(-27, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, -40);
	glVertex3f(-27, 65, -50);
	glVertex3f(-27, 50, -50);
	glVertex3f(-27, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 100, 5);
	glVertex3f(-27, 100, -39);
	glVertex3f(-27, 80, -39);
	glVertex3f(-27, 80, 5);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, -1);
	glVertex3f(-27, 65, -39);
	glVertex3f(-27, 50, -39);
	glVertex3f(-27, 50, -1);
	glEnd();


	//kotak kiri 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, 0);
	glVertex3f(-27, 65, 34);
	glVertex3f(-27, 50, 34);
	glVertex3f(-27, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 100, 65);
	glVertex3f(-27, 100, 41);
	glVertex3f(-27, 80, 41);
	glVertex3f(-27, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, 65);
	glVertex3f(-27, 65, 35);
	glVertex3f(-27, 50, 35);
	glVertex3f(-27, 50, 65);
	glEnd();

	//kotak kiri 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 100, 75);
	glVertex3f(-27, 100, 66);
	glVertex3f(-27, 80, 66);
	glVertex3f(-27, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, 75);
	glVertex3f(-27, 65, 66);
	glVertex3f(-27, 50, 66);
	glVertex3f(-27, 50, 75);
	glEnd();

	//kotak 1.1 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 100, 75);
	glVertex3f(-22, 100, 75);
	glVertex3f(-22, 80, 75);
	glVertex3f(-27, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 65, 75);
	glVertex3f(-22, 65, 75);
	glVertex3f(-22, 50, 75);
	glVertex3f(-27, 50, 75);
	glEnd();


	//kotak kanan 1.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 100, -40);
	glVertex3f(135, 100, -50);
	glVertex3f(135, 80, -50);
	glVertex3f(135, 80, -40);
	glEnd();

	//kotak kanan 1.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 65, -40);
	glVertex3f(135, 65, -50);
	glVertex3f(135, 50, -50);
	glVertex3f(135, 50, -40);
	glEnd();

	//kotak kanan 2.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 100, -1);
	glVertex3f(135, 100, -39);
	glVertex3f(135, 80, -39);
	glVertex3f(135, 80, -1);
	glEnd();

	//kotak kanan 2.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 65, -1);
	glVertex3f(135, 65, -39);
	glVertex3f(135, 50, -39);
	glVertex3f(135, 50, -1);
	glEnd();

	//kotak kanan 3.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 100, 0);
	glVertex3f(135, 100, 34);
	glVertex3f(135, 80, 34);
	glVertex3f(135, 80, 0);
	glEnd();

	//kotak kanan 3.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 65, 0);
	glVertex3f(135, 65, 34);
	glVertex3f(135, 50, 34);
	glVertex3f(135, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 100, 65);
	glVertex3f(135, 100, 35);
	glVertex3f(135, 80, 35);
	glVertex3f(135, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 65, 65);
	glVertex3f(135, 65, 35);
	glVertex3f(135, 50, 35);
	glVertex3f(135, 50, 65);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 100, 75);
	glVertex3f(135, 100, 66);
	glVertex3f(135, 80, 66);
	glVertex3f(135, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(135, 65, 75);
	glVertex3f(135, 65, 66);
	glVertex3f(135, 50, 66);
	glVertex3f(135, 50, 75);
	glEnd();

	//kotak gede
	//kiri,kanan,kanan,kiri
	kotak(-41, -21, -21, -41, 7, 21);
	//LINELOOP
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-20, 100, 75.1);
	glVertex3f(0, 100, 75.1);
	glVertex3f(0, 50, 75.1);
	glVertex3f(-20, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(1, 100, 75.1);
	glVertex3f(21, 100, 75.1);
	glVertex3f(21, 50, 75.1);
	glVertex3f(1, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(22, 100, 75.1);
	glVertex3f(42, 100, 75.1);
	glVertex3f(42, 50, 75.1);
	glVertex3f(22, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(43, 100, 75.1);
	glVertex3f(63, 100, 75.1);
	glVertex3f(63, 50, 75.1);
	glVertex3f(43, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(64, 100, 75.1);
	glVertex3f(84, 100, 75.1);
	glVertex3f(84, 50, 75.1);
	glVertex3f(64, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(85, 100, 75.1);
	glVertex3f(105, 100, 75.1);
	glVertex3f(105, 50, 75.1);
	glVertex3f(85, 50, 75.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(106, 100, 75.1);
	glVertex3f(126, 100, 75.1);
	glVertex3f(126, 50, 75.1);
	glVertex3f(106, 50, 75.1);
	glEnd();





	//kotak 1.1 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(130, 100, 75);
	glVertex3f(135, 100, 75);
	glVertex3f(135, 80, 75);
	glVertex3f(130, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(130, 65, 75);
	glVertex3f(135, 65, 75);
	glVertex3f(135, 50, 75);
	glVertex3f(130, 50, 75);
	glEnd();


	//kotak 1.1 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(130, 100, 75);
	glVertex3f(135, 100, 75);
	glVertex3f(135, 80, 75);
	glVertex3f(130, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(130, 65, 75);
	glVertex3f(135, 65, 75);
	glVertex3f(135, 50, 75);
	glVertex3f(130, 50, 75);
	glEnd();


	//bangun lantai 3
	//1(alas kiri)
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-130, 50.1, 0);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-50, 50.1, -50);
	glVertex3f(-50, 50.1, 0);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-130, 50.1, 0);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, 0);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 0);
	glEnd();


	//3
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-130, 50.1, 0);
	glVertex3f(-130, 110, 0);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 50.1, 0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, 0);
	glVertex3f(-130, 110, 0);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 50.1, 0);
	glEnd();

	//4
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 50.1, 0);
	glVertex3f(-50, 50.1, -50);
	glVertex3f(-50, 110, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 50.1, 0);
	glVertex3f(-50, 50.1, -50);
	glVertex3f(-50, 110, -50);
	glEnd();

	//5
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-50, 110, -50);
	glVertex3f(-50, 50.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-50, 110, -50);
	glVertex3f(-50, 50.1, -50);
	glEnd();


	//6
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 0);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 110, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 0);
	glVertex3f(-50, 110, 0);
	glVertex3f(-50, 110, -50);
	glEnd();

	//jendela bawah
	//1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 95, 0.1);
	glVertex3f(-125, 65, 0.1);
	glVertex3f(-115, 65, 0.1);
	glVertex3f(-115, 95, 0.1);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-105, 95, 0.1);
	glVertex3f(-105, 65, 0.1);
	glVertex3f(-95, 65, 0.1);
	glVertex3f(-95, 95, 0.1);
	glEnd();

	//3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-85, 95, 0.1);
	glVertex3f(-85, 65, 0.1);
	glVertex3f(-75, 65, 0.1);
	glVertex3f(-75, 95, 0.1);
	glEnd();

	//4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-65, 95, 0.1);
	glVertex3f(-65, 65, 0.1);
	glVertex3f(-55, 65, 0.1);
	glVertex3f(-55, 95, 0.1);
	glEnd();

	//bangun 1
	//7
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-56, 110.1, -5);
	glVertex3f(-56, 110.1, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-56, 110.1, -5);
	glVertex3f(-56, 110.1, -45);
	glEnd();

	//8
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-125, 300, -5);
	glVertex3f(-125, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-125, 300, -5);
	glVertex3f(-125, 300, -45);
	glEnd();

	//9
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-125, 300, -5);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 110.1, -5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -5);
	glVertex3f(-125, 300, -5);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 110.1, -5);
	glEnd();

	//10
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 110.1, -5);
	glVertex3f(-56, 110.1, -45);
	glVertex3f(-56, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 110.1, -5);
	glVertex3f(-56, 110.1, -45);
	glVertex3f(-56, 300, -45);
	glEnd();

	//11
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 300, -45);
	glVertex3f(-56, 300, -45);
	glVertex3f(-56, 110.1, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 300, -45);
	glVertex3f(-56, 300, -45);
	glVertex3f(-56, 110.1, -45);
	glEnd();


	//12
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(-125, 300, -45);
	glVertex3f(-125, 300, -5);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 300, -45);
	glVertex3f(-125, 300, -5);
	glVertex3f(-56, 300, -5);
	glVertex3f(-56, 300, -45);
	glEnd();
	//end bangun 1

	//jedela bangun 1
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 295, -4.9);
	glVertex3f(-117, 275, -4.9);
	glVertex3f(-107, 275, -4.9);
	glVertex3f(-107, 295, -4.9);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 295, -4.9);
	glVertex3f(-102, 275, -4.9);
	glVertex3f(-92, 275, -4.9);
	glVertex3f(-92, 295, -4.9);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 295, -4.9);
	glVertex3f(-87, 275, -4.9);
	glVertex3f(-77, 275, -4.9);
	glVertex3f(-77, 295, -4.9);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 295, -4.9);
	glVertex3f(-72, 275, -4.9);
	glVertex3f(-62, 275, -4.9);
	glVertex3f(-62, 295, -4.9);
	glEnd();


	//1.2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 265, -4.9);
	glVertex3f(-117, 245, -4.9);
	glVertex3f(-107, 245, -4.9);
	glVertex3f(-107, 265, -4.9);
	glEnd();

	//2.2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 265, -4.9);
	glVertex3f(-102, 245, -4.9);
	glVertex3f(-92, 245, -4.9);
	glVertex3f(-92, 265, -4.9);
	glEnd();


	//3.2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 265, -4.9);
	glVertex3f(-87, 245, -4.9);
	glVertex3f(-77, 245, -4.9);
	glVertex3f(-77, 265, -4.9);
	glEnd();

	//4.2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 265, -4.9);
	glVertex3f(-72, 245, -4.9);
	glVertex3f(-62, 245, -4.9);
	glVertex3f(-62, 265, -4.9);
	glEnd();


	//1.3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 235, -4.9);
	glVertex3f(-117, 215, -4.9);
	glVertex3f(-107, 215, -4.9);
	glVertex3f(-107, 235, -4.9);
	glEnd();

	//2.3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 235, -4.9);
	glVertex3f(-102, 215, -4.9);
	glVertex3f(-92, 215, -4.9);
	glVertex3f(-92, 235, -4.9);
	glEnd();


	//3.3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 235, -4.9);
	glVertex3f(-87, 215, -4.9);
	glVertex3f(-77, 215, -4.9);
	glVertex3f(-77, 235, -4.9);
	glEnd();

	//4.3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 235, -4.9);
	glVertex3f(-72, 215, -4.9);
	glVertex3f(-62, 215, -4.9);
	glVertex3f(-62, 235, -4.9);
	glEnd();

	//1.4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 205, -4.9);
	glVertex3f(-117, 185, -4.9);
	glVertex3f(-107, 185, -4.9);
	glVertex3f(-107, 205, -4.9);
	glEnd();

	//2.4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 205, -4.9);
	glVertex3f(-102, 185, -4.9);
	glVertex3f(-92, 185, -4.9);
	glVertex3f(-92, 205, -4.9);
	glEnd();


	//3.4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 205, -4.9);
	glVertex3f(-87, 185, -4.9);
	glVertex3f(-77, 185, -4.9);
	glVertex3f(-77, 205, -4.9);
	glEnd();

	//4.4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 205, -4.9);
	glVertex3f(-72, 185, -4.9);
	glVertex3f(-62, 185, -4.9);
	glVertex3f(-62, 205, -4.9);
	glEnd();


	//1.5
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 175, -4.9);
	glVertex3f(-117, 155, -4.9);
	glVertex3f(-107, 155, -4.9);
	glVertex3f(-107, 175, -4.9);
	glEnd();

	//2.5
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 175, -4.9);
	glVertex3f(-102, 155, -4.9);
	glVertex3f(-92, 155, -4.9);
	glVertex3f(-92, 175, -4.9);
	glEnd();


	//3.5
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 175, -4.9);
	glVertex3f(-87, 155, -4.9);
	glVertex3f(-77, 155, -4.9);
	glVertex3f(-77, 175, -4.9);
	glEnd();

	//4.5
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 175, -4.9);
	glVertex3f(-72, 155, -4.9);
	glVertex3f(-62, 155, -4.9);
	glVertex3f(-62, 175, -4.9);
	glEnd();


	//1.6
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-117, 145, -4.9);
	glVertex3f(-117, 125, -4.9);
	glVertex3f(-107, 125, -4.9);
	glVertex3f(-107, 145, -4.9);
	glEnd();

	//2.6
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-102, 145, -4.9);
	glVertex3f(-102, 125, -4.9);
	glVertex3f(-92, 125, -4.9);
	glVertex3f(-92, 145, -4.9);
	glEnd();


	//3.6
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-87, 145, -4.9);
	glVertex3f(-87, 125, -4.9);
	glVertex3f(-77, 125, -4.9);
	glVertex3f(-77, 145, -4.9);
	glEnd();

	//4.6
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-72, 145, -4.9);
	glVertex3f(-72, 125, -4.9);
	glVertex3f(-62, 125, -4.9);
	glVertex3f(-62, 145, -4.9);
	glEnd();



	//13 Gedung 3
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(156, 50.1, 74);
	glVertex3f(156, 90, 74);
	glVertex3f(156, 90, -50);
	glVertex3f(156, 50.1, -50);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(156, 50.1, 74);
	glVertex3f(156, 90, 74);
	glVertex3f(156, 90, -50);
	glVertex3f(156, 50.1, -50);
	glEnd();

	//gedung kecil gedung 3
	//depan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(170, 110, 70);
	glVertex3f(190, 110, 70);
	glVertex3f(190, 90, 70);
	glVertex3f(170, 90, 70);
	glEnd();
	//outer
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 110, 70);
	glVertex3f(190, 110, 70);
	glVertex3f(190, 90, 70);
	glVertex3f(170, 90, 70);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(170, 110, 50);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 90, 50);
	glVertex3f(170, 90, 50);
	glEnd();
	//outer
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 110, 50);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 90, 50);
	glVertex3f(170, 90, 50);
	glEnd();

	//samping kiri
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(170, 110, 50);
	glVertex3f(170, 110, 70);
	glVertex3f(170, 90, 70);
	glVertex3f(170, 90, 50);
	glEnd();
	//outer
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 110, 50);
	glVertex3f(170, 110, 70);
	glVertex3f(170, 90, 70);
	glVertex3f(170, 90, 50);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 110, 70);
	glVertex3f(190, 90, 70);
	glVertex3f(190, 90, 50);
	glEnd();
	//outer
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 110, 70);
	glVertex3f(190, 90, 70);
	glVertex3f(190, 90, 50);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(170, 110, 50);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 110, 70);
	glVertex3f(170, 110, 70);
	glEnd();
	//outer
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(170, 110, 50);
	glVertex3f(190, 110, 50);
	glVertex3f(190, 110, 70);
	glVertex3f(170, 110, 70);
	glEnd();

	//atap gedung kecil gedung 3
	//depan
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(165, 115, 74);
	glVertex3f(195, 115, 74);
	glVertex3f(195, 110, 74);
	glVertex3f(165, 110, 74);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(165, 115, 46);
	glVertex3f(195, 115, 46);
	glVertex3f(195, 110, 46);
	glVertex3f(165, 110, 46);
	glEnd();

	//bawah
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(165, 110, 46);
	glVertex3f(195, 110, 46);
	glVertex3f(195, 110, 74);
	glVertex3f(165, 110, 74);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(195, 115, 46);
	glVertex3f(195, 115, 74);
	glVertex3f(195, 110, 74);
	glVertex3f(195, 110, 46);
	glEnd();

	//samping kiri
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(165, 115, 46);
	glVertex3f(165, 115, 74);
	glVertex3f(165, 110, 74);
	glVertex3f(165, 110, 46);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(165, 115, 46);
	glVertex3f(195, 115, 46);
	glVertex3f(195, 115, 74);
	glVertex3f(165, 115, 74);
	glEnd();

	//14
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(156, 50.1, 74);
	glVertex3f(293, 50.1, 74);
	glVertex3f(293, 90, 74);
	glVertex3f(156, 90, 74);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(156, 50.1, 74);
	glVertex3f(293, 50.1, 74);
	glVertex3f(293, 90, 74);
	glVertex3f(156, 90, 74);
	glEnd();


	//15
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(293, 50.1, 74);
	glVertex3f(293, 90, 74);
	glVertex3f(293, 90, -50);
	glVertex3f(293, 50.1, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(293, 50.1, 74);
	glVertex3f(293, 90, 74);
	glVertex3f(293, 90, -50);
	glVertex3f(293, 50.1, -50);
	glEnd();


	//16
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(293, 90, 74);
	glVertex3f(293, 90, -50);
	glVertex3f(156, 90, -50);
	glVertex3f(156, 90, 74);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(293, 90, 74);
	glVertex3f(293, 90, -50);
	glVertex3f(156, 90, -50);
	glVertex3f(156, 90, 74);
	glEnd();


	//17
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(156, 50.1, -50);
	glVertex3f(293, 50.1, -50);
	glVertex3f(293, 90, -50);
	glVertex3f(156, 90, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(156, 50.1, -50);
	glVertex3f(293, 50.1, -50);
	glVertex3f(293, 90, -50);
	glVertex3f(156, 90, -50);
	glEnd();

	//18 Gedung 4
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(306, 50.1, 74);
	glVertex3f(306, 90, 74);
	glVertex3f(306, 90, -50);
	glVertex3f(306, 50.1, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(306, 50.1, 74);
	glVertex3f(306, 90, 74);
	glVertex3f(306, 90, -50);
	glVertex3f(306, 50.1, -50);
	glEnd();



	//19
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(306, 50.1, 74);
	glVertex3f(414, 50.1, 74);
	glVertex3f(414, 90, 74);
	glVertex3f(306, 90, 74);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(306, 50.1, 74);
	glVertex3f(414, 50.1, 74);
	glVertex3f(414, 90, 74);
	glVertex3f(306, 90, 74);
	glEnd();

	//20
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(414, 50.1, 74);
	glVertex3f(414, 90, 74);
	glVertex3f(414, 90, -50);
	glVertex3f(414, 50.1, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(414, 50.1, 74);
	glVertex3f(414, 90, 74);
	glVertex3f(414, 90, -50);
	glVertex3f(414, 50.1, -50);
	glEnd();


	//21
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(414, 90, 74);
	glVertex3f(414, 90, -50);
	glVertex3f(306, 90, -50);
	glVertex3f(306, 90, 74);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(414, 90, 74);
	glVertex3f(414, 90, -50);
	glVertex3f(306, 90, -50);
	glVertex3f(306, 90, 74);
	glEnd();

	//22
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(306, 50.1, -50);
	glVertex3f(414, 50.1, -50);
	glVertex3f(414, 90, -50);
	glVertex3f(306, 90, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(306, 50.1, -50);
	glVertex3f(414, 50.1, -50);
	glVertex3f(414, 90, -50);
	glVertex3f(306, 90, -50);
	glEnd();

	//gedung 3
	//23 alas 
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(292, 90.1, 20);
	glVertex3f(292, 90.1, -50);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 90.1, 20);
	glEnd();

	//24
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 90.1, 20);
	glVertex3f(200, 300, 20);
	glVertex3f(200, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 90.1, 20);
	glVertex3f(200, 300, 20);
	glVertex3f(200, 300, -50);
	glEnd();



	//25
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(200, 90.1, 20);
	glVertex3f(200, 300, 20);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 90.1, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(200, 90.1, 20);
	glVertex3f(200, 300, 20);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 90.1, 20);
	glEnd();



	//26
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 90.1, 20);
	glVertex3f(292, 90.1, -50);
	glVertex3f(292, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 90.1, 20);
	glVertex3f(292, 90.1, -50);
	glVertex3f(292, 300, -50);
	glEnd();

	//27
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 300, -50);
	glVertex3f(292, 300, -50);
	glVertex3f(292, 90.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 300, -50);
	glVertex3f(292, 300, -50);
	glVertex3f(292, 90.1, -50);
	glEnd();


	//28
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 300, -50);
	glVertex3f(200, 300, -50);
	glVertex3f(200, 300, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(292, 300, 20);
	glVertex3f(292, 300, -50);
	glVertex3f(200, 300, -50);
	glVertex3f(200, 300, 20);
	glEnd();


	//gedung 4
	//29 alas 
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(412, 90.1, 20);
	glVertex3f(412, 90.1, -50);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 90.1, 20);
	glEnd();

	//30 Gedung 4
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 90.1, 20);
	glVertex3f(348, 300, 20);
	glVertex3f(348, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 90.1, 20);
	glVertex3f(348, 300, 20);
	glVertex3f(348, 300, -50);
	glEnd();



	//31
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(348, 90.1, 20);
	glVertex3f(348, 300, 20);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 90.1, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(348, 90.1, 20);
	glVertex3f(348, 300, 20);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 90.1, 20);
	glEnd();



	//32
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 90.1, 20);
	glVertex3f(412, 90.1, -50);
	glVertex3f(412, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 90.1, 20);
	glVertex3f(412, 90.1, -50);
	glVertex3f(412, 300, -50);
	glEnd();

	//33
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 300, -50);
	glVertex3f(412, 300, -50);
	glVertex3f(412, 90.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 300, -50);
	glVertex3f(412, 300, -50);
	glVertex3f(412, 90.1, -50);
	glEnd();


	//34
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 300, -50);
	glVertex3f(348, 300, -50);
	glVertex3f(348, 300, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(412, 300, 20);
	glVertex3f(412, 300, -50);
	glVertex3f(348, 300, -50);
	glVertex3f(348, 300, 20);
	glEnd();


	//gedung kecil 4 
	//depan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(314, 110, 70);
	glVertex3f(334, 110, 70);
	glVertex3f(334, 90, 70);
	glVertex3f(314, 90, 70);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(314, 110, 70);
	glVertex3f(334, 110, 70);
	glVertex3f(334, 90, 70);
	glVertex3f(314, 90, 70);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(314, 110, 50);
	glVertex3f(334, 110, 50);
	glVertex3f(334, 90, 50);
	glVertex3f(314, 90, 50);
	glEnd();
	//outline 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(314, 110, 50);
	glVertex3f(334, 110, 50);
	glVertex3f(334, 90, 50);
	glVertex3f(314, 90, 50);
	glEnd();


	//samping kiri
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(314, 110, 50);
	glVertex3f(314, 110, 70);
	glVertex3f(314, 90, 70);
	glVertex3f(314, 90, 50);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(314, 110, 50);
	glVertex3f(314, 110, 70);
	glVertex3f(314, 90, 70);
	glVertex3f(314, 90, 50);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(334, 110, 50);
	glVertex3f(334, 110, 70);
	glVertex3f(334, 90, 70);
	glVertex3f(334, 90, 50);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(334, 110, 50);
	glVertex3f(334, 110, 70);
	glVertex3f(334, 90, 70);
	glVertex3f(334, 90, 50);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(314, 110, 50);
	glVertex3f(334, 110, 50);
	glVertex3f(334, 90, 50);
	glVertex3f(314, 90, 50);
	glEnd();

	//atap gedung 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(309, 115, 74);
	glVertex3f(339, 115, 74);
	glVertex3f(339, 110, 74);
	glVertex3f(309, 110, 74);
	glEnd();

	//belakang 
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(309, 115, 46);
	glVertex3f(339, 115, 46);
	glVertex3f(339, 110, 46);
	glVertex3f(309, 110, 46);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(309, 110, 46);
	glVertex3f(339, 110, 46);
	glVertex3f(339, 110, 74);
	glVertex3f(309, 110, 74);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(339, 115, 46);
	glVertex3f(339, 115, 74);
	glVertex3f(339, 110, 74);
	glVertex3f(339, 110, 46);
	glEnd();

	//samping kiri
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(309, 115, 46);
	glVertex3f(309, 115, 74);
	glVertex3f(309, 110, 74);
	glVertex3f(309, 110, 46);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(309, 115, 46);
	glVertex3f(339, 115, 46);
	glVertex3f(339, 110, 74);
	glVertex3f(309, 115, 74);
	glEnd();



	//35 Gedung 2
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-26, 50.1, 74);
	glVertex3f(-26, 90, 74);
	glVertex3f(-26, 90, -50);
	glVertex3f(-26, 50.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-26, 50.1, 74);
	glVertex3f(-26, 90, 74);
	glVertex3f(-26, 90, -50);
	glVertex3f(-26, 50.1, -50);
	glEnd();

	//gedung kecil 2 
	//depan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-10, 110, 70);
	glVertex3f(10, 110, 70);
	glVertex3f(10, 90, 70);
	glVertex3f(-10, 90, 70);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-10, 110, 70);
	glVertex3f(10, 110, 70);
	glVertex3f(10, 90, 70);
	glVertex3f(-10, 90, 70);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-10, 110, 50);
	glVertex3f(10, 110, 50);
	glVertex3f(10, 90, 50);
	glVertex3f(-10, 90, 50);
	glEnd();
	//outline 
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-10, 110, 50);
	glVertex3f(10, 110, 50);
	glVertex3f(10, 90, 50);
	glVertex3f(-10, 90, 50);
	glEnd();


	//samping kiri
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-10, 110, 50);
	glVertex3f(-10, 110, 70);
	glVertex3f(-10, 90, 70);
	glVertex3f(-10, 90, 50);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-10, 110, 50);
	glVertex3f(-10, 110, 70);
	glVertex3f(-10, 90, 70);
	glVertex3f(-10, 90, 50);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(10, 110, 50);
	glVertex3f(10, 110, 70);
	glVertex3f(10, 90, 70);
	glVertex3f(10, 90, 50);
	glEnd();
	//outline
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(10, 110, 50);
	glVertex3f(10, 110, 70);
	glVertex3f(10, 90, 70);
	glVertex3f(10, 90, 50);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-10, 110, 50);
	glVertex3f(10, 110, 50);
	glVertex3f(10, 90, 50);
	glVertex3f(-10, 90, 50);
	glEnd();

	//atap gedung 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-15, 115, 74);
	glVertex3f(15, 115, 74);
	glVertex3f(15, 110, 74);
	glVertex3f(-15, 110, 74);
	glEnd();

	//belakang 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-15, 115, 46);
	glVertex3f(15, 115, 46);
	glVertex3f(15, 110, 46);
	glVertex3f(-15, 110, 46);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-15, 110, 46);
	glVertex3f(15, 110, 46);
	glVertex3f(15, 110, 74);
	glVertex3f(-15, 110, 74);
	glColor3f(0.5, 0.0, 0.0);
	glEnd();

	//samping kanan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(15, 115, 46);
	glVertex3f(15, 115, 74);
	glVertex3f(15, 110, 74);
	glVertex3f(15, 110, 46);
	glEnd();

	//samping kiri
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-15, 115, 46);
	glVertex3f(-15, 115, 74);
	glVertex3f(-15, 110, 74);
	glVertex3f(-15, 110, 46);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-15, 115, 46);
	glVertex3f(15, 115, 46);
	glVertex3f(15, 110, 74);
	glVertex3f(-15, 115, 74);
	glEnd();
	//36
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-26, 50.1, 74);
	glVertex3f(134, 50.1, 74);
	glVertex3f(134, 90, 74);
	glVertex3f(-26, 90, 74);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-26, 50.1, 74);
	glVertex3f(134, 50.1, 74);
	glVertex3f(134, 90, 74);
	glVertex3f(-26, 90, 74);
	glEnd();


	//37
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(134, 50.1, 74);
	glVertex3f(134, 90, 74);
	glVertex3f(134, 90, -50);
	glVertex3f(134, 50.1, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(134, 50.1, 74);
	glVertex3f(134, 90, 74);
	glVertex3f(134, 90, -50);
	glVertex3f(134, 50.1, -50);
	glEnd();


	//38
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(134, 90, 74);
	glVertex3f(134, 90, -50);
	glVertex3f(-26, 90, -50);
	glVertex3f(-26, 90, 74);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(134, 90, 74);
	glVertex3f(134, 90, -50);
	glVertex3f(-26, 90, -50);
	glVertex3f(-26, 90, 74);
	glEnd();


	//39
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(-26, 50.1, -50);
	glVertex3f(134, 50.1, -50);
	glVertex3f(134, 90, -50);
	glVertex3f(-26, 90, -50);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-26, 50.1, -50);
	glVertex3f(134, 50.1, -50);
	glVertex3f(134, 90, -50);
	glVertex3f(-26, 90, -50);
	glEnd();



	//gedung 2
	//40 alas 
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(134, 90.1, 20);
	glVertex3f(134, 90.1, -50);
	glVertex3f(16, 90.1, -50);
	glVertex3f(16, 90.1, 20);
	glEnd();

	//41 Gedung 2
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(16, 90.1, -50);
	glVertex3f(16, 90.1, 20);
	glVertex3f(16, 300, 20);
	glVertex3f(16, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(16, 90.1, -50);
	glVertex3f(16, 90.1, 20);
	glVertex3f(16, 300, 20);
	glVertex3f(16, 300, -50);
	glEnd();



	//31
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(16, 90.1, 20);
	glVertex3f(16, 300, 20);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 90.1, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(16, 90.1, 20);
	glVertex3f(16, 300, 20);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 90.1, 20);
	glEnd();



	//32
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 90.1, 20);
	glVertex3f(134, 90.1, -50);
	glVertex3f(134, 300, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 90.1, 20);
	glVertex3f(134, 90.1, -50);
	glVertex3f(134, 300, -50);
	glEnd();

	//33
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
	glVertex3f(16, 90.1, -50);
	glVertex3f(16, 300, -50);
	glVertex3f(134, 300, -50);
	glVertex3f(134, 90.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(16, 90.1, -50);
	glVertex3f(16, 300, -50);
	glVertex3f(134, 300, -50);
	glVertex3f(134, 90.1, -50);
	glEnd();


	//34
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.8f, 0.5f);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 300, -50);
	glVertex3f(16, 300, -50);
	glVertex3f(16, 300, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(134, 300, 20);
	glVertex3f(134, 300, -50);
	glVertex3f(16, 300, -50);
	glVertex3f(16, 300, 20);
	glEnd();


	//tangga bangun 2
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.8f, 0.8f, 0.8f);
	glVertex3f(-27, 90, 7);
	glVertex3f(-27, 90, 39);
	glVertex3f(-50, 50, 39);
	glVertex3f(-50, 50, 7);
	glEnd();

	//samping tangga kanan miring
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 90, 39);
	glVertex3f(-27, 100, 39);
	glVertex3f(-50, 60, 39);
	glVertex3f(-50, 50, 39);
	glEnd();

	//samping tangga kanan bawah
	glBegin(GL_POLYGON);
	glVertex3f(-50, 60, 39);
	glVertex3f(-50, 50, 39);
	glVertex3f(-58, 50, 39);
	glVertex3f(-58, 60, 39);
	glEnd();

	//samping tangga kanan atas
	glBegin(GL_POLYGON);
	glVertex3f(-27, 100, 39);
	glVertex3f(-27, 90, 39);
	glVertex3f(-19, 90, 39);
	glVertex3f(-19, 100, 39);
	glEnd();

	//samping tangga kiri miring
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-27, 90, 7);
	glVertex3f(-27, 100, 7);
	glVertex3f(-50, 60, 7);
	glVertex3f(-50, 50, 7);
	glEnd();

	//samping tangga kiri bawah
	glBegin(GL_POLYGON);
	glVertex3f(-50, 60, 7);
	glVertex3f(-50, 50, 7);
	glVertex3f(-58, 50, 7);
	glVertex3f(-58, 60, 7);
	glEnd();

	//samping tangga kiri atas
	glBegin(GL_POLYGON);
	glVertex3f(-27, 100, 7);
	glVertex3f(-27, 90, 7);
	glVertex3f(-19, 90, 7);
	glVertex3f(-19, 100, 7);
	glEnd();



	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 295, 20.1);
	glVertex3f(40, 275, 20.1);
	glVertex3f(25, 275, 20.1);
	glVertex3f(25, 295, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 295, 20.1);
	glVertex3f(45, 275, 20.1);
	glVertex3f(60, 275, 20.1);
	glVertex3f(60, 295, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 295, 20.1);
	glVertex3f(65, 275, 20.1);
	glVertex3f(80, 275, 20.1);
	glVertex3f(80, 295, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 295, 20.1);
	glVertex3f(85, 275, 20.1);
	glVertex3f(100, 275, 20.1);
	glVertex3f(100, 295, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 295, 20.1);
	glVertex3f(105, 275, 20.1);
	glVertex3f(120, 275, 20.1);
	glVertex3f(120, 295, 20.1);
	glEnd();

	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 265, 20.1);
	glVertex3f(40, 245, 20.1);
	glVertex3f(25, 245, 20.1);
	glVertex3f(25, 265, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 265, 20.1);
	glVertex3f(45, 245, 20.1);
	glVertex3f(60, 245, 20.1);
	glVertex3f(60, 265, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 265, 20.1);
	glVertex3f(65, 245, 20.1);
	glVertex3f(80, 245, 20.1);
	glVertex3f(80, 265, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 265, 20.1);
	glVertex3f(85, 245, 20.1);
	glVertex3f(100, 245, 20.1);
	glVertex3f(100, 265, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 265, 20.1);
	glVertex3f(105, 245, 20.1);
	glVertex3f(120, 245, 20.1);
	glVertex3f(120, 265, 20.1);
	glEnd();


	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 235, 20.1);
	glVertex3f(40, 215, 20.1);
	glVertex3f(25, 215, 20.1);
	glVertex3f(25, 235, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 235, 20.1);
	glVertex3f(45, 215, 20.1);
	glVertex3f(60, 215, 20.1);
	glVertex3f(60, 235, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 235, 20.1);
	glVertex3f(65, 215, 20.1);
	glVertex3f(80, 215, 20.1);
	glVertex3f(80, 235, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 235, 20.1);
	glVertex3f(85, 215, 20.1);
	glVertex3f(100, 215, 20.1);
	glVertex3f(100, 235, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 235, 20.1);
	glVertex3f(105, 215, 20.1);
	glVertex3f(120, 215, 20.1);
	glVertex3f(120, 235, 20.1);
	glEnd();

	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 205, 20.1);
	glVertex3f(40, 185, 20.1);
	glVertex3f(25, 185, 20.1);
	glVertex3f(25, 205, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 205, 20.1);
	glVertex3f(45, 185, 20.1);
	glVertex3f(60, 185, 20.1);
	glVertex3f(60, 205, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 205, 20.1);
	glVertex3f(65, 185, 20.1);
	glVertex3f(80, 185, 20.1);
	glVertex3f(80, 205, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 205, 20.1);
	glVertex3f(85, 185, 20.1);
	glVertex3f(100, 185, 20.1);
	glVertex3f(100, 205, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 205, 20.1);
	glVertex3f(105, 185, 20.1);
	glVertex3f(120, 185, 20.1);
	glVertex3f(120, 205, 20.1);
	glEnd();

	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 175, 20.1);
	glVertex3f(40, 155, 20.1);
	glVertex3f(25, 155, 20.1);
	glVertex3f(25, 175, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 175, 20.1);
	glVertex3f(45, 155, 20.1);
	glVertex3f(60, 155, 20.1);
	glVertex3f(60, 175, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 175, 20.1);
	glVertex3f(65, 155, 20.1);
	glVertex3f(80, 155, 20.1);
	glVertex3f(80, 175, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 175, 20.1);
	glVertex3f(85, 155, 20.1);
	glVertex3f(100, 155, 20.1);
	glVertex3f(100, 175, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 175, 20.1);
	glVertex3f(105, 155, 20.1);
	glVertex3f(120, 155, 20.1);
	glVertex3f(120, 175, 20.1);
	glEnd();


	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 145, 20.1);
	glVertex3f(40, 125, 20.1);
	glVertex3f(25, 125, 20.1);
	glVertex3f(25, 145, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 145, 20.1);
	glVertex3f(45, 125, 20.1);
	glVertex3f(60, 125, 20.1);
	glVertex3f(60, 145, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 145, 20.1);
	glVertex3f(65, 125, 20.1);
	glVertex3f(80, 125, 20.1);
	glVertex3f(80, 145, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 145, 20.1);
	glVertex3f(85, 125, 20.1);
	glVertex3f(100, 125, 20.1);
	glVertex3f(100, 145, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 145, 20.1);
	glVertex3f(105, 125, 20.1);
	glVertex3f(120, 125, 20.1);
	glVertex3f(120, 145, 20.1);
	glEnd();


	//jedela bangun 2
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(40, 115, 20.1);
	glVertex3f(40, 95, 20.1);
	glVertex3f(25, 95, 20.1);
	glVertex3f(25, 115, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(45, 115, 20.1);
	glVertex3f(45, 95, 20.1);
	glVertex3f(60, 95, 20.1);
	glVertex3f(60, 115, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(65, 115, 20.1);
	glVertex3f(65, 95, 20.1);
	glVertex3f(80, 95, 20.1);
	glVertex3f(80, 115, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(85, 115, 20.1);
	glVertex3f(85, 95, 20.1);
	glVertex3f(100, 95, 20.1);
	glVertex3f(100, 115, 20.1);
	glEnd();

	//5.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(105, 115, 20.1);
	glVertex3f(105, 95, 20.1);
	glVertex3f(120, 95, 20.1);
	glVertex3f(120, 115, 20.1);
	glEnd();


	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 295, 20.1);
	glVertex3f(222, 275, 20.1);
	glVertex3f(207, 275, 20.1);
	glVertex3f(207, 295, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 295, 20.1);
	glVertex3f(227, 275, 20.1);
	glVertex3f(242, 275, 20.1);
	glVertex3f(242, 295, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 295, 20.1);
	glVertex3f(247, 275, 20.1);
	glVertex3f(262, 275, 20.1);
	glVertex3f(262, 295, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 295, 20.1);
	glVertex3f(267, 275, 20.1);
	glVertex3f(282, 275, 20.1);
	glVertex3f(282, 295, 20.1);
	glEnd();

	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 265, 20.1);
	glVertex3f(222, 245, 20.1);
	glVertex3f(207, 245, 20.1);
	glVertex3f(207, 265, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 265, 20.1);
	glVertex3f(227, 245, 20.1);
	glVertex3f(242, 245, 20.1);
	glVertex3f(242, 265, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 265, 20.1);
	glVertex3f(247, 245, 20.1);
	glVertex3f(262, 245, 20.1);
	glVertex3f(262, 265, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 265, 20.1);
	glVertex3f(267, 245, 20.1);
	glVertex3f(282, 245, 20.1);
	glVertex3f(282, 265, 20.1);
	glEnd();


	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 235, 20.1);
	glVertex3f(222, 215, 20.1);
	glVertex3f(207, 215, 20.1);
	glVertex3f(207, 235, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 235, 20.1);
	glVertex3f(227, 215, 20.1);
	glVertex3f(242, 215, 20.1);
	glVertex3f(242, 235, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 235, 20.1);
	glVertex3f(247, 215, 20.1);
	glVertex3f(262, 215, 20.1);
	glVertex3f(262, 235, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 235, 20.1);
	glVertex3f(267, 215, 20.1);
	glVertex3f(282, 215, 20.1);
	glVertex3f(282, 235, 20.1);
	glEnd();

	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 205, 20.1);
	glVertex3f(222, 185, 20.1);
	glVertex3f(207, 185, 20.1);
	glVertex3f(207, 205, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 205, 20.1);
	glVertex3f(227, 185, 20.1);
	glVertex3f(242, 185, 20.1);
	glVertex3f(242, 205, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 205, 20.1);
	glVertex3f(247, 185, 20.1);
	glVertex3f(262, 185, 20.1);
	glVertex3f(262, 205, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 205, 20.1);
	glVertex3f(267, 185, 20.1);
	glVertex3f(282, 185, 20.1);
	glVertex3f(282, 205, 20.1);
	glEnd();

	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 175, 20.1);
	glVertex3f(222, 155, 20.1);
	glVertex3f(207, 155, 20.1);
	glVertex3f(207, 175, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 175, 20.1);
	glVertex3f(227, 155, 20.1);
	glVertex3f(242, 155, 20.1);
	glVertex3f(242, 175, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 175, 20.1);
	glVertex3f(247, 155, 20.1);
	glVertex3f(262, 155, 20.1);
	glVertex3f(262, 175, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 175, 20.1);
	glVertex3f(267, 155, 20.1);
	glVertex3f(282, 155, 20.1);
	glVertex3f(282, 175, 20.1);
	glEnd();

	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 145, 20.1);
	glVertex3f(222, 125, 20.1);
	glVertex3f(207, 125, 20.1);
	glVertex3f(207, 145, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 145, 20.1);
	glVertex3f(227, 125, 20.1);
	glVertex3f(242, 125, 20.1);
	glVertex3f(242, 145, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 145, 20.1);
	glVertex3f(247, 125, 20.1);
	glVertex3f(262, 125, 20.1);
	glVertex3f(262, 145, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 145, 20.1);
	glVertex3f(267, 125, 20.1);
	glVertex3f(282, 125, 20.1);
	glVertex3f(282, 145, 20.1);
	glEnd();

	//jendela bangun 3
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(222, 115, 20.1);
	glVertex3f(222, 95, 20.1);
	glVertex3f(207, 95, 20.1);
	glVertex3f(207, 115, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(227, 115, 20.1);
	glVertex3f(227, 95, 20.1);
	glVertex3f(242, 95, 20.1);
	glVertex3f(242, 115, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(247, 115, 20.1);
	glVertex3f(247, 95, 20.1);
	glVertex3f(262, 95, 20.1);
	glVertex3f(262, 115, 20.1);
	glEnd();

	//4.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(267, 115, 20.1);
	glVertex3f(267, 95, 20.1);
	glVertex3f(282, 95, 20.1);
	glVertex3f(282, 115, 20.1);
	glEnd();


	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 295, 20.1);
	glVertex3f(367, 275, 20.1);
	glVertex3f(352, 275, 20.1);
	glVertex3f(352, 295, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 295, 20.1);
	glVertex3f(372, 275, 20.1);
	glVertex3f(387, 275, 20.1);
	glVertex3f(387, 295, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 295, 20.1);
	glVertex3f(392, 275, 20.1);
	glVertex3f(407, 275, 20.1);
	glVertex3f(407, 295, 20.1);
	glEnd();


	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 265, 20.1);
	glVertex3f(367, 245, 20.1);
	glVertex3f(352, 245, 20.1);
	glVertex3f(352, 265, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 265, 20.1);
	glVertex3f(372, 245, 20.1);
	glVertex3f(387, 245, 20.1);
	glVertex3f(387, 265, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 265, 20.1);
	glVertex3f(392, 245, 20.1);
	glVertex3f(407, 245, 20.1);
	glVertex3f(407, 265, 20.1);
	glEnd();

	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 235, 20.1);
	glVertex3f(367, 215, 20.1);
	glVertex3f(352, 215, 20.1);
	glVertex3f(352, 235, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 235, 20.1);
	glVertex3f(372, 215, 20.1);
	glVertex3f(387, 215, 20.1);
	glVertex3f(387, 235, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 235, 20.1);
	glVertex3f(392, 215, 20.1);
	glVertex3f(407, 215, 20.1);
	glVertex3f(407, 235, 20.1);
	glEnd();



	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 205, 20.1);
	glVertex3f(367, 185, 20.1);
	glVertex3f(352, 185, 20.1);
	glVertex3f(352, 205, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 205, 20.1);
	glVertex3f(372, 185, 20.1);
	glVertex3f(387, 185, 20.1);
	glVertex3f(387, 205, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 205, 20.1);
	glVertex3f(392, 185, 20.1);
	glVertex3f(407, 185, 20.1);
	glVertex3f(407, 205, 20.1);
	glEnd();


	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 175, 20.1);
	glVertex3f(367, 155, 20.1);
	glVertex3f(352, 155, 20.1);
	glVertex3f(352, 175, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 175, 20.1);
	glVertex3f(372, 155, 20.1);
	glVertex3f(387, 155, 20.1);
	glVertex3f(387, 175, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 175, 20.1);
	glVertex3f(392, 155, 20.1);
	glVertex3f(407, 155, 20.1);
	glVertex3f(407, 175, 20.1);
	glEnd();

	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 145, 20.1);
	glVertex3f(367, 125, 20.1);
	glVertex3f(352, 125, 20.1);
	glVertex3f(352, 145, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 145, 20.1);
	glVertex3f(372, 125, 20.1);
	glVertex3f(387, 125, 20.1);
	glVertex3f(387, 145, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 145, 20.1);
	glVertex3f(392, 125, 20.1);
	glVertex3f(407, 125, 20.1);
	glVertex3f(407, 145, 20.1);
	glEnd();

	//jendela bangun 4
	//1.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(367, 115, 20.1);
	glVertex3f(367, 95, 20.1);
	glVertex3f(352, 95, 20.1);
	glVertex3f(352, 115, 20.1);
	glEnd();

	//2.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(372, 115, 20.1);
	glVertex3f(372, 95, 20.1);
	glVertex3f(387, 95, 20.1);
	glVertex3f(387, 115, 20.1);
	glEnd();


	//3.1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(392, 115, 20.1);
	glVertex3f(392, 95, 20.1);
	glVertex3f(407, 95, 20.1);
	glVertex3f(407, 115, 20.1);
	glEnd();


	glPopMatrix();
	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case'w':
	case'W':
		glTranslatef(0.0, 0.0, 3.0);
		break;
	case 'a':
	case 'A':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -3.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(-3.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case '2':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case '8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case'6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case '4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case '5':
		if (is_depth) {
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else {
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	tampil();
}


void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80, lebar / tinggi, 10.0, 1000.0);
	glTranslatef(-300.0, -100.0, -250.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("TR");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouseButton);
	glutMotionFunc(mouseMove);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}
