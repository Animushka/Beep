#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int sec;
	cout << "Enter the time interval in seconds: ";
	cin >> sec;
	for (int i = 0; i < sec; i++)
	{
		Sleep(1000);
	}
	cout << "\a";
}