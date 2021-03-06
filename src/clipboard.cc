/*********************************************************************
 * node-clipboard
 *
 * Copyright (c) 2019 node-clipboard contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/node-clipboard/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/node-clipboard for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#include <iostream>

#include "clipboard.h"

using namespace v8;

namespace cclib {

Clipboard::Clipboard() {
    //TODO:
    flag = 1;
}

Clipboard::~Clipboard() {
    //TODO:
    std::cout << "Clipboard Pure virtual destructor is called\n";
}

} //namespace cclib