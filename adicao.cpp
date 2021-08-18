#include <iostream>
using namespace std;

int main(){

	int num1 = 0;
	int num2 = 0;
	int soma = 0;

	cout << "Digite o primeiro numero: ";
	cin >> num1;

	cout << "Digite o segundo numero:";
	cin >> num2;

	soma = num1 + num2;

	if(soma > 10){
		cout << soma;
	}

	else{
		cout<<"Desculpe nao poder mostrar o resultado, tente outra vez";
	}

	return 0;
}
