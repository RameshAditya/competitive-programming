#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
	
	struct sockaddr_in seraddr;
	
	seraddr.sin_family = AF_INET;
	seraddr.sin_port = htons(9002);
	seraddr.sin_addr.s_addr = INADDR_ANY;
	
	int sersock = socket(AF_INET, SOCK_STREAM, 0);
	int ser_bind = bind(sersock, (struct sockaddr*)&seraddr, sizeof(seraddr));
	listen(sersock, 1);
	
	struct sockaddr_in cliinfo;
	int csize = sizeof(cliinfo);
	int newsock = accept(sersock, (struct sockaddr*)&cliinfo, &csize);
	
	char str[50], str2[50];
	listen(newsock, 1);
	read(newsock, str, sizeof(str));
	printf("Recieved: %s\n", str);
	printf("Send: ");
	scanf("%s",str2);
	write(newsock, str2, sizeof(str2));
	listen(newsock, 1);
}

//Define server address node
//Define details of server node
//Define type of socket
//Bind socket to server address
//Enable listen
//Define clientinfo node
//Get size of client info node
//Tailor socket connection to accept client info node
//Enable listen
//Send
//Enable listen
