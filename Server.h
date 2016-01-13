#ifndef __SERVER_H__
#define __SERVER_H__

#include "Main.h"

#define DEFAULT_PORT 80

void InitializeServer();
EthernetClient GetAvailableClient();

#endif