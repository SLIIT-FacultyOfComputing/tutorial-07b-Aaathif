#include <iostream>
#include "Item.h"
using namespace std;




int main() {
    Item myItem;
    myItem.display();
    Item myItem2(100, 1000, 50);
    myItem2.setDiscount(20);
    myItem2.display();
    
    return 0;
}

// DO NOT CHANGE ABOVE CODE

