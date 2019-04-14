//
// Created by HHL on 2019/3/25.
//

#ifndef CPPLEARN_MONITOR_H
#define CPPLEARN_MONITOR_H



static const int TEST = 8;
#include <cmath>
#include <ostream>
class basemonitor {
private:
    double length;
    double height;
public:
    basemonitor(double length, double height);

    friend std::ostream &operator<<(std::ostream &os, const basemonitor &monitor1);

};


#endif //CPPLEARN_MONITOR_H
