# Sistema de Control de Calificaciones de un Centro Educativo

**Estudiante:** Jorlenys Virginia Espiritu Mejia

**Matrícula:** 2025-2607

**Asignatura:** Lógica de Programación

**Profesor:** Gamalier Reyes del Carmen

## 1. Descripción del proyecto

El proyecto consiste en desarrollar un sistema de control de calificaciones para el centro educativo La Nueva Escuela, utilizando el lenguaje de programación C++.

El programa permite registrar estudiantes, introducir cuatro calificaciones por cada uno, calcular sus promedios y determinar si aprobaron o reprobaron.

## 2. Datos de entrada

El sistema solicita los siguientes datos:

- Cantidad de estudiantes que se desean registrar.
- Nombre completo de cada estudiante.
- Cuatro calificaciones por estudiante, con valores entre 0 y 100.
- Confirmación para procesar otro grupo de estudiantes.

## 3. Proceso del programa

El programa realiza las siguientes operaciones:

1. Valida que la cantidad de estudiantes sea mayor que cero.
2. Solicita el nombre de cada estudiante.
3. Solicita cuatro calificaciones y valida que estén entre 0 y 100.
4. Calcula el promedio individual de cada estudiante.
5. Determina si el estudiante aprobó o reprobó.
6. Cuenta los estudiantes aprobados y reprobados.
7. Acumula los promedios para calcular el promedio general del grupo.
8. Identifica al estudiante con el promedio más alto.
9. Presenta un resumen de los resultados.
10. Permite procesar otro grupo de estudiantes.

**Criterio de aprobación:** 70 puntos o más.

## 4. Resultados de salida

Al finalizar el registro de cada grupo, el sistema muestra:

- Promedio individual de cada estudiante.
- Estado de aprobación o reprobación.
- Cantidad total de estudiantes aprobados.
- Cantidad total de estudiantes reprobados.
- Promedio general del grupo.
- Nombre del estudiante con el promedio más alto.
- Promedio obtenido por dicho estudiante.

## 5. Ciclos utilizados y su funcionamiento

**Ciclo do while para validar la cantidad de estudiantes**

Se utiliza para solicitar la cantidad de estudiantes y comprobar que sea mayor que cero. Si el usuario introduce un número inválido, el programa vuelve a solicitarlo.

**Ciclo for para recorrer los estudiantes**

Se utiliza para repetir el proceso de registro según la cantidad de estudiantes indicada por el usuario.

**Ciclo for para solicitar las cuatro calificaciones**

Se utiliza para solicitar exactamente cuatro notas por cada estudiante y acumular sus valores.

**Ciclo do while para validar las calificaciones**

Se utiliza para comprobar que cada nota esté dentro del rango permitido de 0 a 100. Si no cumple, vuelve a solicitarla.

**Ciclo do while para validar la respuesta del usuario**

Se utiliza para comprobar que la respuesta sobre procesar otro grupo sea válida.

**Ciclo do while principal**

Se utiliza para repetir todo el proceso de registro cuando el usuario desea trabajar con otro grupo de estudiantes.

## 6. Capturas de pantalla de la ejecución
![img1](../SistemacontrolcalificacionCap/img1.png)
![img2](../SistemacontrolcalificacionCap/img2.png)
![img3](../SistemacontrolcalificacionCap/img3.png)
