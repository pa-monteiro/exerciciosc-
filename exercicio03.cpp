#include "iostream" // os comandos cout << e cin >>
#include "math.h" // operadores e funções matemáticas
#include "cstdlib" //comandos system("cls") e system("pause")
using namespace std; // inibe o uso de std:: antes de cada comando
int main()
{ system("cls"); // apaga a tela preta

 setlocale(LC_ALL, "Portuguese"); // configura o idioma

double tempo=0, velocidade=0, dist=0, litros=0;
cout << "Digite o tempo: ";
 cin >> tempo;
 cout << "Digite a velocidade: ";
 cin >> velocidade;
dist = tempo * velocidade;
litros = dist/12;
cout << "Velocidade é de: " << litros;
 system("pause");} // faz uma pausa no processamento
