#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <Windows.h>


using namespace std;

int main()
{
	string newname;
	string address;
	string address2;
	cout << "Enter directory: ";
	getline(cin, address);
	cout << "Enter new name: ";
	getline(cin, newname);
	cout << "Enter new directory: ";
	getline(cin, address2);
	int result = rename(address.c_str(), newname.c_str());
	if (result == 0)
	{
		cout << "Success";
	}
	else
	{
		cout << "Error";
	}
	CopyFile(address.c_str(), address2.c_str(), 0);
	system("Pause");
	return 0;
}