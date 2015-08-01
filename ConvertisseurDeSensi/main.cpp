#include <iostream>
#include "fonction.h" //Inclure mes prototype de fonction.h !
#include <string>

using namespace std;

int main()
{
    //Titre
    cout << "\t\tCONVERTISSEUR DE SENSIBILITER"<< endl;

    cout << "-Voulez vous voir la formules ?"<< endl;

    string voireFormules ("SansChoix");

    do
    {
        cout << "Choix : ";
        cin >> voireFormules;
    }while(voireFormules != "oui" && voireFormules != "non");

    afficherLaFormule(voireFormules); //Appel de la fonction AfficherLaFormule !

    //Cette valeur changera donc pas de constante
    int nombreDPI (0); //initialiser a 0
    double sensibiliter (0.0);
    int newDPI(0); //NewDPI initialiser a 0
    do
    {
        cout << "Quel sont vos DPI : ";
        cin >> nombreDPI;
        if (nombreDPI > 0)
        {
            do
            {
                cout << "Quel est votre sensibiliter : ";
                cin >> sensibiliter;
            }while(sensibiliter == 0.0);

            if (sensibiliter != 0.0)
            {
                do
                {
                    cout << "Le nouveau DPI : ";
                    cin >> newDPI;
                }while(newDPI < 0);
            }
        }
    }while(nombreDPI < 0);

    applicationFormules(sensibiliter, nombreDPI, newDPI);

    return 0;
}
