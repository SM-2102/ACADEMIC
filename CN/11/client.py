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

def encodeData(data,div):
    div_len = len(div)
    data_send = data+'0'*(div_len-1)
    remainder = mod2div(data_send,div)
    return data+remainder

server_ip = '127.0.0.1'
server_port = 12345

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((server_ip, server_port))

data = input("Enter data : ")
div = input("Enter divisor : ")
encoded_data = encodeData(data, div)
print("Data sent :", encoded_data)
client_socket.sendall(encoded_data.encode())

client_socket.close()