//LISTA 7

#include <iostream> 
#include <locale>+
#include <iomanip>
using namespace std;

//EXERCICIO 1
//int maior(int a, int b); //declarar função
//int main() { //bloco de código principal
//	locale::global(locale("pt_BR.UTF-8"));
//	int num1, num2, num3;
//	cout << "Digite o número de um funcionário: ";
//	cin >> num1;
//	cout << "Descreva o número de horas trabalhadas: ";
//	cin >> num2;
//	cout << "Descreva o valor que recebe por hora: ";
//	cin >> num3;
//	int resposta = num2 * num3;
//	cout << "O salário desse funciónário é: " << resposta;
//}
//int maior(int a, int b) { //função
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//
//EXERCICIO 2
// 
//int produtos(int a, int b, int c, int d);
//int main() {
//	int quantidade1, quantidade2, valorunitario1, valorunitario2; 
//
//	cout << "Digite a quantidade do primeiro produto:";
//	cin >> quantidade1;
//
//	cout << "Digite o valor unitário do primeiro produto:";
//	cin >> valorunitario1;
//
//	cout << "Digite a quantidade do segundo produto:";
//	cin >> quantidade2;
//
//	cout << "Digite o valor unitário do segundo produto:";
//	cin >> valorunitario2;
//
//	int resposta = produtos(quantidade1, quantidade2, valorunitario1, valorunitario2);
//	cout << "O valor da compra é:" << resposta;
//
//	
//}
//int produtos(int a, int b, int c, int d) {
//	return(a + b) * (c + d);
//};
//
//EXERCICIO 3 
// 
int main() {
	double A, B, C; 
	const double PI = 3.14159;


	cout << "Digite o valor do A";
	cin >> A; 

	cout << "Digite o valor do B";
	cin >> B;

	cout << "Digite o valor do C";
	cin >> C;

	double AreaTriangulo = (A * C) / 2.0;
	double AreaCirculo = PI * C * C; 
	double AreaTrapezio = ((A + B) / 2.0) * C;
	double AreaQuadrado = B * B;
	double AreaRetangulo = A * B;


}//
//    // Mostrar os resultados
//    cout << "Área do triângulo retângulo: " << AreaTriangulo << endl;
//    cout << "Área do círculo: " << AreaCirculo << endl;
//    cout << "Área do trapézio: " << AreaTrapezio << endl;
//    cout << "Área do quadrado: " << AreaQuadrado << endl;
//    cout << "Área do retângulo: " << AreaRetangulo << endl;
//
//    return 0;
//}