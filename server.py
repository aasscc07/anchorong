import socketserver
import socket
import os
import sys
import time


class MyTCPHandler(socketserver.BaseRequestHandler):
    def handle(self):
        
        # self.data = self.request.recv(1024).strip()
        # print("{} wrote".format(self.client_address[0])),
        # print(self.data)
        self.data = str(input(">>:"))
        self.request.send(self.data.encode())
        self.received = self.request.recv(1024)
        print("\n{}\n".format(self.received.decode()))


if __name__ == "__main__":
    HOST = "localhost"
    PORT = 3333

    server = socketserver.TCPServer((HOST,PORT),MyTCPHandler)

    print("waiting for connection...")

    
    server.serve_forever()

#/////////////////////////////////////////////////////////////////#



# import socket
# import time
# server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#18.220.144.38
# host = socket.gethostbyaddr('ec2-18-220-144-38.us-east-2.compute.amazonaws.com')[0]

# server.bind((host,9000))
# #서버의 아이피와 포트번호 지점
# #ec2-18-220-144-38.us-east-2.compute.amazonaws.com
# while True:

#     server.listen(0)

#     client, addr = server.accept()
#     data = client.recv(65535)
#     if (str(data).count("1")) > 0:
#         print("recieve Data : ",str(data.decode())[1:])
#         str_A = str(data.decode())[1:]
#         time.sleep(1)

#     elif (str(data).count("2")) > 0:
#         client.sendall(str_A.encode())
#         time.sleep(1)
#     #data_decode = data.decode()
#     #print("recieve Data : ",data.decode())
#     #client.sendall(data)
#     #time.sleep(1)


#/////////////////////////////////////////////////////////////////#

# class send_command_class(MyTCPHandler):
#     def __init__(self,HOST,PORT):
#         self.HOST = HOST
#         self.PORT = PORT
        
#     def connect_class(self):
#         server = socketserver.TCPServer((self.HOST,self.PORT),MyTCPHandler)
#         server.serve_forever()
    

        

# def check_send_command(command):
#     if command == "exit":
#         exit()
    

# if __name__ == "__main__":
#     HOST = "localhost"
#     PORT = 3333
#     server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#     server.bind((HOST,PORT))
#     while True:

#         server.listen(0)

#         client, addr = server.accept()
#         data = client.recv(65535)
#         if (str(data).count("1")) > 0:
#             print("recieve Data : ",str(data.decode())[1:])
#             str_A = str(data.decode())[1:]
#             time.sleep(1)

#         elif (str(data).count("2")) > 0:
#             client.sendall(str_A.encode())
#             time.sleep(1)
#         #data_decode = data.decode()
#         #print("recieve Data : ",data.decode())
#         #client.sendall(data)
#         #time.sleep(1)
#     while True:
        
#         send_command = str(input(">"))
#         check_send_command(send_command)
    