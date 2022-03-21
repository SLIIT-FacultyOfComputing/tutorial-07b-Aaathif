#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item::Item(){
    itemCode = 0;
    unitPrice = 0;
    dicount = 0;
}
// 5. Implement Overloaded Constructor Implementation
Item::Item(int iCode, float uPrice, float dic){
    itemCode = iCode;
    unitrPice = uPrice;
    dicount = dic;
}
// 6. Implement Destructor (display "Destructor Called")
Item::~Item(){
    cout << "Destructor run for item code = " << itemCode << "and unit price = " << unitrPice << "and dicount = " << dicount << endl;
  
}
void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
