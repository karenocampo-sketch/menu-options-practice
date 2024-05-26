// c++ algorithm that reads if the number is greater than or equal to zero

 #include <iostream>
using namespace std;
 int main()
 {
     int num;
     
     cout<<"Ingrese un numero"<<endl;
     cin>>num;
     
     if (num > 0 )
     {
         cout<<"mayor a 0"<<endl;
     }
      if (num < 0){
         cout<<" es menor que 0"<<endl;
     }else if(num <= 0){
         cout<<" es mayor o igual  a 0"<<endl;
     }
    return 0;
 }
