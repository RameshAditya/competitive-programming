#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){	
	struct sockaddr_in client_address;
	
	client_address.sin_family = AF_INET;
	client_address.sin_port = htons(9002);
	client_address.sin_addr.s_addr = INADDR_ANY;
	
	int net_socket = socket(AF_INET, SOCK_STREAM, 0);
	int conn_status = connnect(net_socket, (struct sockaddr*)&client_address, sizeof(client_address));
	printf("Status: %d\n", conn_status);
	char str[50], str2[50];
	printf("Send: ");
	scanf("%s", str);
	write(net_socket, str, sizeof(str));
	listen(net_socket, 1);
	read(net_socket, str2, sizeof(str2));
	printf("Recieved: %s\n", str2);
}
