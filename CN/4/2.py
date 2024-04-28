import ipaddress
 
def calculate_subnet_info(ip_address, subnet): 
    try:
        # Validate IP address using ipaddress library
        network = ipaddress.ip_interface(f"{ip_address}/{subnet}")
    except (ValueError, ipaddress.AddressValueError) as e:
        raise ValueError(f"Invalid IP address or Subnet: {e}")
 
    subnet_mask = str(network.netmask)
    subnetwork_address = str(network.network)
 
    return subnet_mask, subnetwork_address
 
 
ip_address = input("Enter an IP address (e.g., 192.168.1.0): ")
subnet = int(input("Enter the Subnet (e.g., 24): "))
 
try:
        subnet_mask, subnetwork_address = calculate_subnet_info(ip_address, subnet)
        print(f"Subnet Mask: {subnet_mask}")
        print(f"Subnetwork Address: {subnetwork_address}")
except ValueError as e:
        print(f"Error: {e}")