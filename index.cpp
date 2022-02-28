#include<iostream>
using namespace std;
int main()
{
	cout << "Hello world";
	int const ROW = 4;
	int const COLL = 4;
	int arr[ROW][COLL];
	for (int i = 1; i <= ROW; i++)
	{
		for (int j = 1; j <= COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 1; i <= ROW; i++)
	{
		for (int j = 1; j <= COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
}