import random
import math

lower = int(input("Ingresar limite inferior:- "))
 

upper = int(input("Ingresar limite superior:- "))
 


x = random.randint(lower, upper)
print("\n\tSolo tenes ",
       round(math.log(upper - lower + 1, 2)),
      " chances de adivinar el entero!\n")
 

count = 0
 

while count < math.log(upper - lower + 1, 2):
    count += 1
 

    guess = int(input("Adivina el numero:- "))
 
 
    if x == guess:
        print("Felicitaciones, lo hiciste en ",
              count, " veces")

        break
    elif x > guess:
        print("Muy chico!")
    elif x < guess:
        print("Muy grande!")
 

if count >= math.log(upper - lower + 1, 2):
    print("\nEl numero es %d" % x)
    print("\tLe erraste!")
