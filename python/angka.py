a = int(input("Masukkan angka pertama: "))
b = int(input("Masukkan angka kedua: "))

if a > b:
    print(f"{a} lebih besar dari.") 
elif a < b:
    print(f"{b} lebih kecil dari.")    
else:
    print("Kedua angka sama besar.")

print("apakah keduanya sama ?", a == b)