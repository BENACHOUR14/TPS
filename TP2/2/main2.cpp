#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char *pc;
pc = new char[4]; // r�servation de place dans la m�moire pour 4 char
*pc = 'a'; // le code ASCII de a est rang� dans la case m�moire point�e par pc
*(pc+1) = 'b'; // le code ASCII de b est rang� une case m�moire suivante
*(pc+2) = 'c'; // le code ASCII de c est rang� une case m�moire suivante
*(pc+3) = 'd'; // le code ASCII de d est rang� une case m�moire suivante
cout<<"Valeurs :"<<*pc<<" "<<*(pc+1)<<" "<<*(pc+2)<<" "<<*(pc+3);
delete pc; // lib�ration de la place 
}
