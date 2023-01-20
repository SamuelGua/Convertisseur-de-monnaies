#include "main.hpp"

// name

std::string Currency::add_name(std::string name_currency) {
    name = std::move(name_currency);
}

std::string Currency::get_name(){
    return name;
}

//amount
double Currency::add_amount(double add_amount) {
    amount = add_amount;
}

double Currency::get_amount() {
    return amount;
}

//Constructor

Currency::Currency(std::string name_currency, double add_amount){
    name = name_currency;
    amount = add_amount;
}
