#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int i = 8;
int *p; // déclaration d’un pointeur sur entier
cout<<"VOICI i : "<<i;
cout<<"\nVOICI SON ADRESSE  : "<<&i;
p = &i; // p contient l’adresse de i, ont peut dire qu’il pointe sur i
cout<<"\nVOICI SON ADRESSE EN UTILISANT POINTEUR : "<<p;
cout<<"\nVOICI SA VALEUR EN UTILISANT POINTEUR : "<<*p;

}
