#include"iostream"

#include"stdio.h"

	/*
	����
	00101100 + 01010101 = 10101010
	10110000 + 00001111 = 10111111
	*/

	/*����
	170
	191
	*/

	/*��O��
	char 1�o�C�g
	int 4�o�C�g
	float 4�o�C�g
	double 8�o�C�g
	*/

	/*��l��
	char 1�o�C�g
	int 4�o�C�g
	float 4�o�C�g
	double 8�o�C�g
	*/

	/*��ܖ�
	�A
	*/

int main()
{

	/*��Z��

	*/
	/*
	int num1 = 0;
	int num2 = 0;

	std::cout << "���";
	std::cin >> num1;
	std::cout << "���";
	std::cin >> num2;
	if (num1 % 2 == 1)
	{
		std::cout << num1 + num2;
	}
	else if (num1 % 2 == 0)
	{
		std::cout << num1 - num2;
	}
	*/

	/*�掵��
	
	char num1[10];
	char num2[10];
	char end[] = { 'e','n','d','\0' };

	while (true)
	{
		std::cout << "���";
		std::cin >> num1;
		if (num1 == end)
		{
			break;
		}
		std::cout << "���";
		std::cin >> num2;
		if (num2 == end)
		{
			break;
		}

		if ((int)num1 % 2 == 1)
		{
			std::cout << (int)num1 + (int)num2;
		}
		else if ((int)num1 % 2 == 0)
		{
			std::cout << (int)num1 - (int)num2;
		}
	}
	*/
	return 0;
}

/*�攪��
class Point
{
public:
	Point() { Clear(); }

	void Clear()
	{
		x = 0;
		y = 0;
		z = 0;
	}
public:
	int x, y, z;
};

int main(){
	Point point;
	Point nextPoint;

	nextPoint.x = 100;
	nextPoint.y = 30;

	while (1)
	{
		if (point.x < nextPoint.x)
		{
			point.x++;
		}
		else if (point.x > nextPoint.x)
		{
			point.x--;
		}

		if (point.y < nextPoint.y)
		{
			point.y++;
		}
		else if (point.y > nextPoint.y)
		{
			point.y--;
		}
		printf("pointX = %d\n", point.x);
		printf("pointY = %d\n", point.y);

		if (point.x == nextPoint.x &&
			point.y == nextPoint.y)
		{
			break;
		}
	}
}
*/


















































