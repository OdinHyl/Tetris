#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

const int BLOCKSIZE = 35;
const int MAPSIZE = 16;
int map[16][16] =
{
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

void draw(int n, int i, int j)
{
    if (n == 0)
    {
        setcolor(WHITE);            // 方块的线条为白色
        setfillcolor(BLACK);        // 方块内黑色填充
        fillrectangle(BLOCKSIZE * i, BLOCKSIZE * j, BLOCKSIZE * (i + 1), BLOCKSIZE * (j + 1));
    }
    if (n == 1)
    {
        setcolor(WHITE);            // 方块的线条为白色
        setfillcolor(YELLOW);       // 方块内黄色填充
        fillrectangle(BLOCKSIZE * i, BLOCKSIZE * j, BLOCKSIZE * (i + 1), BLOCKSIZE * (j + 1));
    }
}

void draw(int i, int j)
{
    int n = map[i][j];
    draw(n, i, j);
}
int main()
{
    initgraph(666, 666);
    while (true)
    {
        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                draw(i, j);
            }
        }
    }
}