#include <iostream>
#include <iostream>
#include <new>


using namespace std;

int main ()

{
	
int * p1 = new int;                      // pointeur sur un entier
*p1 = 1;                                // ecrit 1 dans la zone mémoire allouée
cout << *p1 << endl;                    //  là on lit et  on affiche le contenu de la zone mémoire allouée
delete p1;                              // libère la zone mémoire allouée

}
