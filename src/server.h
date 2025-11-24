#ifndef SERVER_H
#define SERVER_H

// Holds configuration + state for the server.
typedef struct {
    int port;       // which port the server listens on
    int listen_fd;  // listening socket file descriptor
} server_config_t;

// Initialize the server (we'll add real logic later).
// Returns 0 on success, non-zero on error.
int server_init(server_config_t *config, int port);

// Main server loop (stub for now).
int server_run(server_config_t *config);

// Clean up any resources.
void server_shutdown(server_config_t *config);

#endif // SERVER_H
