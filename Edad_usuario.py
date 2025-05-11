from datetime import datetime

nombre = input("¿Cómo te llamás? ")
print(f"¡Hola, {nombre}! Bienvenido ")

edad = int(input("¿Cuántos años tenés? "))

anio_actual = datetime.now().year
anio_nacimiento = anio_actual - edad

print(f"Entonces naciste en el año {anio_nacimiento}.")
