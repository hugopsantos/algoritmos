//============================================================================
// Autor       : Hugo Santos
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	// Algoritmo que verifica se o Ano é Bissesto
	int ano;
	cout << "Introduza o ano" << endl;
	cin >> ano;
	if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
		cout << "O ano " << ano << " e' bissesto" << endl;
	}
	else
		cout << "O ano " << ano << " e' regular" << endl;


	return 0;
}
