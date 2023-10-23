#include <stdio.h>
#include <graphics.h>
#include <math.h>
int  main()
{

    int gd = DETECT, gm, i, x1, y1, x2, y2, dx, dy, length, x, y;
    initgraph(&gd, &gm, "");

    printf("Enter the point x1 and y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the point x2 and y2: ");
    scanf("%d%d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        length = abs(dx);
    }
    else
    {
        length = abs(dy);
    }

    dx = dx / length;
    dy = dy / length;

    x = x1;
    y = y1;
    i = 0;

    while (i <= length)
    {
        putpixel(x, y, GREEN);
        x = x + dx;
        y = y + dy;
        i++;
    }
    getch();
    closegraph();
}
