#include <iostream>
using namespace std;

int main() 
{
    int i, acqua, somma;
    somma = 0;
    for (i=1; i<=7; i=i+1)
    {
      cout << "giorno " << i << endl;
      cout << "inserire il livello dell'acqua di oggi" << endl;
      cin>>acqua;
      somma = somma + acqua;
      if (acqua>0)
      {
        if (acqua>10)
        {
            cout <<"acqua alta" << endl;
            cout << "nel giorno " << i << " l'acqua supera il livello di 10 cm" << endl; 
        }
        else 
        {
            cout << "acqua alta" << endl;
        }
      }
      else
      {
        cout << "livello normale" << endl; 
      }
      

    }
    cout << "la media del livello dell'acqua settimanale è di " << somma/7 << endl;

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
