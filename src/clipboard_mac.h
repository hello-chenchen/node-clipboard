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

#ifndef CCLIB_CLIPBOARD_MAC_H_
#define CCLIB_CLIPBOARD_MAC_H_

// #include <AppKit/AppKit.h>
// #include <AppKit/NSPasteboard.h>
// #include <Foundation/Foundation.h>

#include "clipboard.h"

// namespace cclib {

class ClipboardMac : public Clipboard {

    public:
        ClipboardMac();
        ~ClipboardMac();

    public:
        size_t foo();
};

// }

#endif