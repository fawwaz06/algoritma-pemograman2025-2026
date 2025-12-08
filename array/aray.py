nim = input("Masukkan NIM: ")

# Ubah ke array digit
arr = [int(x) for x in nim]

# Perhitungan
total_digit = sum(arr)
maks = max(arr)
minim = min(arr)
rata = total_digit / len(arr)
reverse_arr = arr[::-1]

print("Array digit       :", arr)
print("Total digit       :", total_digit)
print("Digit terbesar    :", maks)
print("Digit terkecil    :", minim)
print("Rata-rata digit   :", rata)
print("Reverse array     :", reverse_arr)