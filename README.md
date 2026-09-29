# Gestión Hospitalaria con Estructuras de Datos en C++

Sistema de gestión de un hospital desarrollado en C++ en tres entregas incrementales, en el que cada fase introduce nuevas **estructuras de datos**: vectores de punteros, colas con prioridad, pilas, listas y, finalmente, **árboles binarios de búsqueda** capaces de procesar **un millón de registros**.

Proyecto de la asignatura **Estructuras de Datos y de la Información** (Grado en Ingeniería Informática del Software, Universidad de Extremadura, curso 2022/23).

**Tecnologías:** C++, programación orientada a objetos, plantillas (templates), memoria dinámica, TAD, análisis de complejidad, Eclipse CDT

---

## Evolución del proyecto

| Entrega | Carpeta | Estructuras de datos | Funcionalidad |
|---|---|---|---|
| 1 | `Proyecto_1_JorgeMM` | Vectores de punteros (`VoVPacientes`, `VoVMedicos`, `VoVConsultas`) | Carga de pacientes, médicos y consultas desde CSV, búsquedas, estadísticas y guardado de consultas programadas |
| 2 | `Proyecto2_JorgeMendez` | Colas, pilas y listas doblemente enlazadas | Servicios hospitalarios con colas de espera por prioridad, historial de informes médicos en pilas y listas de pacientes y médicos |
| 3 | `Proyecto_3_JorgeMendez` | Árbol binario de búsqueda con pares clave valor | Ensayo clínico: procesa un fichero de un millón de puntuaciones, detecta DNI erróneos y realiza búsquedas por prefijo y subcadena |

---

## Entrega 1: vectores de punteros

Gestión básica del hospital mediante vectores estáticos de punteros a objetos.

- Carga de datos desde `pacientes.csv`, `medicos.csv` y `consultas.csv`.
- Menú para mostrar estadísticas, pacientes, médicos y consultas.
- Búsqueda de pacientes por DNI y de médicos por apellido.
- Exportación de las consultas programadas de un paciente.
- Clase propia `FechaYHora` para gestionar las citas.
- Batería de pruebas para cada módulo.

## Entrega 2: colas, pilas y listas

Amplía el sistema con servicios médicos y listas de espera.

- **Servicios** con un vector de colas de pacientes, una por cada uno de los **5 niveles de prioridad**.
- Asignación de médicos a servicios y procesamiento de las colas de espera por orden de prioridad.
- **Pilas de informes** para el historial médico de cada paciente, cargado desde `informes.csv`.
- **Listas** de pacientes y médicos construidas sobre una lista doblemente enlazada genérica.
- Pruebas unitarias de cada estructura.

## Entrega 3: árbol binario de búsqueda

Ensayo clínico sobre un gran volumen de datos, centrado en la eficiencia.

- Carga los pacientes en un **árbol binario de búsqueda** indexado por DNI (`BSTree<KeyValue<string, Paciente*>>`).
- Procesa `ensayo.csv`, con **1.000.000 de puntuaciones**, acumulándolas en cada paciente.
- Detecta y lista los DNI del ensayo que no corresponden a ningún paciente.
- Muestra los 10 pacientes con mayor puntuación.
- Algoritmos adicionales sobre el árbol:
  - Cálculo del número de niveles.
  - Búsqueda de pacientes cuyo apellido contiene una subcadena.
  - Búsqueda por prefijo de DNI, podando el árbol para recorrer solo los subárboles candidatos.
- Mide el tiempo total de ejecución.

---

## Buenas prácticas aplicadas

- **Documentación de cada método** con precondiciones, descripción y **complejidad computacional** (O(1), O(n)...).
- **Gestión manual de memoria** con constructores, destructores y liberación de todos los objetos.
- **Programación genérica** con plantillas para las estructuras de datos.
- **Pruebas unitarias** propias para cada clase antes de integrarla.

---

## Estructura del repositorio

```
edi-gestion-hospitalaria/
├── Proyecto_1_JorgeMM/
│   ├── src/
│   └── pacientes.csv, medicos.csv, consultas.csv
├── Proyecto2_JorgeMendez/
│   ├── src/
│   └── pacientes.csv, medicos.csv, informes.csv
├── Proyecto_3_JorgeMendez/
│   └── Ensayo clinico/
│       ├── src/
│       └── ensayo.csv, pacientes_ordenados.csv
├── README.md
└── .gitignore
```

Los datos de los CSV son ficticios.

## Cómo ejecutarlo

1. Clona el repositorio:
   ```bash
   git clone https://github.com/jmm-21/edi-gestion-hospitalaria.git
   ```
2. En **Eclipse CDT**: *File > Import > Existing Projects into Workspace* y elige la carpeta de la entrega.
   También se puede compilar desde terminal, dentro de la carpeta de la entrega:
   ```bash
   g++ -o hospital src/*.cpp
   ./hospital
   ```
3. Ejecuta desde la carpeta del proyecto para que el programa encuentre los ficheros CSV.

---

## Autor

**Jorge Méndez Martínez** 

Las estructuras genéricas `Cola`, `Pila`, `ListaDPI`, `BSTree` y `KeyValue`, la clase `Timer` y el esqueleto de `EnsayoClinico` fueron proporcionados por el profesorado de la asignatura. Las clases del dominio, las estructuras específicas y los algoritmos son trabajo propio.
