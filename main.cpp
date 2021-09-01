#include"iostream"

#include"stdio.h"

	/*
	第一問
	00101100 + 01010101 = 10101010
	10110000 + 00001111 = 10111111
	*/

	/*第二問
	170
	191
	*/

	/*第三問
	char 1バイト
	int 4バイト
	float 4バイト
	double 8バイト
	*/

	/*第四問
	char 1バイト
	int 4バイト
	float 4バイト
	double 8バイト
	*/

	/*第五問
	②
	*/

int main()
{

	/*第六問

	*/
	/*
	int num1 = 0;
	int num2 = 0;

	std::cout << "一つ目";
	std::cin >> num1;
	std::cout << "二つ目";
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

	/*第七問
	
	char num1[10];
	char num2[10];
	char end[] = { 'e','n','d','\0' };

	while (true)
	{
		std::cout << "一つ目";
		std::cin >> num1;
		if (num1 == end)
		{
			break;
		}
		std::cout << "二つ目";
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

/*第八問
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


















































