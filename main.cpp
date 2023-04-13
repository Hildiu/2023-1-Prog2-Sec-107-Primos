#include <iostream>
#include "Ufunciones.h"

using namespace std;

int main()
{
   unsigned int numero;

   do{
       cout << "Numero : ";
       cin >> numero;
   }while(numero <=10);

   cout << "\n";
   cout << "El siguiente numero primo es: " << sgtePrimo(numero) << "\n";
   cout << "El anterior numero primo  es: " << anteriorPrimo(numero) << "\n";


    return 0;
}



/*
 *
 * Archivos
 * cMakeLists.txt
 * main.cpp
 *
 * UFunciones.cpp
 * UFunciones.h
 *
 */
