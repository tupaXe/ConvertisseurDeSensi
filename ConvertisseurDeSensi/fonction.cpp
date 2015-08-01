#include "fonction.h"
#include <iostream>
#include <string>
using namespace std;

string afficherLaFormule(string x)
{
    string formules(x);

     if (formules == "oui")
     {
        cout << "La formule est : (OldDPI * Sensi) / newDPI = NewSensi"<<endl;
        cout << "Merci exoje !\n" <<endl;
     }
     else if (formules == "non")
     {
         cout << "Vous ne souhaiter pas voir la formules !\n"<<endl;
     }
     else
     {
         //Cas imposible !
     }

    return formules;
}

const double applicationFormules(double sensi, double dpi, double newDPI)
{
    const double resultat ((sensi * dpi) / newDPI);

    cout << "\nVotre nouvelle sensi avez vos " << newDPI << " vaut "<< resultat<<endl;

    return resultat;
}
