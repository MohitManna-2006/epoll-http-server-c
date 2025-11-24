#include "server.h"
#include <stdio.h>

// Initialize the server config.
// For now, just store the port and set listen_fd to an invalid value.
// Later we'll create socket/bind/listen here.
int server_init(server_config_t *config, int port) {
    config->port = port;
    config->listen_fd = -1;  // placeholder; real socket fd later
    printf("[server] init on port %d (stub)\n", port);
    return 0;                // 0 = success
}

// Main server loop.
// Right now it's just a stub that prints a message.
// Later this will block in accept/epoll handling connections.
int server_run(server_config_t *config) {
    (void)config; // avoid "unused parameter" warning for now
    printf("[server] run (stub) – epoll loop will go here.\n");
    return 0;
}

// Shutdown hook.
// Later we'll close sockets, destroy thread pools, etc.
void server_shutdown(server_config_t *config) {
    (void)config;
    printf("[server] shutdown (stub)\n");
}
