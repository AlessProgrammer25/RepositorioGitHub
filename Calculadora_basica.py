def mostrar_menu():
    print("Calculadora básica")
    print("1. Sumar")
    print("2. Restar")
    print("3. Multiplicar")
    print("4. Dividir")
    print("5. Salir")

while True:
    mostrar_menu()
    opcion = input("Elegí una opción (1-5): ")

    if opcion == "5":
        print("¡Hasta luego! 👋")
        break

    num1 = float(input("Ingresá el primer número: "))
    num2 = float(input("Ingresá el segundo número: "))

    if opcion == "1":
        print(f"Resultado: {num1 + num2}")
    elif opcion == "2":
        print(f"Resultado: {num1 - num2}")
    elif opcion == "3":
        print(f"Resultado: {num1 * num2}")
    elif opcion == "4":
        if num2 != 0:
            print(f"Resultado: {num1 / num2}")
        else:
            print("Error: no se puede dividir por cero.")
    else:
        print("Opción no válida. Elegí del 1 al 5.")

    print()  
