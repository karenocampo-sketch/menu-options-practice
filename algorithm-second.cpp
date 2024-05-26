// c++ algorithm that reads a number and prints on the screen if the number is odd or even.
#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout<<"Ingrese un. numero: ";
    cin >>num;
    
    if (num % 2 == 0 ){
        cout <<"El numero "<< num << " es par." << endl; 
    }else{
        cout<<"El numero " << num << " es impar. "<<endl;
    }
    
    
   return 0;

}

