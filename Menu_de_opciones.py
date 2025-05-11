menu = 
{
    1: "Pizza",
    2: "Hamburguesa",
    3: "Empanadas",
    4: "Sushi"
}

print("🍽️ Bienvenido al sistema de pedidos")
print("Elegí tu comida:")

for opcion, comida in menu.items():
    print(f"{opcion}. {comida}")

seleccion = int(input("Ingresá el número de tu pedido: "))

if seleccion in menu:
    comida_elegida = menu[seleccion]
    cantidad = int(input(f"¿Cuántas unidades de {comida_elegida} querés? "))
    print("\n Resumen del pedido:")
    print(f"Comida: {comida_elegida}")
    print(f"Cantidad: {cantidad}")
    print("¡Gracias por tu pedido!")
else:
    print("Opción inválida. Por favor elegí un número del 1 al 4.")
