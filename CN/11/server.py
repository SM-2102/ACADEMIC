import socket

def xor(a,b):
    result = []
    for i in range(1,len(b)):
        if a[i] == b[i]:
            result.append('0')
        else:
            result.append('1')
    return ''.join(result)

def mod2div(dividend, divisor):
    pick = len(divisor)
    temp = dividend[0:pick]

    while(pick<len(dividend)):
        if temp[0] == '1':
            temp = xor(temp,divisor)+dividend[pick]
        else:
            temp = xor('0'*pick,temp)+dividend[pick]
        pick = pick+1

    if temp[0] == '1':
       temp = xor(temp,divisor)
    else:
        temp = xor('0'*pick,temp)

    return temp

def decodeData(data,div):
    return mod2div(data,div)

server_ip = '127.0.0.1'
server_port = 12345

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((server_ip, server_port))
server_socket.listen()
print("Server is listening on", server_ip, "port", server_port)

while True:
    client_socket, client_address = server_socket.accept()
    print("Client connected from", client_address)

    response = client_socket.recv(1024).decode()
    div = input("Enter divisor : ")
    remainder = decodeData(response, div)
    if '1' in remainder:
        print("Error detected.")
    else:
        print("No error detected.")

    client_socket.close()
    