import random
import math

lower = int(input("Ingresar limite inferior:- "))
 

upper = int(input("Ingresar limite superior:- "))
 


x = random.randint(lower, upper)   #te agarra un numero de random entre los limites 
print("\n\tSolo tenes ",
       round(math.log(upper - lower + 1, 2)),   #round te redondea, logaritmo de la cuenta en base 2
      " chances de adivinar el entero!\n")
 

count = 1 
 

while count <= round(math.log(upper - lower + 1, 2)): #si el contador es menor a los intentos entra al bucle

 

    guess = int(input("Adivina el numero:- "))
 
 
    if x == guess:                          
        print("Felicitaciones, lo hiciste en ",
              count, " veces")

        break
    elif x > guess:
        print("Muy chico!")
    elif x < guess:
        print("Muy grande!")
    count += 1


if count >= round(math.log(upper - lower + 1, 2)): #si tus intentos son mayores a los determinados
    print("\nEl numero es", x)
    print("\tLe erraste!")

    
   
