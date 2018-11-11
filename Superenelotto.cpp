#include <iostream>
using namespace std;
int quantità;
bool superstar = false;
void inizializza(); // verranno chiesti i la quantità di numeri da inserire e la possibilità di fare una giocata "Superstar"
float costoschedina(); //calcola il costo della schedina in base alle risposte
void chiedinumeri();// chiede i numeri che desidera giocare e se è anche il numero superstar
int giocata[12]; //sequenza di numeri della giocata
int super; //numero valido per superstar;


int main(){
  inizializza();
  chiedinumeri();
}

void inizializza(){
  char accetta;
  do {
  char risp;
  do{
      cout << "Salve, quanti numeri dedisera giocare? ";
      cin >> quantità;
 }while(quantità>12);
      cout << "Vuole giocare il Superstar? (premere s o S in caso di risposta affermativa)";
 cin >> risp;
 if(risp=='S'||risp=='s') superstar=true;
 cout << superstar;
 cout << "il costo della schedina è di: " << costoschedina() << " euro, desidera continuare? ";
 cin >> accetta;
   }while(accetta=='n'||accetta=='N');
}

float costoschedina(){
  float costo = 0;
  costo = 1*quantità;
  if(superstar)costo=costo+quantità*0.5;
  return costo;
}

void chiedinumeri(){
  cout << "quali sono i numeri che desidera giocare? ";
  for(int i = 0; i < quantità; i++){ 
    cin >> giocata[i];
  }
  if (superstar){
    cout<<"inserisca il numero valido per il superstar: ";
    cin>>super;
  }
}
