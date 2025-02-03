
// Renee Edson
// Rectangle Area

#include <iostream> 
#include <conio.h> 

using namespace std;


int GetLengthFromUser()
{
	int length = 0;
	
	cout << "Enter your length";
	cin >> length;

	return length;
}

int GetWidthFromUser()
{
	int width = 0;

	cout << "Enter your width";
	cin >> width;

	return width;
}

int CalculateArea()
{
	int length = GetLengthFromUser();
	int width = GetWidthFromUser();

	int area = length * width;

	return area;
}

void DisplayArea(int area)
{
	cout << "Area of your rectangle is:" << area << "\n";
}

int main()
{
	int area = CalculateArea();
	DisplayArea(area);

	(void)_getch();
	return 0;
}







