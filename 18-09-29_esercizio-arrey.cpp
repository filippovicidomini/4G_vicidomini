//
//esercizio ordinamento di vettore
//
#include <iostream>
using namespace std;
int main(){
    int N, v[10000], temp; //dimensione vettore alta perchè non si puo dichiarare con una variabile
    cout<<"inserisci dimensione vettore: ";
    cin>>N;
    for(int a = 0; a < N; a++){
        cout<<"inserisci valori vettore alla posizione "<<a<<" :";
        cin>>v[a];
    }
    for(int i = 0; i < N; i++){
        for( int j = i + 1; j < N; j++){
            if(v[i] > v[j]){
               temp=v[i];
               v[i]=v[j];
               v[j]=temp;
            }
        }
    }
    for(int l = 0;  l < N; l++){
        cout<<v[l]<<endl;
    }
    return 0;
}
