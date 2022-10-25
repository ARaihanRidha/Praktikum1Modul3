A= int (input("Sebuah baris berisi satu buah bilangan cacah dan batas maksimal 99.(a>=0<100) :"))

print("Sebuah baris berisi sebuah bilangan cacah yang merupakan Ejaan dari bilangan tersebut atau batas limit dari bilangan")


if A < 10 and A>0:
    print ("Satuan")
elif A > 10 and A < 20 :
    print("Belasan")   
elif A == 0 :
    print("Nol")   
elif A > 20 and A < 99 :
    print("Puluhan")
elif A > 99 :
    print ("Anda Menginput Melebihi Limit Bilangan")

