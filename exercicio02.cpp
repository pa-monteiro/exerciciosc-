#include "iostream" // os comandos cout << e cin >>
#include "math.h" // operadores e funções matemáticas
#include "cstdlib" //comandos system("cls") e system("pause")
using namespace std; // inibe o uso de std:: antes de cada comando
int main()
{ system("cls"); // apaga a tela preta

 setlocale(LC_ALL, "Portuguese"); // configura idioma
 double r=0,a=0,res=0;
 const double v=(3,14*r*a);
 cout << "Digite a altura: \n";
 cin >> a;
 cout << "Digite o raio: \n";
 cin >> r;
 cout << "Exibir resultado: \n" << v; 

 system("pause");} // faz uma pausa no processamento
