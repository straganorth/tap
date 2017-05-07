#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define TappingCoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "tappingcoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
