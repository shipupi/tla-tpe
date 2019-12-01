![Planetoid](imgs/planetoid.png)

## Trabajo Practico Especial de Automatas, Teoria de Lenguajes y Compiladores. ITBA. 2019-C2 
## Simulador grafico de interaccion fisica entre cuerpos celestes.</br>

## Autores: 
- Ail, Brian
- Baader, Juan Martin
- Bergagna, Federico
- Rodriguez Brizi, Manuel

## Instalacion

### Construcción del programa
Para construir el programa se deben instalar librerías gráficas
necesarias para el archivo ​ planets , ​ y para ello se deben seguir los
siguientes pasos 1:
1. Descargar libgraph: https://download.savannah.gnu.org/releases/libgraph/libgraph-1.0.2.tar.gz
2. Instalar librerias requeridas:

	```
	sudo apt-get install build-essential
	sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-1.8 guile-1.8-dev libsdl1.2debian libart-2.0-dev libaudiofile-dev libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev
	```

3. Descomprimir libgraph-1.0.2.tar.gz
4. Dentro de la carpeta recién descomprimida ejecutar:

	```
	./configure​ ​ --disable-guile
	make
	sudo make install
	sudo cp /usr/local/lib/libgraph.* /usr/lib
	```

5. Ya se puede compilar el ​ planets ​ con el siguiente comando:
	```
	gcc -o planets planets.c -lgraph -lm -lpthread
	```

#### Aclaraciones

- Dejamos subido en el repositorio el planets compilado, por si tienen hay algun problema instalando las librerias necesarias para la compilacion.
- Esta guia de instalacion fue obtenida de: https://tutorialspoint.dev/computer-science/computer-graphics/add-graphics-h-c-library-gcc-compiler-linux

### Ejecucion

Los pasos para realizar una simulación son:
1. Generar el archivo intermedio corriendo la línea:
	``` $> ./generate_planet_info.sh path_al_archivo ```
2. Correr el archivo intermedio llamado “planet_info” con la siguiente línea:
	``` $> ./planets planet_info ```
3. Enjoy the show!

A modo de ejemplo, para correr el Test N°1, deberíamos pararnos en el
directorio raíz del proyecto y correr las siguientes líneas:
		``` 
			$> ./generate_planet_info.sh tests/test1.txt
			$> ./planets planet_info 
		```

### Ejemplos

![Ejemplo 1](imgs/example1.jpeg)

![Ejemplo 2](imgs/example2.jpeg)