//primer programa en c

#include <iostream>
#include<math.h>
using namespace std;

int main (){
     float a,b,c,resultado1= 0 , resultado2= 0 ;
     
     cout<<"digite valor de a :"; cin>>a;
     cout<<"digite  valor de b :"; cin>>b;
    cout<<"digite  valor de c :"; cin>>c;
     
     resultado1= (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
      resultado2= (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
 
     cout.precision (2);
     
     cout<<"\nEl el resultado1 es :"<<resultado1<<endl;
     cout<<"\nEl el resultado2 es :"<<resultado2<<endl;
	
	system ("pause");
	return 0;
}
