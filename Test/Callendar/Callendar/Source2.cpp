#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	int rows = 0;
	ifstream rc("rc.txt");
	rc >> rows;
	int cols = 3;
	ifstream file("t.txt");
		int** a = new int*[rows];
		for (int h = 0; h < rows; ++h)
			a[h] = new int[cols];
		for (int i = 0; i < rows; ++i) 
		{
			for (int j = 0; j < cols; ++j) 
			{
				file >> a[i][j];
				file.get(); // Throw away the comma
			}
		}
		for (int i = 0; i < rows; ++i) 
		{
			for (int j = 0; j < cols; ++j) 
			{
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
	
	system("pause");
}