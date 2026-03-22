#include<iostream>
#include "calculator.h" 
using namespace std ;

int main ()

{
    calculator calculate ;

    float num1 , num2 ;

    int choice ;

    cout << "ENTER FIRST NUMBER : " ;
    cin >> num1 ;

    cout << "\nENTER SECOND NUMBER : " ;
    cin >> num2 ;

    calculate.setvalues ( num1 , num2 ) ;

    cout << "\n 1. ADDITION " ;
    cout << "\n 2. SUBTRACTION " ;
    cout << "\n 3. MULTIPLICATION  " ;
    cout << "\n 4. DIVISION " ;
    cout << "\n 5. MODULUS" ;
    cout << "\n 6. POWER " ;
    cout << "\n 7. SQUAREROOT " ;

    cout << "\n ENTER THE CHOICE :  " ;

    cin  >> choice ;

    switch ( choice ) 
    {
        case 1 : 
        cout << "\n RESULT OF ADDITION : " << calculate.addition() ;
        break ;

        case 2 :
        cout << "\n RESULT OF SUBTRACTION : " << calculate.subtraction() ;
        break ;
        
        case 3 : 
        cout << "\n RESULT OF MULTIPLICATION : " << calculate.multiplication() ;
        break ;
    
        case 4 : 
        cout << "\n RESULT OF DIVISION : " << calculate.division() ;
        break ;

        case 5 :
        cout << "\n RESULT OF MODULUS : " << calculate.modulus() ;
        break ;

        case 6 :
        cout << "\n RESULT OF POWER : " << calculate.power() ;
        break ;

        case 7 :
        cout << "\n RESULT OF SQUAREROOT : " << calculate.squareroot() ;
        break ;

        default :
        cout << "\n !!! INVALID CHOICE !!! " ;
    }

    cout << " \n ---------------------------------------------------------------------------" ;

return 0 ;


}