#include <iostream>
#include <iomanip> // necessario para usar setw() e setf() em cout

using namespace std;

int main() {
    
int n1, n2, n3;
int soma;

cout << "Entre com 3 numeros inteiros: ";
cin >> n1 >> n2 >> n3;
soma = n1 + n2 + n3;
cout << "Soma = " << soma << endl;

cout.setf (ios::fixed | ios::showpoint); // reais em ponto fixo
cout.precision(2); // 2 casa decimais

// setw(8) fixa tamanho da representação em 8 digitos

cout << "Media = " << setw(8) << soma / 3.0 << endl;
cout << "Produto = " << (unsigned) n1 * n2 * n3 << endl;

}
