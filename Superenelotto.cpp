#include <iostream>
using namespace std;

int quantità;
bool superstar = false;
void inizializza(); // verranno chiesti i la quantità di numeri da inserire e la possibilità di fare una giocata "Superstar"
float costoschedina(); //calcola il costo della schedina in base alle risposte
void chiedinumeri();// chiede i numeri che desidera giocare e se è anche il numero superstar
void generanum();//funzione che estrae i numeri e li stampa a video
int giocata[12]; //sequenza di numeri della giocata
int super; //numero valido per superstar;
int estrazione[6];//lista dei numeri che vengono estratti
int jolly; //è il numero per la vincita superstar

int calcolacombinazioni(); // https://www.matematicamente.it/forum/problema-di-calcolo-combinatorio-t103516.html  sito da dove ho trovato la formula
int fattoriale(int x); //calcola il numero fattoriale di un numero, FUNZIONA


int main(){
  inizializza();
  chiedinumeri();
  generanum();
cout <<  calcolacombinazioni();
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

void generanum(){
    srand (time(NULL)); //serve per potere utilizzare la funzione random
  for(int i = 0; i < 6; i++){
      estrazione[i]=rand()%90;
  }
 jolly=rand()%90;
 cout << "la serie di numeri estratti è: ";
 for(int i = 0; i < 6; i++) cout<< estrazione[i]<<endl;
 if(superstar) cout<< " il numero superstar è: "<< jolly<<endl;
}
//non so se questa funzione vada bene, molto probabilemte non va bene
int calcolacombinazioni(){
  int combinazioni = 0;
  combinazioni = fattoriale(12)/(fattoriale(quantità)*(fattoriale(12-quantità)));
  return combinazioni;
}
int fattoriale(int x){
   int a = x;
   for(int i = 1; i < a; i++) x = x * i;
   return x;
 }
