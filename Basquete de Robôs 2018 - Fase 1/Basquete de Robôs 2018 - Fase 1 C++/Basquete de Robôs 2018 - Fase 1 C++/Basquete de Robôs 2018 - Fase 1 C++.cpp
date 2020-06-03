#include <iostream>
using namespace std;

int main ()
{
	int D;

	cout << "Qual a distancia do robo.?";
	cin >> D;

	if (D <= 800)
	{
		cout << "1";
	}
	else if ((800 < D) && (D <= 1400))
	{
		cout << "2";
	}
	else if ((1400 < D) && (D <= 2000))
	{
		cout << "3";
	}
}
