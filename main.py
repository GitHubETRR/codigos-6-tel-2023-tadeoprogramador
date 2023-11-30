import random


def nombrehereo (nombre):
  selector = random.randint(1 , 8)
  match selector:
    case 1:
      nombre = "Super" + nombre
      print(f"Si fues  un superheroe, sería {nombre}")
    case 2:
      nombre = "Mr " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
    case 3:
      nombre = "La mujer " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
    case 4:
      nombre = "El poderoso " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
    case 5:
      nombre = "El hombre " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
    case 6:
      nombre = "El asombroso " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
    case 7:
      nombre = nombre + "man"
      print(f"Si fuese un superheroe, sería {nombre}")
    case 8: 
      nombre = "The " + nombre
      print(f"Si fuese un superheroe, sería {nombre}")
  return nombre
  
def nombredecomic (nombre):
  selector = random.randint(1 , 8)
  match selector:
    case 1:
      print(f"El nombre de su comic sería: Las increíbles aventuras de {nombre} y compañía")
    case 2:
      print(f"El nombre de su comic sería: {nombre} y la isla secreta")
    case 3:
      print(f"El nombre de su comic sería: El aburrido día de {nombre}")
    case 4:
      print(f"El nombre de su comic sería: El retorno de {nombre}")
    case 5:
      print(f"El nombre de su comic sería: {nombre} contrataca")
    case 6:
      print(f"El nombre de su comic sería: {nombre} Tomo Final")
    case 7:
      print(f"El nombre de su comic sería: No se metan con {nombre}")
    case 8:
      nombre2 = "Anti " + nombre
      print(f"El nombre de su comic sería: {nombre} vs {nombre2}")
nombre = input("Ingrese una palabra: ")
nombre = nombrehereo(nombre)
nombredecomic(nombre) 

  