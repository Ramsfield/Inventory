#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/*
 * A simple Inventory class that holds the item name, the price of the item, and the number of items in stock
 * Contains sell() method that will simulate the sale of an item and decrement the number of items in the inventory
 */
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
