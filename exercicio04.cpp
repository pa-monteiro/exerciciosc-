#include "iostream" // os comandos cout << e cin >>
#include "math.h" // operadores e funções matemáticas
#include "cstdlib" //comandos system("cls") e system("pause")
using namespace std; // inibe o uso de std:: antes de cada comando
int main()
{ system("cls"); // apaga a tela preta

 setlocale(LC_ALL, "Portuguese"); // configura idioma
 double v=0,ta=0,te=0,pres=0;
 cout << "Digite o valor: \n";
 cin >> v;
 cout << "Digite a taxa: \n";
 cin >> ta;
 cout << "Digite o tempo: \n";
 cin >> te;
 pres = v+(v*ta/100)*te;
 cout << "Exibir resultado: \n" << pres; 

 system("pause");} // faz uma pausa no processamento
