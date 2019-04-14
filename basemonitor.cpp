//
// Created by HHL on 2019/3/25.
//

#include "basemonitor.h"


basemonitor::basemonitor(double length, double height) : length(length), height(height) {}

std::ostream &operator<<(std::ostream &os, const basemonitor &monitor1) {
    os << "length: " << monitor1.length << " height: " << monitor1.height << &TEST;
    return os;
}
