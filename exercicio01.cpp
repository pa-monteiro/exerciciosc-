#include "iostream" // os comandos cout << e cin >>
#include "math.h" // operadores e funções matemáticas
#include "cstdlib" //comandos system("cls") e system("pause")
using namespace std; // inibe o uso de std:: antes de cada comando
int main()
{ system("cls"); // apaga a tela preta

 setlocale(LC_ALL, "Portuguese"); // configura idioma
 double c=0, f=0;
 cout << "Digite a temperatura em graus Celsius: ";
 cin >> c;
 f = (9*c+160)/5;
 cout << "\nO resultado é\n" << f;

 system("pause");} // faz uma pausa no processamento
