#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  
/*Constructor for an Inventory object*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*Checking if an item is an stock and making a sale
 *ultimately decreasing stock.
 */

void Inventory::sell()
{
  if(m_in_stock == 0){
    std::cout<<"Sorry, that item is out of stock"<<std::endl;
  }
  else{
  m_in_stock--;
  }
}

/*Transaction statement*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
