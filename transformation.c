#include <stdio.h>

#include <process.h>

#include <conio.h>

#include <graphics.h>

#include <math.h>

void disp(int n, float c[][3])

{

    float maxx, maxy;

    int i;

    maxx = getmaxx();

    maxy = getmaxy();

    maxx = maxx / 2;

    maxy = maxy / 2;

    i = 0;

    while (i < n - 1)

    {

        line(maxx + c[i][0], maxy - c[i][1], maxx + c[i + 1][0], maxy - c[i + 1][1]);

        i++;
    }

    i = n - 1;

    line(maxx + c[i][0], maxy - c[i][1], maxx + c[0][0], maxy - c[0][1]);

    setcolor(GREEN);

    line(0, maxy, maxx * 2, maxy);

    line(maxx, 0, maxx, maxy * 2);

    setcolor(WHITE);
}

void mul(int n, float b[][3], float c[][3], float a[][3])

{

    int i, j, k;

    for (i = 0; i < n; i++)

        for (j = 0; j < 3; j++)

            a[i][j] = 0;

    for (i = 0; i < n; i++)

        for (j = 0; j < 3; j++)

            for (k = 0; k < 3; k++)

            {

                a[i][j] = a[i][j] + (c[i][k] * b[k][j]);
            }
}

void translation(int n, float c[][3], float tx, float ty)

{

    int i;

    for (i = 0; i < n; i++)

    {

        c[i][0] = c[i][0] + tx;

        c[i][1] = c[i][1] + ty;
    }
}

void scaling(int n, float c[][3], float sx, float sy)

{

    float b[10][3], a[10][3];

    int i = 0, j;

    for (i = 0; i < 3; i++)

        for (j = 0; j < 3; j++)

            b[i][j] = 0;

    b[0][0] = sx;

    b[1][1] = sy;

    b[2][2] = 1;

    mul(n, b, c, a);

    setcolor(RED);

    disp(n, a);
}

void rotation(int n, float c[][3], float ra)

{

    int i = 0, j;

    float b[10][3], xp, yp, a[10][3];

    xp = c[0][0];

    yp = c[0][1];

    for (i = 0; i < 3; i++)

        for (j = 0; j < 3; j++)

            b[i][j] = 0;

    b[0][0] = b[1][1] = cos(ra * 3.14 / 180);

    b[0][1] = sin(ra * 3.14 / 180);

    b[1][0] = -sin(ra * 3.14 / 180);

    b[2][0] = (-xp * cos(ra * 3.14 / 180)) + (yp * sin(ra * 3.14 / 180)) + xp;

    b[2][1] = (-xp * sin(ra * 3.14 / 180)) - (yp * cos(ra * 3.14 / 180)) + yp;

    b[2][2] = 1;

    mul(n, b, c, a);

    setcolor(RED);

    disp(n, a);
}

void main()

{

    int i, j, k, cho, n, gd = DETECT, gm;

    float c[10][3], tx, ty, sx, sy, ra;

    initgraph(&gd, &gm,???d
              :\\turboc ~1\\bgi???);

    printf(???\nEnter the number of vertices
           :          ???);

    scanf(???% d???, &n);

    for (i = 0; i < n; i++)

    {

        printf(???\nEnter the co - ordinates of the % d vertex
               :???, i + 1);

        scanf(???% f % f???, &c[i][0], &c[i][1]);

        c[i][2] = 1;
    }

    do

    {

        clrscr();

        cleardevice();

        printf(???\n\t\t\t * **MENU * **???);

printf(???\n\t 1) TRANSLATION???);

printf(???\n\t 2) SCALING ???);

printf(???\n\t 3) ROTATION ???);

printf(???\n\t 4) EXIT???);

printf(???\n\t ENTER YOUR CHOICE
       :           ???);

scanf(???% d???, &cho);

switch (cho)

{

case 1:

printf(???\n\tEnter translation factor for X & Y axis :\t???);

scanf(???% f % f???, &tx, &ty);

clrscr();

cleardevice();

setcolor(BLUE);

disp(n, c);

translation(n, c, tx, ty);

setcolor(RED);

disp(n, c);

getch();

break;

case 2:

printf(???\n\tEnter scaling factor for X & Y axis :\t???);

scanf(???% f % f???, &sx, &sy);

clrscr();

cleardevice();

setcolor(BLUE);

disp(n, c);

scaling(n, c, sx, sy);

getch();

break;

case 3:

    printf(???\n\n\tEnter the angle of rotation
           :\t???);

    scanf(???% f???, &ra);

    clrscr();

    cleardevice();

    setcolor(BLUE);

    disp(n, c);

    rotation(n, c, ra);

    getch();
    break;

case 4:

    exit(0);
    break;

default:

    printf(???\n\tInvalid choice !!???);

    break;
}

    } while (cho != 4);

    getch();

    closegraph();
}
