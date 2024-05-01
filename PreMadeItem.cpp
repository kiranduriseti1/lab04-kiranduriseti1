#include "PreMadeItem.h"
#include <sstream>
#include <iomanip>

PreMadeItem::~PreMadeItem(){

}

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size){
    if (size == "small"){
        this->size = size;
        this->price = 4.00;
    }
    if(size == "medium"){
        this->size = size;
        this->price = 6.00;
    }
    if (size == "large"){
        this->size = size;
        this->price = 7.50;
    } 
    this->name = name;

}

double PreMadeItem::getPrice(){
    return this->price;
}

std::string PreMadeItem::composeItem(){
    std::ostringstream oss;
  
    oss << "Pre-made Size: " << this->size << std::endl
        << "Pre-made Item: " << this->name << std::endl
        << "Price: $" << std::fixed << std::setprecision(2) << this->price << std::endl;

    return oss.str();
}