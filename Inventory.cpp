#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  
Inventory::Inventory(string name, float price, int count)
{
  /*
   * Constructor for Inventory Class
   * Takes string, float, int for name of item to sell, price of item, and number of item in inventory
   */
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

void Inventory::sell()
{
  /*
   * Public Method sell
   * Return: Void
   * Arguments: None
   *
   * Decrements the item from inventory as long as there is more than 0 items in inventory.
   * Otherwise it prints "Sorry that item is out of stock" and returns
   */
  if(m_in_stock <= 0)
  {
    std::cout << "Sorry, that item is out of stock" << std::endl;
  }
  else
  {
    m_in_stock--;
  }
}

ostream& operator<<(ostream& stream, const Inventory& item)
{
  /*
   * Overload operator for the stream operator <<
   * Will print out proper formatting to the print of Inventory
   */
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
