#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
    public:
        virtual ~PreMadeItem();
        PreMadeItem(std::string name, std::string size);
        virtual std::string composeItem();
        virtual double getPrice();

    private:
        std::string name;

};

#endif