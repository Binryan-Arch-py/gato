# 3 en raya en C++

Este repositorio contiene el juego llamado gato, tres en raya o tik tac toe desarrollado en **C++**
Este programa fue pensado como el juego llamado gato tambien conocido cono 3 en raya o tik tac toe

## Descripcion
Programa creado como el famoso juego de gato, 3 en raya o tik tac toe, orientado total y unicamente al entretenimiento del usuario utilizando coordenadas para la ubicacion del simbolo correspondiente

## funciones
* comprobacion del ganador

## Tecnologias
* **Lenguaje:** C++
* **Sistema:** Arch Linux/Void Linux
* **Editor:** Neovim

## Compatibilidad
Este proyecto fue desarrollado y probado en **Arch Linux** y **Void Linux**.

* **Linux:** 100% Funcional (Recomendado).
* **macOS:** Compilación exitosa, pero ejecución inestable (Segfault 11 detectado en entornos de prueba).
* **Windows:** No soportado. El sistema de manejo de consola de Windows/Wine interfiere con la lógica de entrada de este programa.

## como ejecutar
para correr este programa se requiere un entorno compatible con herramientas GNU
### deberas tener instalados los siguientes paquetes:
* **GCC** compilador de C y C++
* **GNU Make** herramienta de automatizacion de compilacion
### instalacion de dependencias:
* Arch Linux y derivados:  ``sudo pacman -S base-devel``
* Debian Linux y derivados:  ``sudo apt install build-essential``
* MacOS:  ``xcode-select --install``
### instrucciones de compilacion:
* entrar a la carpeta descargada del repositorio usando ``cd gato``
* usar el comando ``make`` NOTA: el makefile esta configurado para usar g++ (gcc) si desea usar otro compilador es libre de modificarlo dentro del archivo
### instrucciones de ejecucion:
* Linux/MacOS: ``./gato``

### Desarrollado por **Bryan David Perez Arana**
