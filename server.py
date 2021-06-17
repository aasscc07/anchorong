import socketserver
import socket

class MyTCPHandler(socketserver.BaseRequestHandler):
    def handle(self):
        self.data = self.request.recv(1024).strip()
        print("{} wrote".format(self.client_address[0])),
        print(self.data)

        self.request.sendall(self.data.upper())


if __name__ == "__main__":
    HOST = "18.220.144.38"
    PORT = 3333

    server = socketserver.TCPServer((HOST,PORT),MyTCPHandler)

    print("waiting for connection...")

    server.serve_forever()