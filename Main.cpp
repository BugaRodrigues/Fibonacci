#include <iostream>
using namespace std;

int main() {
	int primeiro = 0;
	int segundo = 1;
	int terceiro = 0;
	int termo = 0;

	cout << "quantos termos voce quer ver? \n";
	cin >> termo;

	while (termo > 0) {
		cout << primeiro + segundo << ", ";
		segundo += primeiro;
		primeiro = segundo;
		termo--;
	}

	system("pause");

	return 0;
}