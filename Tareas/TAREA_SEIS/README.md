# Tarea 5

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica 

## Link de Doxyfile por medio del Netlify:



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






