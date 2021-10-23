#include <iostream>
using namespace std;

// Provjeriti da li je unijeti broj x prost.

int main() {
  int x;
  int i = 2;

cout<<"Unesite jedan broj: ";
cin>> x;

while (i<=x){
 if(x%i==0 && i<x){
   cout<<"Broj je prost.";
   break;
   }
 else if (x==i){
  cout<< "Broj nije prost.";
  break;
 }
 else 
  i++;
}
return 0;
}