#include <graphics.h>
int main()
{
    int d = 25, i, s = 1, j;
    initwindow(800, 800, "Yash Chauhan");
    for (i = 1; i <= 15; i++)
    {
        setcolor(i);
        for (j = 0; j < 5; j++)
            circle(400, 400, d - j);
        setfillstyle(s, i);
        for (j = 0; j < 5; j++)
            circle(400, 400, d - 25 - j);
        floodfill(400 - d + 10, 400, i);
        if (s == 11)
        {
            s = 1;
        }
        d += 25;
        s++;
        delay(200);
    }
    printf("Yash");
    getch();
    closegraph();
}
