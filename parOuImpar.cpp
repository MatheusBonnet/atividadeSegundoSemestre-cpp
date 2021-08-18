#include <iostream>
using namespace std;

int main(){

	int num1 = 0;

	cout << "Digite um numero inteiro, para saber se e par ou impar:";
	cin >> num1;

	if(num1 % 2 == 0){
		cout << "O numero digitado foi par!";
	}

	else{
		cout << "O numero digitado foi impar!";
	}
}
