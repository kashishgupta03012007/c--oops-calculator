#include "calculator.h"

#include <iostream>
#include <cmath>

using namespace std ;

void calculator :: setvalues(float num1 , float num2)
{
    value1 = num1 ;
    value2 = num2 ;
}

float calculator :: addition ()
{
    return value1 + value2 ;
}

float calculator :: subtraction ()
{
    return value1 - value2 ;
}

float calculator :: multiplication ()
{
    return value1 * value2 ;
}

float calculator :: division ()
{

    if ( value2 == 0 )
    {
        cout << " \n !! DIVISION BY 0 IS NOT ALLOWED !! " ;
        return 0 ;
    }
    
    return value1 / value2 ;
} 

float calculator :: modulus ()
{
    return fmod ( value1 , value2 ) ;
}

float calculator :: power ()
{
    return pow( value1 , value2 ) ;
}

float calculator :: squareroot ()
{
    if ( value1 < 0 )
    {
        cout << "\n !!CANNOT CALCULATE SQUAREROOT OF NEGATIVE NUMBERS !! " ;
        return 0 ;
    }
    
    return sqrt ( value1 );
}