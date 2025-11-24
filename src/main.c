#include <stdio.h>
#include <stdlib.h>
#include "server.h"

// ./server [port]
int main(int argc, char **argv) {
    int port = 8080; // Default port

    if (argc >= 2) {
        port = atoi(argv[1]);
        if (port <= 0 || port > 65535) {
            fprintf(stderr, "Invalid port number: %s\n", argv[1]);
            return 1;
        }
    }

    server_config_t config;
    if (server_init(&config, port) != 0) {
        fprintf(stderr, "Failed to init server\n");
        return 1;
    }

    printf("[main] starting server on port %d\n", port);
    int rc = server_run(&config);

    server_shutdown(&config);
    return rc;
}
