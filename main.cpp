#include <iostream>
#include "main.hpp"


int main() {
    /* Afin de rendre plus facile la conversion des monnaies,
      j'ai renseigné les valeurs en dollars de chaque monnaie */

    std::vector<Currency>  currencies;
        Currency Euro("Euro", 0.92);
        currencies.push_back(Euro);
        Currency Dollar("Dollar", 1);
        currencies.push_back(Dollar);
        Currency Yen("Yen", 128.42);
        currencies.push_back(Yen);
        Currency Francs_suisse("Francs Suisse", 0.92);
        currencies.push_back(Francs_suisse);


    int choix_1;
    int choix_2;

    float a, b;

    std::string nom_1;
    std::string nom_2;

    float montant_origine;
    float montant_arrivee;

    //Choix de la premiere monnaie
        std::cout << "Veuillez choisir entre :\n";
    for (int i = 0; i < currencies.size(); i++){
        std::cout << i+1 << ") " << currencies[i].get_name()<< "\n";
    }

    std::cin >> choix_1;

    a = currencies[choix_1-1].get_amount();
    nom_1 = currencies[choix_1-1].get_name();

    //Montant à changer
    std::cout << "Veuillez entrer le montant : ";
    std::cin >> montant_origine;

    //Choix de la deuxième monnaie
    std::cout << "Veuillez choisir entre :\n";
    for (int i = 0; i < currencies.size(); i++){
        std::cout << i+1 << ") " << currencies[i].get_name()<< "\n";
    }
    std::cin >> choix_2;

    b = currencies[choix_2-1].get_amount();
    nom_2 = currencies[choix_2-1].get_name();




    montant_arrivee = (a/b)*montant_origine;

    std::cout << "Pour " << montant_origine <<" "<< nom_1 << " vous avez "<< montant_arrivee << " " << nom_2 <<".";

}
