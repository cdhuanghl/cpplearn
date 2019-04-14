#include <iostream>
#include "basemonitor.h"
 const int ay[4]={1,2,3,4};

int main() {
    basemonitor m(10,20);
    const int & p= ay[1];
    std::cout<< m<<&TEST<<std::flush<<8; 
    return 0;
}
