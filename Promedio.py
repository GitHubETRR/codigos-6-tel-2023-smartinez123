def calcular_promedio(notas):
    if not notas:
        return 0.0  

    suma_notas = sum(notas)
    cantidad_notas = len(notas)
    promedio = suma_notas / cantidad_notas
    return promedio

def main():
    try:
        
        num_notas = int(input("Ingrese la cantidad de notas: "))

        
        notas = []
        for i in range(num_notas):
            nota = float(input(f"Ingrese la nota {i + 1}: "))
            notas.append(nota)

       
        promedio = calcular_promedio(notas)
        print(f"El promedio de notas es: {promedio}")

    except ValueError:
        print("Error: Ingrese un número válido para la cantidad de notas y las notas.")

if __name__ == "__main__":
    main()
