#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include "IceCreamItem.h"
#include <map>
#include <vector>

class CustomItem : public IceCreamItem {
    public:
        virtual ~CustomItem();
        CustomItem(std::string size);
        void addTopping(std::string topping);
        virtual std::string composeItem(); 
        virtual double getPrice();
    private:
        std::map<std::string, int> toppingAmount;
};

#endif