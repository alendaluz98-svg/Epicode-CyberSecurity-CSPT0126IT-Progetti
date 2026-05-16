import math
figure = ["Triangolo", "Rettangolo", "Cerchio", "Trapezio", "Esagono"]
valore_corrente = float(input("Valore lato/raggio/base maggiore: "))
while figure:
    scelta = input("Scegli una figura geometrica: ")
    if scelta == "Triangolo":
        lato = valore_corrente
        perimetro = 3 * lato
        area = ((math.sqrt(3) / 4) * lato ** 2)
        print(f"Perimetro del triangolo: {perimetro}")
        print(f"Area del triangolo: {area}")
        valore_corrente = area
        figure.remove("Triangolo")
    elif scelta == "Rettangolo":
        base = valore_corrente
        altezza = base / 2
        perimetro = 2 * (base + altezza)
        area = base * altezza
        print(f"Perimetro del rettangolo: {perimetro}")
        print(f"Area del rettangolo: {area}")
        valore_corrente = area
        figure.remove("Rettangolo")
    elif scelta == "Cerchio":
        raggio = valore_corrente
        perimetro = 2 * (math.pi * raggio)
        area = math.pi * (raggio ** 2)
        print(f"Perimetro del cerchio: {perimetro}")
        print(f"Area del cerchio: {area}")
        valore_corrente = area
        figure.remove("Cerchio")
    elif scelta == "Trapezio":
        base_maggiore = valore_corrente
        base_minore = base_maggiore / 2
        altezza = base_minore / 2
        lato1 = math.sqrt(((base_maggiore - base_minore) / 2) ** 2 + altezza ** 2)
        lato2 = lato1
        perimetro = base_maggiore + base_minore + lato1 + lato2
        area = (base_maggiore + base_minore / 2) * altezza
        print(f"Perimetro del trapezio: {perimetro}")
        print(f"Area del trapezio: {area}")
        valore_corrente = area
        figure.remove("Trapezio")
    elif scelta == "Esagono":
        lato = valore_corrente
        perimetro = 6 * lato
        area = ((3 * math.sqrt(3) / 2) * lato ** 2)
        print(f"Perimetro dell'esagono: {perimetro}")
        print(f"Area dell'esagono: {area}")
        valore_corrente = area
        figure.remove("Esagono")
    else:
        print("Scelta non valida. Riprova.")
    
    
    