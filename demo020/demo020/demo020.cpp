#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

/*动画控制函数*/
void MazePerson::gotoxy(int x, int y)
{
	COORD cd;

	cd.X = x;
	cd.Y = y;
	HANDLE = handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, cd); //把光标定位到坐标上，即改变人的位置，让人动起来
}

const int SUCCESS = 0;

int main()
{
	//走出迷宫
	//算法
	//可以使用左手规则或者右手规则，但是有着基本原则：保证手时钟靠墙
	//结果：走出迷宫


	//架构描述
	/* 迷宫类MazeMap（二维迷宫类），除此之外还要三维的迷宫类
	 * 数据成员：墙壁字符，通路字符，迷宫数组
	 * 成员函数：构造函数，析构函数，迷宫回执函数，迷宫边界检查函数
	 * 
	 * 
	 * 人类MazePerson
	 * 数据成员：人的字符，人的朝向，人的当前位置，人的前一个位置，人的速度
	 * 成员函数：构造函数，数据封装函数，析构函数，向不同方向前进的函数，转弯函数，开始函数
	 */

	int map[8][9] = {
		{WALL, WALL, WALL, WALL, WALL, WALL, WALL, ROAD, WALL},
		{WALL, WALL, WALL, WALL, ROAD, WALL, WALL, ROAD, WALL},
		{WALL, WALL, WALL, WALL, ROAD, WALL, WALL, ROAD, WALL},
		{WALL, WALL, WALL, WALL, ROAD, WALL, WALL, ROAD, WALL},
		{WALL, WALL, ROAD, ROAD, ROAD, ROAD, WALL, ROAD, WALL},
		{WALL, WALL, ROAD, WALL, WALL, ROAD, ROAD, ROAD, WALL},
		{WALL, ROAD, ROAD, WALL, WALL, WALL, WALL, WALL, WALL},
		{WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
	};
	MyMazeMap maze;

	maze.setMazeMap(&map[0][0], 8, 9);

	system("pause");
	return 0;
}
