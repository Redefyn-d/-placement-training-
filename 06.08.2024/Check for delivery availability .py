a=input("Enter the address: ")
for i in a.split():
    if "ksr" in i.lower():
        print("Delivery not available")
    else:
        print("Delivery available")
