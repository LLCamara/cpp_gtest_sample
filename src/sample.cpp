//
// Created by Leonardo Camara on 5/7/17.
//

#include "sample.h"

Sample::Sample() {
    i = 10;
}

Sample::Sample(int _i) {
    i = _i;
}

int Sample::get_int() {
    return this->i;
}