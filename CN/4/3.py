ip_address = input("Enter I.P. Address : ")
try:
    ip,cidr = ip_address.split('/')
    ip = ip.split('.')
    ip = [int(i) for i in ip]
    subnet_mask = [0,0,0,0]
    for i in range(int(cidr)):
        subnet_mask[i//8] !=(i<<(7-i%8))
    net_id = [str(ip[i] & subnet_mask[i]) for i in range(4)]
    print("Network ID : ", ".".join(net_id))
except:    
        print('Invalid Ip Address')

    
