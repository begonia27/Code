#include<iostream>

using std::cout;
using std::cin;
using std::endl;

enum PositionType
{
	POS_MOVE,
	POS_WALL,
	POS_BOX
};

void loadMap();// 绘制初始地图
void getInput();// 获取玩家的输入
void updateGame();// 刷新地图（进行逻辑运算）
void draw();// 显示运行后的地图
void checkWin();
PositionType checkPos(int x, int y);

// 定义地图的高度和宽度
enum Object
{
	MAP_HEIGHT = 5,
	MAP_WIDTH = 8
};

// 定义一个玩家输入的数据
char input;

// 定义玩家的位置为坐标(1,4)
int x = 1;
int y = 4;

// 初始地图
char const configMap[MAP_HEIGHT][MAP_WIDTH] =
{
	{'#', '#', '#', '#', '#', '#', '#', '#'},
	{'#', ' ', '.', '.', 'p', ' ', ' ', '#'},
	{'#', ' ', 'o', ' ', ' ', ' ', ' ', '#'},
	{'#', ' ', ' ', 'o', ' ', ' ', ' ', '#'},
	{'#', '#', '#', '#', '#', '#', '#', '#'},
};

// 定义一个可供移动和修改的地图
char map[MAP_HEIGHT][MAP_WIDTH] = {};

int main()
{
	loadMap();
	draw();

	// 使得控制台一直处于循环之中，不中断显示
	while (true)
	{
		checkWin();
		cout << "a:left s:right w:up d:down." << endl;
		getInput();
		updateGame();
		draw();
	}

	return 0;
}

// 地图一共有5行，8列
void loadMap()
{
	for (int i = 0; i < MAP_HEIGHT; ++i)
	{
		for (int j = 0; j < MAP_WIDTH; ++j)
		{
			map[i][j] = configMap[i][j];
		}
	}
}

// 获取来自玩家的输入
void getInput()
{
	cin >> input;
}

void updateGame()
{
	int newX = x; // 输入数据后，玩家p的新位置：所在行
	int newY = y; // 输入数据后，玩家p的新位置：所在列
	int boxX = x;
	int boxY = y;

	/* switch语句的语义是：计算表达式的值，并逐个与其后的常量表达式值相比较。
	当表达式的值与某个常量表达式的值相等时， 即执行其后的语句，然后不再进行判断，继续执行后面所有case后的语句。
	如表达式的值与所有case后的常量表达式均不相同时，则执行default后的语句。 */
	switch (input)
	{
	case 'w': // 当按下w，即向上移动时，玩家的新位置所在的行是之前的位置减去1，所在的列不变
		newX -= 1;
		boxX -= 2;
		break;
	case 's': // 当按下s，即向下移动时，玩家的新位置所在的行是之前的位置加上1，所在的列不变
		newX += 1;
		boxX += 2;
		break;
	case 'a': // 当按下a，即向左移动时，玩家的新位置所在的列是之前的位置减去1，所在的行不变
		newY -= 1;
		boxY -= 2;
		break;
	case 'd': // 当按下d，即向下移动时，玩家的新位置所在的列是之前的位置加上1，所在的行不变
		newY += 1;
		boxY += 2;
		break;
	default:
		cout << "fuck you" << endl;
	}

	PositionType t = checkPos(newX, newY);

	// 判断所遇到的位置
	switch (t)
	{
	case POS_MOVE:
		if (configMap[x][y] == '.')
		{
			map[x][y] = '.'; // 目的地位置
		}
		else
		{
			map[x][y] = ' '; // 可移动的位置
		}

		map[newX][newY] = 'p'; // 玩家的位置
		x = newX;
		y = newY;
		break;
	case POS_WALL:
		break;
	case POS_BOX:
		switch ((map[boxX][boxY]))
		{
		case ' ':
			map[boxX][boxY] = 'o';
			map[newX][newY] = 'p';

			if (configMap[x][y] == '.')
			{
				map[x][y] = '.'; // 目的地位置
			}
			else
			{
				map[x][y] = ' '; // 可移动的位置
			}

			x = newX;
			y = newY;
			break;
		case '.':
			map[boxX][boxY] = 'O';
			map[newX][newY] = 'p';

			if (configMap[x][y] == '.')
			{
				map[x][y] = '.'; // 目的地位置
			}
			else
			{
				map[x][y] = ' '; // 可移动的位置
			}

			x = newX;
			y = newY;
			break;
		default:
			break;
		}

		break;
	}


}

void checkWin()
{
	bool win = true;

	for (int i = 0; i < MAP_HEIGHT; ++i)
	{
		for (int j = 0; j < MAP_WIDTH; ++j)
		{
			if (map[i][j] == 'o')
			{
				win = false;

				break;
			}
		}
	}

	if (win)
	{
		cout << "You win!\n";

		exit(0);
	}
}

void draw()
{
	for (int i = 0; i < MAP_HEIGHT; ++i)
	{
		for (int j = 0; j < MAP_WIDTH; ++j)
		{
			cout << map[i][j];
		}

		cout << endl;
	}
}

PositionType checkPos(int x, int y)
{
	switch (map[x][y])
	{
	case ' ':
	case '.':
		return POS_MOVE;
	case '#':
		return POS_WALL;
	case 'o':
	case 'O':
		return POS_BOX;
	default:
		break;
	}
}