import socket

# Server IP address and port
server_ip = '192.168.4.208'  # Replace with the IP address of Raspberry Pi 1
server_port = 5000
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((server_ip, server_port))

server_socket.listen(1)

print('Server listening on {}:{}'.format(server_ip, server_port))

client_socket, client_address = server_socket.accept()
print('Connected to:', client_address)

data = 'Signal received'
client_socket.sendall(data.encode())

client_socket.close()
server_socket.close()
