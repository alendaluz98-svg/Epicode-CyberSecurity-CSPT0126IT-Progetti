import math
print("Scegli la figura: 1)Quadrato 2) Rettangolo 3) Pentagono")
scelta = input("Inserisci il numero della figura: ")
if scelta == "1":
    lato = float(input("Inserisci la lunghezza del lato: "))
    perimetro = lato * 4
    print("Il perimetro del quadrato è:", perimetro)
elif scelta == "2":
    base = float(input("Inserisci la lunghezza della base: "))
    altezza = float(input("Inserisci la lunghezza dell'altezza: "))
    perimetro = 2 * (base + altezza)
    print("Il perimetro del rettangolo è:", perimetro)
elif scelta == "3":
    lato = float(input("Inserisci la lunghezza del lato: "))
    perimetro = lato * 5
    print("Il perimetro del pentagono è:", perimetro)
