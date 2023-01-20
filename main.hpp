#include <string>
#include <vector>

class Currency {

    //Attribute
    std::string name;
    double amount;

    //Method
    public:
        std::string add_name(std::string name_currency);
        std::string get_name();

        double add_amount(double add_amount);
        double get_amount();

    //Constructor
    Currency(std::string name_currency, double add_amount);



};


