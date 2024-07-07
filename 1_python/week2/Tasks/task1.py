


def Init_PORTA_DIR(Input):
    DDRA=Input
    print("DDRA = 0b:{:8b}".format(DDRA))

i=0
value=0b0
while i<8:
    mode=input(f"please Enter Bit {i} mode : ")
    if mode == 'in':
        value  = value | (1<<i)
        i+=1
    elif mode == 'out':
        value  = value | (0<<i)
        i+=1
    else: 
        print(" wrong Input ")

Init_PORTA_DIR(value)