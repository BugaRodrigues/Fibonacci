#include <iostream>
using namespace std;

int main() {
	int primeiro = 0;
	int segundo = 1;
	int terceiro = primeiro + segundo;
	int numero = 0;

	cout << "quantos termos voce quer ver? \n";
	cin >> numero;

	while (true) {
		if (numero == terceiro) {
			cout << "Pertence a sequencia. \n";
			break;
		} else if (terceiro > numero) {
			cout << "Nao pertence a sequencia. \n";
			break;
		}
		terceiro = primeiro + segundo;
		primeiro = segundo;
		segundo = terceiro;
	}
	//hellow world
	system("pause");

	return 0;
}