#include <graphics.h>
int main()
{
    initwindow(1200, 700, "Yash Chauhan");
    setcolor(YELLOW);
    circle(300, 300, 200);
    setcolor(BLUE);
    circle(900, 300, 200);
    getch();
    closegraph();
    return 0;
}
