#include "CustomItem.h" 
#include <sstream>
#include <iomanip>

CustomItem::~CustomItem(){
    
}
CustomItem::CustomItem(std::string size) : IceCreamItem(size){
    if (size == "small"){
        this->size = size;
        this->price = 3.00;
    }
    if(size == "medium"){
        this->size = size;
        this->price = 5.00;
    }
    if (size == "large"){
        this->size = size;
        this->price = 6.50;
    }  
}

void CustomItem::addTopping(std::string topping){
    toppingAmount[topping] ++;
    price += 0.40;
}

double CustomItem::getPrice(){
    return this->price;
}

std::string CustomItem::composeItem(){
    std::ostringstream oss;
  
    oss << "Custom Size: " << this->size << std::endl
        << "Toppings:" << std::endl;
    
    for (auto i = toppingAmount.begin(); i != toppingAmount.end(); ++i){
        oss << i->first << ": " << std::to_string(toppingAmount[i->first]) << " oz";
        oss << std::endl;
    }

    oss << "Price: $" << std::fixed << std::setprecision(2) << this->price << std::endl;

    return oss.str();
}