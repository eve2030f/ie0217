# Tarea 6

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica 

## 1. Creación de la base de datos y tablas
`````
-- Creando la Base de datos
CREATE DATABASE IF NOT EXISTS IngenieriaElectrica;

-- Usar la base de datos creada
USE IngenieriaElectrica;

-- Creando la tabla Cursos
CREATE TABLE Cursos (
    CursoID INT AUTO_INCREMENT, -- llave candidata de la tabla
    Sigla VARCHAR(10) UNIQUE,
    Nombre VARCHAR(100),
    Semestre INT,
    Creditos INT,
    PRIMARY KEY (CursoID)
);

-- Creando la tabla Requisitos
CREATE TABLE Requisitos (
    RequisitoID INT AUTO_INCREMENT, -- llave candidata de la tabla
    CursoID INT,
    RequisitoCursoID INT,
    PRIMARY KEY (RequisitoID),
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID),
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID)
);

-- Creando la tabla Descripciones
CREATE TABLE Descripciones (
    DescripcionID INT AUTO_INCREMENT, -- llave candidata de la tabla
    CursoID INT,
    Descripcion TEXT,
    Dificultad ENUM('Fácil', 'Media', 'Difícil'),
    PRIMARY KEY (DescripcionID),
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID)
);
`````
## 2. Inserción de datos
`````
-- Insertando cursos actuales
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0579', 'Administración de sistemas', 9, 4),
('IE-0613', 'Electrónica industrial', 9, 4),
('IE-0599', 'Anteproyecto de TFG', 9, 4),
('IE-OP1', 'Optativa I', 9, 3),
('IE-OP2', 'Optativa II', 9, 3),
('IE-0679', 'Ciencia de datos para la est. y pron. de eventos', 10, 3),
('IE-0541', 'Seguridad ocupacional', 10, 3),
('IE-OP3', 'Optativa III', 10, 3),
('IE-OP4', 'Optativa IV', 10, 3),
('TFG', 'Trabajo final de graduación', 10, 0);
`````
(https://github.com/eve2030f/ie0217/blob/main/Tareas/TAREA_SEIS/Imagenes/1.png)
`````
-- Insertando cursos que son requisitos de los cursos actuales anteriores para poder emparejarlos
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0479', 'Ingeniería económica', 8, 3),
('IE-0413', 'ElectrónicaII', 5, 3),
('IE-0499', 'Proyecto eléctrico', 8, 3),
('IE-0405', 'Modelos probabilísticos de señales y sistemas', 6, 3),
('IE-0501', 'Responsabilidades en el ejercicio profesional de la ingeniería eléctrica', 6, 1),
('IE-0315', 'Máquinas eléctricas I', 6, 3);
`````
`````
-- Insertando requisitos de cursos actuales
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(11, 31),
(12, 32),
(12, 36),
(13, 33),
(16, 34),
(16, 11),
(17, 35);
`````
`````
-- Insertando descipciones de cursos actuales
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES
(11, 'Introduce a los estudiantes en los principios y prácticas fundamentales para la gestión de sistemas informáticos complejos, incluyendo redes, seguridad informática, administración de servidores y almacenamiento de datos.', 'Difícil'),
(12, 'Profundiza en los conceptos y aplicaciones de la electrónica en entornos industriales. Aborda temas como circuitos electrónicos, sistemas de control, instrumentación y sensores, robótica industrial y automatización.', 'Difícil'),
(13, 'Guía a los estudiantes en la fase inicial del Trabajo Final de Graduación (TFG), enfocándose en la definición del tema de investigación, la formulación de preguntas de investigación, la revisión bibliográfica y la elaboración de un plan de trabajo detallado.', 'Difícil'),
(14, 'Curso a elegir por el estudiante', 'Media'),
(15, 'Curso a elegir por el estudiante', 'Media'),
(16, 'Introduce a los estudiantes en los principios y aplicaciones de la ciencia de datos para el análisis y la predicción de eventos en diversos ámbitos. Se enfoca en técnicas de minería de datos, aprendizaje automático y visualización de datos para extraer información valiosa y generar pronósticos confiables.', 'Media'),
(17, 'Principios fundamentales de la seguridad y salud ocupacional, enfocándose en la identificación, evaluación y control de riesgos laborales. Busca desarrollar habilidades para prevenir accidentes y enfermedades profesionales, promoviendo ambientes de trabajo seguros y saludables en diversos sectores.', 'Media'),
(18, 'Curso a elegir por el estudiante', 'Media'),
(19, 'Curso a elegir por el estudiante', 'Media'),
(20, 'Proyecto de investigación original y aplicado en el ámbito de la ingeniería eléctrica.', 'Media'),
(31, 'Introduce a los estudiantes en los principios y conceptos fundamentales de la ingeniería económica, enfocándose en la evaluación de proyectos de inversión, la toma de decisiones financieras y el análisis de costos y beneficios. ', 'Media'),
(32, 'Profundiza en los conceptos de electrónica analógica y digital, incluyendo circuitos con transistores, amplificadores, circuitos integrados, microcontroladores y sistemas de comunicación. ', 'Difícil'),
(33, 'Curso permite a los estudiantes aplicar los conocimientos y habilidades adquiridos en cursos previos.', 'Media'),
(34, 'Aborda temas como procesos estocásticos, teoría de la estimación y detección, y teoría de la decisión. ', 'Media'),
(35, 'Las responsabilidades éticas, legales y sociales que enfrentan los ingenieros eléctricos en su ejercicio profesional. ', 'Fácil'),
(36, 'Desarrollo del funcionamiento de las máquinas eléctricas, incluyendo motores, generadores y transformadores. El curso abarca tanto la teoría como la práctica, con un enfoque en la comprensión de los conceptos físicos y el análisis de los circuitos magnéticos y eléctricos que caracterizan a estas máquinas.', 'Media');
`````
`````
-- Agregando 2 cursos nuevos
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0999', 'Laboratorio de robótica', 9, 3),
('IE-0888', 'Análisis de datos I', 8, 3);
`````
`````
-- Insertando requisitos para cursos nuevos
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(37, 36);
`````
`````
-- Insertando de descripciones para cursos nuevos
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES
(37, 'Un laboratorio de robótica es un curso presencial dedicado a la investigación, el desarrollo y la enseñanza en el campo de la robótica.', 'Media'),
(38, 'Se profundiza en el uso de SQL y otras herramientas del análisis de datos. ', 'Media');
`````
## 3. Consultas en la base de datos
`````
-- Consulta para listar todos los cursos con su sigla, nombre, semestre, creditos, descripcion y dificultad.
SELECT 
	Cursos.*,
    Descripciones.Dificultad,
    Descripciones.Descripcion
FROM Cursos
INNER JOIN Descripciones
ON Cursos.CursoID = Descripciones.CursoID; 
`````
`````
-- Muestra los requisitos del curso en específico: IE-0613
SELECT c.Sigla AS Curso, r.RequisitoCursoID AS Requisito
FROM Cursos c
JOIN Requisitos r ON c.CursoID = r.CursoID
WHERE c.Sigla = 'IE-0613';
`````
`````
-- Muestra los cursos que no son optativos
SELECT Sigla, Nombre, Semestre, Creditos
FROM Cursos
WHERE Sigla NOT LIKE 'IE-OP%';
`````
`````
-- Lista los cursos que pertenecen al 10mo semestre 
SELECT Sigla, Nombre, Semestre, Creditos
FROM Cursos
WHERE Semestre = 10;
`````
## 4. Actualizaciones
`````
-- Actualizando nombre y créditos de 3 de los cursos optativos por medio de la sigla
UPDATE Cursos
SET Nombre = 'Diseño de sistemas de iluminación', Creditos = 4
WHERE Sigla IN ('IE-OP1');
UPDATE Cursos
SET Nombre = 'Laboratorio de microcontroladores', Creditos = 4
WHERE Sigla IN ('IE-OP2');
UPDATE Cursos
SET Nombre = 'Metrología en la ingeniería eléctrica', Creditos = 2
WHERE Sigla IN ('IE-OP3');

-- Para visualizar la tabla de solo optativas 
SELECT * FROM ingenieriaelectrica.cursos
WHERE Sigla LIKE 'IE-OP%';
`````
`````
-- Actualizar descripción y dificultad de 3 cursos existentes por medio del ID del curso
UPDATE Descripciones
SET Descripcion = 'Diseño de sistemas de iluminación para diferentes aplicaciones, incluyendo iluminación residencial, comercial e industrial.', Dificultad = 'Difícil'
WHERE CursoID IN (14);
UPDATE Descripciones
SET Descripcion = 'Práctica en el uso de microcontroladores para desarrollar sistemas electrónicos integrados. Se cubren temas como la arquitectura de microcontroladores, programación en lenguaje ensamblador y C, interconexión de periféricos, y diseño de aplicaciones con microcontroladores.', Dificultad = 'Difícil'
WHERE CursoID IN (15);
UPDATE Descripciones
SET Descripcion = 'Calibración de instrumentos de medida, la trazabilidad de patrones de medida, la incertidumbre de la medida, y la gestión de la calidad en laboratorios de metrología.', Dificultad = 'Fácil'
WHERE CursoID IN (18);
`````

## 5. Eliminación de datos
`````
-- Elimina un curso inventado Laboratorio de robótica y 2 cursos del plan Optativa 4 y Modelos porbabilisticos
-- al estar ligados con un foreign key se deben eliminar primero sus datos asociados
SET SQL_SAFE_UPDATES=0;
DELETE FROM descripciones
WHERE CursoID = (SELECT CursoID FROM Cursos WHERE Sigla = 'IE-0999');
DELETE FROM requisitos
WHERE CursoID = '37' OR RequisitoCursoID = '37';
DELETE FROM Cursos WHERE CursoID = '37';

DELETE FROM descripciones
WHERE CursoID = (SELECT CursoID FROM Cursos WHERE Sigla = 'IE-0405');
DELETE FROM requisitos
WHERE CursoID = '34' OR RequisitoCursoID = '34';
DELETE FROM Cursos WHERE CursoID = '34';

DELETE FROM descripciones
WHERE CursoID = (SELECT CursoID FROM Cursos WHERE Sigla = 'IE-OP4');
DELETE FROM requisitos
WHERE CursoID = '19' OR RequisitoCursoID = '19';
DELETE FROM Cursos WHERE CursoID = '19';
SET SQL_SAFE_UPDATES=1;
`````
`````
-- Elimina requisitos específicos de 2 cursos existentes 
DELETE FROM Requisitos WHERE CursoID = '11';
DELETE FROM Requisitos WHERE CursoID = '13';
`````

## Parte Teórica

1. ¿Qué es una base de datos relacional y cuáles son sus características fundamentales?

Una base de datos relacional es un tipo de base de datos que organiza los datos en tablas con filas y columnas. Sus características fundamentales incluyen la estructura tabular, la integridad de los datos a través de restricciones y la capacidad de establecer relaciones entre las tablas.

2. ¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de datos relacional?

La clave primaria es un atributo o conjunto de atributos que identifica de manera única a cada fila en una tabla. Una clave candidata, en cambio, es un atributo o conjunto de atributos que podría ser utilizado como clave primaria, pero aún no se ha seleccionado como tal.

3. ¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial en una base de datos?

Las claves foráneas son atributos en una tabla que establecen una relación con la clave primaria de otra tabla. Se utilizan para mantener la integridad referencial, lo que significa que no se pueden insertar valores en la columna de la clave foránea que no existan en la columna de la clave primaria a la que hace referencia.

4. ¿Qué es una transacción en el contexto de bases de datos y cuáles son las propiedades ACID que debe cumplir?

Una transacción en el contexto de bases de datos es una serie de operaciones que deben ser ejecutadas como una unidad atómica, consistente, aislada y duradera (siglas en inglés ACID). 

- Atomicidad: garantiza que todas las operaciones en una transacción se completen con éxito o ninguna se realice. 
- Consistencia: garantiza que la base de datos permanezca en un estado válido antes y después de la transacción.
- Aislamiento: garantiza que las transacciones concurrentes no interfieran entre sí.
- Durabilidad: garantiza que los cambios realizados por una transacción se mantengan incluso en caso de fallo del sistema.

5. ¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?

Las vistas en SQL son consultas almacenadas como objetos de base de datos. Es una tabla virtual cuyo contenido está definido por una consulta. Los beneficios incluyen la simplificación de consultas complejas, la seguridad al permitir acceso a datos específicos y la mejora del rendimiento al precalcular resultados. Sin embargo, las limitaciones pueden incluir la complejidad de mantenimiento y el posible impacto en el rendimiento si no se utilizan correctamente.

6. ¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales (normal forms)?

La normalización en bases de datos es el proceso de organizar los datos en tablas para reducir la redundancia y la dependencia. Las formas normales incluyen la primera forma normal (1NF), que elimina la duplicación de datos; la segunda forma normal (2NF), que elimina las dependencias parciales; la tercera forma normal (3NF), que elimina las dependencias transitivas y formas normales superiores como la forma normal de Boyce-Codd (BCNF) y la cuarta y quinta forma normal (4NF y 5NF) que abordan problemas más específicos de dependencia.

7. ¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las consultas?

Los índices en SQL son estructuras de datos que mejoran la velocidad de recuperación de registros en una tabla. Funcionan organizando los datos de manera que las búsquedas y consultas sean más eficientes. El impacto en el rendimiento depende del tipo de consulta y la estructura de la tabla, ya que los índices pueden acelerar las consultas de búsqueda pero pueden ralentizar las operaciones de escritura.

8. ¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de ataque?

SQL Injection es un tipo de ataque en el que un atacante inserta código SQL malicioso en una consulta para manipular la base de datos. Las mejores prácticas para prevenir este tipo de ataque incluyen el uso de parámetros parametrizados en las consultas SQL, la validación de entrada de usuario y la limitación de los privilegios de acceso a la base de datos.

9. ¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden mejorar la eficiencia y seguridad de las operaciones de base de datos?

Los procedimientos almacenados en SQL son bloques de código SQL que se almacenan en el servidor de base de datos y se pueden ejecutar mediante una llamada desde una aplicación. Pueden mejorar la eficiencia y seguridad de las operaciones de base de datos al reducir la cantidad de tráfico de red y al permitir la reutilización de código seguro y optimizado.

10. ¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en una base de datos relacional y qué consideraciones se deben tener en cuenta en cada caso?

Las relaciones uno a uno se implementan colocando la clave primaria de una tabla en otra tabla como clave foránea. Las relaciones uno a muchos se implementan de manera similar, pero la clave foránea se coloca en la tabla "muchos". Las relaciones muchos a muchos se implementan utilizando una tabla de unión que contiene las claves primarias de las dos tablas que se relacionan. Las consideraciones incluyen la integridad referencial, el rendimiento y la eficiencia en el acceso a los datos.






