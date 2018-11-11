#include <iostream>
using namespace std;
int quantità;
bool superstar = false;
void inizializza(); // verranno chiesti i la quantità di numeri da inserire e la possibilità di fare una giocata "Superstar";

int main(){
  inizializza();
}

void inizializza(){
  char risp;
  do{
  cout << "Salve, quanti numeri dedisera giocare? ";
  cin >> quantità;
}while(quantità>12);
 cout << "Vuole giocare il Superstar? ";
 cin >> risp;
 if(risp=='Si'||risp=='si'||risp=='SI') superstar=true;
}
