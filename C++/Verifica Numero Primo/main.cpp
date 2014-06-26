//============================================================================
// Autor       : Hugo Santos
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	// Verifica numero Primo
	cout << "Introduza o numero a analisar " << endl;
	int n, div = 2;
	cin >> n;
	if(n < 1){
		cout << "O numero, tem de ser superior a 0" << endl;
	}
	else{
		while(div * div < n){
			if(n % div == 0){
			cout << "O numero e' divisivel por " << div << endl;
			cout << "Nao e' um Numero Primo " << endl;
			return 0;
			}
			cout << "Divisor " << div << endl;
			div++;
		}
		cout << "Numero Primo " << endl;
	}
	return 0;
}
