#include <iostream>
using namespace std;

int main() 
{
	int A, M;

	cout << "Qual o numero de alunos ?";
	cin >> A;
	cout << "Qual o numero de monitores ?";
	cin >> M;

		

	if ((A + M) <= 50)
	{
		cout << "S";
	}
	else 
	{
		cout << "N";
	}
}