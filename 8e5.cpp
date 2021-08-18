#include <iostream>
using namespace std;

int main(){

	int num1 = 0;
	int num2 = 0;
	int soma = 0;

	cout << "Digite um numero:";
	cin >> num1;

	cout << "Digite outro numero:";
	cin >> num2;

	soma = num1 + num2;

	if(soma > 20){
		cout << soma + 8;
	}

	else{
		cout << soma - 5;
	}

	return 0;
}
