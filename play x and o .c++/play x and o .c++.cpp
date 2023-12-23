
#include <iostream>
#include <string>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
void p();
void n1(int x);
void n2(int x);
bool in(int x);
bool  f(int x);
bool fo(int x);
char c1 = '1';
char c2 = '2';
char c3 = '3';
char c4 = '4';
char c5 = '5';
char c6 = '6';
char c7 = '7';
char c8 = '8';
char c9 = '9';
int main()
{
	int  v, z ,w=3;
	 p();
	do
	{  
		cout << "enter X \n";
		cin >> v;
		while (!in(v))
		{
			cout << "the num is writen \n";
			cout << "enter X agan \n";
			cin >> v;
		}
		while (v > 9 || v < 1) {
			cout << "enter X agan \n";
			cin >> v;
		}
		n1(v);
        p();
		if  (f(w)==true)
		{
			w = 1;
			break;
		}
		cout << "enter O \n";
		cin >> z;
		while (!in(z))
		{
			cout << "the num is writen \n";
			cout << "enter O agan \n";
			cin >> z;
		}
		while (z > 9 || z < 1) {
			cout << "enter O agan \n";
			cin >> z;
		}
		n2(z);
		p();
		if (fo(w)==true) {
			w = 0;
			break;
		}
	} while (true);
	if (w == 1)
		cout << "the winer is X \n";
	else if (w == 0)
		cout << "the winer is O \n";
	

}
void p() {
	cout << "\n\t{\t" << c1 << "\t|\t" << c2 << "\t|\t" << c3 << "\t} \n";
	cout << "\t  --------------------------------------------\n";
	cout << "\t{\t" << c4 << "\t|\t" << c5 << "\t|\t" << c6 << "\t} \n";
	cout << "\t  --------------------------------------------\n";
	cout << "\t{\t" << c7 << "\t|\t" << c8 << "\t|\t" << c9 << "\t} \n";
	cout << "\t  --------------------------------------------\n";
}
void n1(int  x) {

	switch (x) {
	case  1:
		c1 = 'X';
		break;
	case  2:
		c2 = 'X';
		break;
	case  3:
		c3 = 'X';
		break;
	case  4:
		c4 = 'X';
		break;
	case  5:
		c5 = 'X';
		break;
	case  6:
		c6 = 'X';
		break;
	case  7:
		c7 = 'X';
		break;
	case  8:
		c8 = 'X';
		break;
	case  9:
		c9 = 'X';
		break;

	}

}
void n2(int x) {
	switch (x) {
	case  1:
		c1 = 'O';
		break;
	case  2:
		c2 = 'O';
		break;
	case  3:
		c3 = 'O';
		break;
	case  4:
		c4 = 'O';
		break;
	case  5:
		c5 = 'O';
		break;
	case  6:
		c6 = 'O';
		break;
	case  7:
		c7 = 'O';
		break;
	case  8:
		c8 = 'O';
		break;
	case  9:
		c9 = 'O';
		break;

	}
}
bool in(int x) {
	switch (x)
	{
	case 1:
		if (c1 == 'X' || c1=='O')
			return false;
		break;
	case 2:
		if (c2 == 'X' || c2 == 'O')
			return false;
		break;
	case 3:
		if (c3 == 'X' || c3 == 'O')
			return false;
		break;
	case 4:
		if (c4 == 'X' || c4 == 'O')
			return false;
		break;
	case 5:
		if (c5 == 'X' || c5 == 'O')
			return false;
		break;
	case 6:
		if (c6 == 'X' || c6 == 'O')
			return false;
		break;
	case 7:
		if (c7 == 'X' || c7 == 'O')
			return false;
		break;
	case 8:
		if (c8 == 'X' || c8 == 'O')
			return false;
		break;
	case 9:
		if (c9 == 'X' || c9 == 'O')
			return false;
		break;
	default:
		return true;
	}
}
bool f(int w) {
	if (c2 == 'X' && c5 == 'X' && c8 == 'X') {
		return true;
	}
	if (c1 == 'X' && c4 == 'X' && c7 == 'X') {
		return true;
	}
	else if (c4 == 'X' && c5 == 'X' && c6 == 'X' || c1 == 'X' && c2 == 'X' && c3 == 'X') {
		return true;
	}
	else if (c7 == 'X' && c8 == 'X' && c9 == 'X') {
		return true;
	}
	else if (c3 == 'X' && c6 == 'X' && c9 == 'X') {
		return true;
	}
	else if (c1 == 'X' && c5 == 'X' && c9 == 'X' || c3 == 'X' && c5 == 'X' && c7 == 'X') {
		return true;
	}
	else
	{
		return false;
	}
}
bool fo(int w)
{
	if (c2 == 'O' && c5 == 'O' && c8 == 'O') {
		return true;
	}
	if (c1 == 'O' && c4 == 'O' && c7 == 'O') {
		return true;
	}

	else if (c3 == 'O' && c6 == 'O' && c9 == 'O') {
		return true;
	}

	else if (c1 == 'O' && c5 == 'O' && c9 == 'O' || c3 == 'O' && c5 == 'O' && c7 == 'O')
	{
		return true;
	}
	else if (c4 == 'O' && c5 == 'O' && c6 == 'O' || c1 == 'O' && c2 == 'O' && c3 == 'O') {
		return true;
	}
	else if (c7 == 'O' && c8 == 'O' && c9 == 'O') {
		return true;
	}
	else
	{
		return false;
	}
}

