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
	glClearColor(255.0, 255.0, 255.0, 255.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);
	is_depth = 1;
	glPointSize(9.0);
	glLineWidth(5.0f);
}
void kotak(int a, int b, int d, int e, int c, int f) {
	for (int i = 0; i < c; i++) {
		glBegin(GL_QUADS);
		glColor3f(0.3f, 0.0f, 0.0f);
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
	glVertex3f(-200, 0, 140);
	glVertex3f(600, 0, 140);
	glVertex3f(600, 0, -200);
	glVertex3f(-200, 0, -200);
	glEnd();

	//1 L1
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
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

	//2 L1
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 1);
	glVertex3f(425, 30, 85);
	glVertex3f(425, 30, -50);
	glVertex3f(310, 30, -50);
	glVertex3f(310, 30, 85);
	glEnd();


	//alas L2 2
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
	glVertex3f(330, 30, 110);
	glVertex3f(330, 30, -50);
	glVertex3f(160, 30, -50);
	glVertex3f(160, 30, 110);
	glEnd();

	//alas L2 3-1
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
	glVertex3f(170, 30, -50);
	glVertex3f(170, 30, 85);
	glVertex3f(0, 30, 85);
	glVertex3f(0, 30, -50);
	glEnd();

	//alas L2 3-2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
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
	glColor3f(1, 0, 0);
	glVertex3f(-140, 30, 60);
	glVertex3f(-140, 30, -50);
	glVertex3f(0, 30, -50);
	glVertex3f(0, 30, 60);
	glEnd();

	//alas L2 4-2
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
	glVertex3f(-120, 30, 60);
	glVertex3f(-120, 30, 110);
	glVertex3f(-15, 30, 110);
	glVertex3f(-15, 30, 60);
	glEnd();

	////////////////// Lantai 2 //////////////////
	//samping
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 30, -48);
	glVertex3f(-129, 50, -48);
	glVertex3f(-129, 50, 48);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-129, 30, 48);
	glVertex3f(-129, 50, 48);
	glVertex3f(-100, 50, 48);
	glVertex3f(-100, 30, 48);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-100, 30, 48);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-100, 50, 48);
	glEnd();
	//4
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-100, 30, 75);
	glVertex3f(-100, 50, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 30, 75);
	glEnd();
	//5
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-95, 30, 75);
	glVertex3f(-95, 50, 75);
	glVertex3f(-95, 50, 90);
	glVertex3f(-95, 30, 90);
	glEnd();
	//6
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-95, 30, 90);
	glVertex3f(-95, 50, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 30, 90);
	glEnd();

	//6.0
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-90, 30, 90);
	glVertex3f(-90, 50, 90);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-90, 30, 92.5);
	glEnd();

	//6.1
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-90, 30, 92.5);
	glVertex3f(-90, 50, 92.5);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-82.5, 50, 92.5);
	glVertex3f(-82.5, 30, 92.5);
	glEnd();

	//6.2.1
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-82.5, 30, 90);
	glVertex3f(-82.5, 50, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 30, 90);
	glEnd();

	//6.3
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-77, 30, 90);
	glVertex3f(-77, 50, 90);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-77, 30, 92.5);
	glEnd();

	//6.4
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-77, 30, 92.5);
	glVertex3f(-77, 50, 92.5);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-69.5, 50, 92.5);
	glVertex3f(-69.5, 30, 92.5);
	glEnd();

	//6.5.1
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-69.5, 30, 90);
	glVertex3f(-69.5, 50, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 30, 90);
	glEnd();


	//6.6
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-64, 30, 90);
	glVertex3f(-64, 50, 90);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-64, 30, 92.5);
	glEnd();

	//6.7
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-64, 30, 92.5);
	glVertex3f(-64, 50, 92.5);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-56.5, 50, 92.5);
	glVertex3f(-56.5, 30, 92.5);
	glEnd();

	//6.8.1
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-56.5, 30, 90);
	glVertex3f(-56.5, 50, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 30, 90);
	glEnd();

	//6.9
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-51, 30, 90);
	glVertex3f(-51, 50, 90);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-51, 30, 92.5);
	glEnd();

	//6.9.1
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-51, 30, 92.5);
	glVertex3f(-51, 50, 92.5);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-43.5, 50, 92.5);
	glVertex3f(-43.5, 30, 92.5);
	glEnd();

	//6.9.3
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-43.5, 30, 90);
	glVertex3f(-43.5, 50, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 30, 90);
	glEnd();

	//7
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-38, 30, 90);
	glVertex3f(-38, 50, 90);
	glVertex3f(-38, 50, 65);
	glVertex3f(-38, 30, 65);
	glEnd();
	//8
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(-38, 30, 65);
	glVertex3f(-38, 50, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 30, 65);
	glEnd();

	//8.1
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(-25, 30, 65.1);
	glVertex3f(-25, 50, 65.1);
	glVertex3f(0, 50, 65.1);
	glVertex3f(0, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(5, 30, 65.1);
	glVertex3f(5, 50, 65.1);
	glVertex3f(30, 50, 65.1);
	glVertex3f(30, 30, 65.1);
	glEnd();

	//8.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(35, 30, 65.1);
	glVertex3f(35, 50, 65.1);
	glVertex3f(60, 50, 65.1);
	glVertex3f(60, 30, 65.1);
	glEnd();


	//8.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(65, 30, 65.1);
	glVertex3f(65, 50, 65.1);
	glVertex3f(90, 50, 65.1);
	glVertex3f(90, 30, 65.1);
	glEnd();


	//8.3
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(95, 30, 65.1);
	glVertex3f(95, 50, 65.1);
	glVertex3f(120, 50, 65.1);
	glVertex3f(120, 30, 65.1);
	glEnd();

	//9
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(130, 30, 65);
	glVertex3f(130, 50, 65);
	glVertex3f(130, 50, -50);
	glVertex3f(130, 30, -50);
	glEnd();

	//10
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(160, 50, -50);
	glVertex3f(160, 30, -50);
	glEnd();

	//11
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(160, 30, 65);
	glVertex3f(160, 50, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 30, 65);
	glEnd();

	//11.1
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(169, 30, 65.1);
	glVertex3f(169, 50, 65.1);
	glVertex3f(189, 50, 65.1);
	glVertex3f(189, 30, 65.1);
	glEnd();

	//11.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(197, 30, 65.1);
	glVertex3f(197, 50, 65.1);
	glVertex3f(217, 50, 65.1);
	glVertex3f(217, 30, 65.1);
	glEnd();

	//11.3
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(225, 30, 65.1);
	glVertex3f(225, 50, 65.1);
	glVertex3f(245, 50, 65.1);
	glVertex3f(245, 30, 65.1);
	glEnd();

	//11.4
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(253, 30, 65.1);
	glVertex3f(253, 50, 65.1);
	glVertex3f(273, 50, 65.1);
	glVertex3f(273, 30, 65.1);
	glEnd();

	//12
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(280, 30, 65);
	glVertex3f(280, 50, 65);
	glVertex3f(280, 50, -50);
	glVertex3f(280, 30, -50);
	glEnd();

	//13
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(310, 50, -50);
	glVertex3f(310, 30, -50);
	glEnd();

	//14
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex3f(310, 30, 65);
	glVertex3f(310, 50, 65);
	glVertex3f(410, 50, 65);
	glVertex3f(410, 30, 65);
	glEnd();

	//14.1
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(313, 30, 65.1);
	glVertex3f(313, 50, 65.1);
	glVertex3f(343, 50, 65.1);
	glVertex3f(343, 30, 65.1);
	glEnd();

	//14.2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(345, 30, 65.1);
	glVertex3f(345, 50, 65.1);
	glVertex3f(375, 50, 65.1);
	glVertex3f(375, 30, 65.1);
	glEnd();

	//14.3
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex3f(377, 30, 65.1);
	glVertex3f(377, 50, 65.1);
	glVertex3f(407, 50, 65.1);
	glVertex3f(407, 30, 65.1);
	glEnd();

	//15
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
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
	glColor3f(0, 1, 1);
	glVertex3f(-95, 50, 100);
	glVertex3f(-95, 50, -50);
	glVertex3f(-30, 50, -50);
	glVertex3f(-30, 50, 100);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
	glVertex3f(-38, 50, 75);
	glVertex3f(-38, 50, -50);
	glVertex3f(135, 50, -50);
	glVertex3f(135, 50, 75);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
	glVertex3f(-135, 50, 55);
	glVertex3f(-135, 50, -50);
	glVertex3f(-100, 50, -50);
	glVertex3f(-100, 50, 55);
	glEnd();
	//4
	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
	glVertex3f(-105, 50, 85);
	glVertex3f(-105, 50, -50);
	glVertex3f(-95, 50, -50);
	glVertex3f(-95, 50, 85);
	glEnd();
	//5
	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
	glVertex3f(155, 50, 75);
	glVertex3f(155, 50, -50);
	glVertex3f(295, 50, -50);
	glVertex3f(295, 50, 75);
	glEnd();
	//6
	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
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
	glColor3f(1, 0, 0);
	glVertex3f(330, 30, 105);
	glVertex3f(390, 15, 105);
	glVertex3f(390, 15, 90);
	glVertex3f(330, 30, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
	glVertex3f(390, 15, 120);
	glVertex3f(410, 15, 120);
	glVertex3f(410, 15, 90);
	glVertex3f(390, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
	glVertex3f(100, 15, 105);
	glVertex3f(160, 30, 105);
	glVertex3f(160, 30, 90);
	glVertex3f(100, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
	glVertex3f(80, 15, 125);
	glVertex3f(100, 15, 125);
	glVertex3f(100, 15, 90);
	glVertex3f(80, 15, 90);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
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
	glVertex3f(-30, 60, 75);
	glVertex3f(-30, 50, 75);
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
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, -40);
	glVertex3f(155, 100, -50);
	glVertex3f(155, 80, -50);
	glVertex3f(155, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, -40);
	glVertex3f(155, 65, -50);
	glVertex3f(155, 50, -50);
	glVertex3f(155, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, -1);
	glVertex3f(155, 100, -39);
	glVertex3f(155, 80, -39);
	glVertex3f(155, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, -1);
	glVertex3f(155, 65, -39);
	glVertex3f(155, 50, -39);
	glVertex3f(155, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, 0);
	glVertex3f(155, 100, 34);
	glVertex3f(155, 80, 34);
	glVertex3f(155, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, 0);
	glVertex3f(155, 65, 34);
	glVertex3f(155, 50, 34);
	glVertex3f(155, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, 65);
	glVertex3f(155, 100, 35);
	glVertex3f(155, 80, 35);
	glVertex3f(155, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, 65);
	glVertex3f(155, 65, 35);
	glVertex3f(155, 50, 35);
	glVertex3f(155, 50, 65);
	glEnd();

	//kotak kiri 5.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, 75);
	glVertex3f(155, 100, 66);
	glVertex3f(155, 80, 66);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, 75);
	glVertex3f(155, 65, 66);
	glVertex3f(155, 50, 66);
	glVertex3f(155, 50, 75);
	glEnd();

	//kotak 1.1 depan 
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 100, 75);
	glVertex3f(160, 100, 75);
	glVertex3f(160, 80, 75);
	glVertex3f(155, 80, 75);
	glEnd();

	//kotak 1.2 depan 
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(155, 65, 75);
	glVertex3f(160, 65, 75);
	glVertex3f(160, 50, 75);
	glVertex3f(155, 50, 75);
	glEnd();

	//kotak gede
	//kiri,kanan,kanan,kiri
	kotak(141, 160, 160, 141, 6, 21);


	//kotak 8.1 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(289, 100, 75);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 80, 75);
	glVertex3f(289, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(289, 65, 75);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 50, 75);
	glVertex3f(289, 50, 75);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 100, 75);
	glVertex3f(294, 100, 66);
	glVertex3f(294, 80, 66);
	glVertex3f(294, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 65, 75);
	glVertex3f(294, 65, 66);
	glVertex3f(294, 50, 66);
	glVertex3f(294, 50, 75);
	glEnd();

	//kotak kanan 1.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 100, -40);
	glVertex3f(294, 100, -50);
	glVertex3f(294, 80, -50);
	glVertex3f(294, 80, -40);
	glEnd();

	//kotak kanan 1.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 65, -40);
	glVertex3f(294, 65, -50);
	glVertex3f(294, 50, -50);
	glVertex3f(294, 50, -40);
	glEnd();

	//kotak kanan 2.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 100, -1);
	glVertex3f(294, 100, -39);
	glVertex3f(294, 80, -39);
	glVertex3f(294, 80, -1);
	glEnd();

	//kotak kanan 2.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 65, -1);
	glVertex3f(294, 65, -39);
	glVertex3f(294, 50, -39);
	glVertex3f(294, 50, -1);
	glEnd();

	//kotak kanan 3.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 100, 0);
	glVertex3f(294, 100, 34);
	glVertex3f(294, 80, 34);
	glVertex3f(294, 80, 0);
	glEnd();

	//kotak kanan 3.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 65, 0);
	glVertex3f(294, 65, 34);
	glVertex3f(294, 50, 34);
	glVertex3f(294, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 100, 65);
	glVertex3f(294, 100, 35);
	glVertex3f(294, 80, 35);
	glVertex3f(294, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(294, 65, 65);
	glVertex3f(294, 65, 35);
	glVertex3f(294, 50, 35);
	glVertex3f(294, 50, 65);
	glEnd();

	//list lantai 3 kanan
	//kotak kiri 5.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, 75);
	glVertex3f(305, 100, 66);
	glVertex3f(305, 80, 66);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak kiri 5.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, 75);
	glVertex3f(305, 65, 66);
	glVertex3f(305, 50, 66);
	glVertex3f(305, 50, 75);
	glEnd();

	//kotak kiri 1.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, -40);
	glVertex3f(305, 100, -50);
	glVertex3f(305, 80, -50);
	glVertex3f(305, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, -40);
	glVertex3f(305, 65, -50);
	glVertex3f(305, 50, -50);
	glVertex3f(305, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, -1);
	glVertex3f(305, 100, -39);
	glVertex3f(305, 80, -39);
	glVertex3f(305, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, -1);
	glVertex3f(305, 65, -39);
	glVertex3f(305, 50, -39);
	glVertex3f(305, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, 0);
	glVertex3f(305, 100, 34);
	glVertex3f(305, 80, 34);
	glVertex3f(305, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, 0);
	glVertex3f(305, 65, 34);
	glVertex3f(305, 50, 34);
	glVertex3f(305, 50, 0);
	glEnd();

	//kotak kiri 4.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, 65);
	glVertex3f(305, 100, 35);
	glVertex3f(305, 80, 35);
	glVertex3f(305, 80, 65);
	glEnd();

	//kotak kiri 4.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, 65);
	glVertex3f(305, 65, 35);
	glVertex3f(305, 50, 35);
	glVertex3f(305, 50, 65);
	glEnd();


	//kotak kanan 1.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 100, -40);
	glVertex3f(415, 100, -50);
	glVertex3f(415, 80, -50);
	glVertex3f(415, 80, -40);
	glEnd();

	//kotak kiri 1.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 65, -40);
	glVertex3f(415, 65, -50);
	glVertex3f(415, 50, -50);
	glVertex3f(415, 50, -40);
	glEnd();

	//kotak kiri 2.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 100, -1);
	glVertex3f(415, 100, -39);
	glVertex3f(415, 80, -39);
	glVertex3f(415, 80, -1);
	glEnd();

	//kotak kiri 2.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 65, -1);
	glVertex3f(415, 65, -39);
	glVertex3f(415, 50, -39);
	glVertex3f(415, 50, -1);
	glEnd();

	//kotak kiri 3.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 100, 0);
	glVertex3f(415, 100, 34);
	glVertex3f(415, 80, 34);
	glVertex3f(415, 80, 0);
	glEnd();

	//kotak kiri 3.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 65, 0);
	glVertex3f(415, 65, 34);
	glVertex3f(415, 50, 34);
	glVertex3f(415, 50, 0);
	glEnd();

	//kotak kanan 4.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 100, 65);
	glVertex3f(415, 100, 35);
	glVertex3f(415, 80, 35);
	glVertex3f(415, 80, 65);
	glEnd();

	//kotak kanan 4.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 65, 65);
	glVertex3f(415, 65, 35);
	glVertex3f(415, 50, 35);
	glVertex3f(415, 50, 65);
	glEnd();

	//kotak kanan 5.1
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 100, 66);
	glVertex3f(415, 80, 66);
	glVertex3f(415, 80, 75);
	glEnd();

	//kotak kanan 5.2
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 65, 66);
	glVertex3f(415, 50, 66);
	glVertex3f(415, 50, 75);
	glEnd();

	//kotak 1.1 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 100, 75);
	glVertex3f(310, 100, 75);
	glVertex3f(310, 80, 75);
	glVertex3f(305, 80, 75);
	glEnd();

	//kotak 1.2 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(305, 65, 75);
	glVertex3f(310, 65, 75);
	glVertex3f(310, 50, 75);
	glVertex3f(305, 50, 75);
	glEnd();

	//kotak gede
	//kiri,kanan,kanan,kiri
	kotak(296, 310, 310, 296, 6, 16);


	//kotak 8.1 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(410, 100, 75);
	glVertex3f(415, 100, 75);
	glVertex3f(415, 80, 75);
	glVertex3f(410, 80, 75);
	glEnd();

	//kotak 8.2 depan
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(410, 65, 75);
	glVertex3f(415, 65, 75);
	glVertex3f(415, 50, 75);
	glVertex3f(410, 50, 75);
	glEnd();
	//bangun lantai 3
	//1(alas kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-130, 50.1, 20);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-55, 50.1, -50);
	glVertex3f(-55, 50.1, 20);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-130, 50.1, 20);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, 20);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 20);
	glEnd();


	//3
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-130, 50.1, 20);
	glVertex3f(-130, 110, 20);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 50.1, 20);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, 20);
	glVertex3f(-130, 110, 20);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 50.1, 20);
	glEnd();

	//4
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 50.1, 20);
	glVertex3f(-55, 50.1, -50);
	glVertex3f(-55, 110, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 50.1, 20);
	glVertex3f(-55, 50.1, -50);
	glVertex3f(-55, 110, -50);
	glEnd();

	//5
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-55, 110, -50);
	glVertex3f(-55, 50.1, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 50.1, -50);
	glVertex3f(-130, 110, -50);
	glVertex3f(-55, 110, -50);
	glVertex3f(-55, 50.1, -50);
	glEnd();


	//6
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 20);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 110, -50);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-130, 110, -50);
	glVertex3f(-130, 110, 20);
	glVertex3f(-55, 110, 20);
	glVertex3f(-55, 110, -50);
	glEnd();


	//7
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-55, 110.1, 15);
	glVertex3f(-55, 110.1, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-55, 110.1, 15);
	glVertex3f(-55, 110.1, -45);
	glEnd();

	//8
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-125, 300, 15);
	glVertex3f(-125, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-125, 300, 15);
	glVertex3f(-125, 300, -45);
	glEnd();

	//9
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-125, 300, 15);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 110.1, 15);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, 15);
	glVertex3f(-125, 300, 15);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 110.1, 15);
	glEnd();

	//10
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 110.1, 15);
	glVertex3f(-55, 110.1, -45);
	glVertex3f(-55, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 110.1, 15);
	glVertex3f(-55, 110.1, -45);
	glVertex3f(-55, 300, -45);
	glEnd();

	//11
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 300, -45);
	glVertex3f(-55, 300, -45);
	glVertex3f(-55, 110.1, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 110.1, -45);
	glVertex3f(-125, 300, -45);
	glVertex3f(-55, 300, -45);
	glVertex3f(-55, 110.1, -45);
	glEnd();


	//12
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(-125, 300, -45);
	glVertex3f(-125, 300, 15);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 300, -45);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-125, 300, -45);
	glVertex3f(-125, 300, 15);
	glVertex3f(-55, 300, 15);
	glVertex3f(-55, 300, -45);
	glEnd();


	//13 Gedung 3
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
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


	//14
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(1, 0, 0);
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
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(292, 90.1, 20);
	glVertex3f(292, 90.1, -50);
	glVertex3f(200, 90.1, -50);
	glVertex3f(200, 90.1, 20);
	glEnd();

	//24
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex3f(412, 90.1, 20);
	glVertex3f(412, 90.1, -50);
	glVertex3f(348, 90.1, -50);
	glVertex3f(348, 90.1, 20);
	glEnd();

	//30 Gedung 4
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
	glColor3f(0.3f, 0.0f, 0.0f);
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
