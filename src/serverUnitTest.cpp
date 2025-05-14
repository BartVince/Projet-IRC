#include "serverUnitTest.h"
#include "server/server.h"

char* SimulateMessageToServer(char* message, char* delimiter) {
    
    Server serv;

    char* messageCopy = strdup(message);
    char* parsedResponse[1024] = {0};
    char* token = strtok(messageCopy, delimiter);

    int i = 0;

    while (token != NULL) {
        
        if (i >= 1024) { break; }

        parsedResponse[i] = token;
        token = strtok(NULL, delimiter);
        i++;
    }

    parsedResponse[i] = NULL;

    char* result = serv.ProcessMessage(parsedResponse);

    return result;

}
