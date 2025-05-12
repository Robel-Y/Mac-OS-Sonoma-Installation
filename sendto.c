#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_PORT 8080
#define SERVER_IP "127.0.0.1"
#define MESSAGE "Hello"

int main() {
    int sockfd;
    struct sockaddr_in server_addr;
    char *message = MESSAGE;

    // Create a UDP socket
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        return 1;
    }

    // Define server address
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    // Send message using sendto
    ssize_t sent_bytes = sendto(sockfd, message, strlen(message), 0,
                                (struct sockaddr *)&server_addr, sizeof(server_addr));
    if (sent_bytes < 0) {
        perror("sendto failed");
        close(sockfd);
        return 1;
    }

    printf("Message sent to server: %s\n", message);

    // Close the socket
    close(sockfd);
    return 0;
}
