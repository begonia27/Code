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

void loadMap();// ���Ƴ�ʼ��ͼ
void getInput();// ��ȡ��ҵ�����
void updateGame();// ˢ�µ�ͼ�������߼����㣩
void draw();// ��ʾ���к�ĵ�ͼ
void checkWin();
PositionType checkPos(int x, int y);

// �����ͼ�ĸ߶ȺͿ��
enum Object
{
	MAP_HEIGHT = 5,
	MAP_WIDTH = 8
};

// ����һ��������������
char input;

// ������ҵ�λ��Ϊ����(1,4)
int x = 1;
int y = 4;

// ��ʼ��ͼ
char const configMap[MAP_HEIGHT][MAP_WIDTH] =
{
	{'#', '#', '#', '#', '#', '#', '#', '#'},
	{'#', ' ', '.', '.', 'p', ' ', ' ', '#'},
	{'#', ' ', 'o', ' ', ' ', ' ', ' ', '#'},
	{'#', ' ', ' ', 'o', ' ', ' ', ' ', '#'},
	{'#', '#', '#', '#', '#', '#', '#', '#'},
};

// ����һ���ɹ��ƶ����޸ĵĵ�ͼ
char map[MAP_HEIGHT][MAP_WIDTH] = {};

int main()
{
	loadMap();
	draw();

	// ʹ�ÿ���̨һֱ����ѭ��֮�У����ж���ʾ
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

// ��ͼһ����5�У�8��
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

// ��ȡ������ҵ�����
void getInput()
{
	cin >> input;
}

void updateGame()
{
	int newX = x; // �������ݺ����p����λ�ã�������
	int newY = y; // �������ݺ����p����λ�ã�������
	int boxX = x;
	int boxY = y;

	/* switch���������ǣ�������ʽ��ֵ������������ĳ������ʽֵ��Ƚϡ�
	�����ʽ��ֵ��ĳ���������ʽ��ֵ���ʱ�� ��ִ��������䣬Ȼ���ٽ����жϣ�����ִ�к�������case�����䡣
	����ʽ��ֵ������case��ĳ������ʽ������ͬʱ����ִ��default�����䡣 */
	switch (input)
	{
	case 'w': // ������w���������ƶ�ʱ����ҵ���λ�����ڵ�����֮ǰ��λ�ü�ȥ1�����ڵ��в���
		newX -= 1;
		boxX -= 2;
		break;
	case 's': // ������s���������ƶ�ʱ����ҵ���λ�����ڵ�����֮ǰ��λ�ü���1�����ڵ��в���
		newX += 1;
		boxX += 2;
		break;
	case 'a': // ������a���������ƶ�ʱ����ҵ���λ�����ڵ�����֮ǰ��λ�ü�ȥ1�����ڵ��в���
		newY -= 1;
		boxY -= 2;
		break;
	case 'd': // ������d���������ƶ�ʱ����ҵ���λ�����ڵ�����֮ǰ��λ�ü���1�����ڵ��в���
		newY += 1;
		boxY += 2;
		break;
	default:
		cout << "fuck you" << endl;
	}

	PositionType t = checkPos(newX, newY);

	// �ж���������λ��
	switch (t)
	{
	case POS_MOVE:
		if (configMap[x][y] == '.')
		{
			map[x][y] = '.'; // Ŀ�ĵ�λ��
		}
		else
		{
			map[x][y] = ' '; // ���ƶ���λ��
		}

		map[newX][newY] = 'p'; // ��ҵ�λ��
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
				map[x][y] = '.'; // Ŀ�ĵ�λ��
			}
			else
			{
				map[x][y] = ' '; // ���ƶ���λ��
			}

			x = newX;
			y = newY;
			break;
		case '.':
			map[boxX][boxY] = 'O';
			map[newX][newY] = 'p';

			if (configMap[x][y] == '.')
			{
				map[x][y] = '.'; // Ŀ�ĵ�λ��
			}
			else
			{
				map[x][y] = ' '; // ���ƶ���λ��
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