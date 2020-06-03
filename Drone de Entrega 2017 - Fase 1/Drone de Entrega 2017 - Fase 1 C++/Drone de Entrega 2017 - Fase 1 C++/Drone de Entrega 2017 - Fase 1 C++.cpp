#include <iostream>
using namespace std;

int main()
{
	int A, B, C, H, L;

	cout << "Qual a altura da caixa ? ";
	cin >> A;
	cout << "Qual a largura da caixa ? ";
	cin >> B;
	cout << "Qual a profundidade da caixa ? ";
	cin >> C;
	cout << "Qual a altura da janela ? ";
	cin >> H;
	cout << "Qual a largura da janela ? ";
	cin >> L;

	if ((A <= H) && (B <= L)) 
	{
		cout << "S";
	}
	else if ((A <= L) && (B <= H)) 
	{
		cout << "S";
	}
	else if ((A <= H) && (C <= L)) 
	{
		cout << "S";
	}
	else if ((A <= L) && (C <= H)) 
	{
		cout << "S";
	}
	else if ((B <= H) && (C <= L)) 
	{
		cout << "S";
	}
	else if ((B <= L) && (C <= H)) 
	{
		cout << "S";
	}
	else
	{
		cout << "N";
	}
}