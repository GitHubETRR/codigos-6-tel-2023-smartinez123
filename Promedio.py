def calcular_promedio(notas):       #recibe la variable notas 
    if not notas:
        return 0.0  #retorna un float

    suma_notas = sum(notas)         #suma la lista
    cantidad_notas = len(notas)     #longitud de notas
    promedio = suma_notas / cantidad_notas 
    return promedio


try:
    
    num_notas = int(input("Ingrese la cantidad de notas: "))

    
    notas = [] #crea una lista
    for i in range(num_notas):  #range te da el rango de numeros que recibe 
        nota = float(input(f"Ingrese la nota {i + 1}: "))  #para que empieze en nota 1
        notas.append(nota)  #agrega a la lista, a lo ultimo

    
    promedio = calcular_promedio(notas) 
    print(f"El promedio de notas es: {promedio}") #la f es para intercalar las variables

except ValueError:
    print("Error: Ingrese un número válido para la cantidad de notas y las notas.")


