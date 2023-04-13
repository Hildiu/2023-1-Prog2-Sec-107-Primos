//
// Created by mbermejo on 13/04/2023.
//

#include "Ufunciones.h"


bool esPrimo(unsigned int num)
{ unsigned int divisor;
    if(num ==1)
        return false;
    divisor=2;
    while(divisor<num && num % divisor !=0)
        divisor++;
    if(divisor==num)
        return true;
    else
        return false;
}


unsigned int sgtePrimo(unsigned int num)
{
    unsigned int i = num + 1;

     while( !(esPrimo(i)))
       i++;
     return i;
}


unsigned int anteriorPrimo(unsigned int num)
{ unsigned int i= num-1;
    while(  !(esPrimo(i)))
        i--;
    return i;
}