#include "iostream" // os comandos cout << e cin >>
#include "math.h" // operadores e funções matemáticas
#include "cstdlib" //comandos system("cls") e system("pause")
using namespace std; // inibe o uso de std:: antes de cada comando
int main()
{ system("cls"); // apaga a tela preta

 setlocale(LC_ALL, "Portuguese"); // configura idioma
 double c=0,a=0,l=0,v=0;
 cout << "Digite o comprimento: \n";
 cin >> c;
 cout << "Digite a altura: \n";
 cin >> a;
 cout << "Digite o largura: \n";
 cin >> l;
 v = c*a*l;
 cout << "Exibir resultado: \n" << v; 

 system("pause");} // faz uma pausa no processamento
