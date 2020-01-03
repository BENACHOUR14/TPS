#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char *pc;
pc = new char[4]; // réservation de place dans la mémoire pour 4 char
*pc = 'a'; // le code ASCII de a est rangé dans la case mémoire pointée par pc
*(pc+1) = 'b'; // le code ASCII de b est rangé une case mémoire suivante
*(pc+2) = 'c'; // le code ASCII de c est rangé une case mémoire suivante
*(pc+3) = 'd'; // le code ASCII de d est rangé une case mémoire suivante
cout<<"Valeurs :"<<*pc<<" "<<*(pc+1)<<" "<<*(pc+2)<<" "<<*(pc+3);
delete pc; // libération de la place 
}
