#include <iostream>
using namespace std ; 

int main()
{
int i ; 
int j ; 
for(i = 1 ; i<=4 ; i++) 
 
{

 for(j=1 ; j<=4 ; j++)
 {
 if(i == 2 & j==2 ||i == 2 & j==3 || i == 3 & j==2 || i == 3 & j==3)
 {
 cout << " ";
 }
 else
 cout <<"*" ;
 }
 cout <<endl;
 //cout << "*";
 }
 //cout <<endl;
}





