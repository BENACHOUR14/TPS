#include <iostream>
#include <iostream>
#include <new>


using namespace std;

int main ()

{
	
int * p1 = new int;                      // pointeur sur un entier
*p1 = 1;                                // ecrit 1 dans la zone m�moire allou�e
cout << *p1 << endl;                    //  l� on lit et  on affiche le contenu de la zone m�moire allou�e
delete p1;                              // lib�re la zone m�moire allou�e

}
