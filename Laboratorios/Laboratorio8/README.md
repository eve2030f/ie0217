# Laboratorio 8 SQL
Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


# Breakout Room 

06

# Integrantes

Santiago Herra C13721

Gabriel Angulo B90457

Kristhel Quesada C06153

Evelyn Feng B82870

# Lista de ejercicios explicados

1. Mostrar el nombre de cada paciente y ordenar la lista por la longitud de cada nombre y alfabéticamente.
```
SELECT first_name
FROM patients
order by
  len(first_name),
  first_name;
```
2. Muestra las provincias que tienen más pacientes identificados como 'M' que como 'F'. Solo se muestra el province_name.
```
SELECT pr.province_name
FROM patients AS pa
  JOIN province_names AS pr ON pa.province_id = pr.province_id
GROUP BY pr.province_name
HAVING
  SUM(gender = 'M') > SUM(gender = 'F');
```

3. Muestra el id del paciente, peso y altura
```
SELECT patient_id, weight, height, 
  (CASE 
      WHEN weight/(POWER(height/100.0,2)) >= 30 THEN
          1
      ELSE
          0
      END) AS isObese
FROM patients;
```

4. Necesitamos un desglose de la cantidad total de admisiones que cada médico ha iniciado cada año. Muestre el doctor_id, doctor_full_name, especialidad, año, total_admissions para ese año.

```
SELECT
  d.doctor_id as doctor_id,
  CONCAT(d.first_name,' ', d.last_name) as doctor_name,
  d.specialty,
  YEAR(a.admission_date) as selected_year,
  COUNT(*) as total_admissions
FROM doctors as d
  LEFT JOIN admissions as a ON d.doctor_id = a.attending_doctor_id
GROUP BY
  doctor_name,
  selected_year
ORDER BY doctor_id, selected_year
```

5. Cada admisión cuesta $50 para pacientes sin seguro y $10 para pacientes con seguro. Todos los pacientes con un ID de paciente par tienen seguro.

Indique a cada paciente un "Sí" si tiene seguro y un "No" si no tiene seguro. Sume el costo total de admisión para cada grupo tiene_seguro. 
```
SELECT 
CASE WHEN patient_id % 2 = 0 Then 
    'Yes'
ELSE 
    'No' 
END as has_insurance,
SUM(CASE WHEN patient_id % 2 = 0 Then 
    10
ELSE 
    50 
END) as cost_after_insurance
FROM admissions 
GROUP BY has_insurance;
```
6. Mostrar nombre y apellido, alergias de pacientes que tienen alergias a la 'penicilina' o la 'morfina'. Mostrar resultados ordenados de forma ascendente por alergias, luego por nombre y luego por apellido.
```
SELECT
  first_name,
  last_name,
  allergies
FROM patients
WHERE
  allergies IN ('Penicillin', 'Morphine')
ORDER BY
  allergies,
  first_name,
  last_name;
```

7. Muestre el ID del paciente y el nombre de los pacientes donde su nombre comienza y termina con 's' y tienen al menos 6 caracteres.
```
SELECT
  patient_id,
  first_name
FROM patients
WHERE first_name LIKE 's____%s';
```

8. Para cada ingreso, muestre el nombre completo del paciente, su diagnóstico de ingreso y el nombre completo del médico que diagnosticó su problema.
```
SELECT
  CONCAT(patients.first_name, ' ', patients.last_name) as patient_name,
  diagnosis,
  CONCAT(doctors.first_name,' ',doctors.last_name) as doctor_name
FROM patients
  JOIN admissions ON admissions.patient_id = patients.patient_id
  JOIN doctors ON doctors.doctor_id = admissions.attending_doctor_id;
```

9. Muestre el nombre de la categoría y el precio unitario promedio del producto para cada categoría redondeado a 2 decimales.
```
SELECT c.category_name, round(avg(p.unit_price),2) as average_unit_price
FROM products p
JOIN categories c On c.category_id = p.Category_id
GROUP BY c.category_name
```

10. Muestre el nombre del producto, el nombre de la empresa y el nombre de la categoría de la tabla de productos, proveedores y categorías.
```
SELECT p.product_name, s.company_name, c.category_name
FROM products p
JOIN suppliers s ON s.supplier_id = p.Supplier_id
JOIN categories c On c.category_id = p.Category_id;
```

11. Muestre cuánto dinero perdió la empresa al ofrecer descuentos cada año, ordene los años del más reciente al menos reciente. Redondear a 2 decimales.
```
Select 
YEAR(o.order_date) AS 'order_year' , 
ROUND(SUM(p.unit_price * od.quantity * od.discount),2) AS 'discount_amount' 

from orders o 
JOIN order_details od ON o.order_id = od.order_id
JOIN products p ON od.product_id = p.product_id

group by YEAR(o.order_date)
order by order_year desc;
```

12. Muestre la ciudad, nombre_empresa, nombre_contacto de la tabla de clientes y proveedores fusionados. Cree una columna que contenga 'clientes' o 'proveedores' según la tabla de donde proviene.
```
select City, company_name, contact_name, 'customers' as relationship 
from customers
union
select city, company_name, contact_name, 'suppliers'
from suppliers
```

12. Muestre el nombre y apellido del empleado, una columna "núm_pedidos" con un recuento de los pedidos realizados y una columna llamada "Enviado" que muestra "A tiempo" si la fecha_de_envío del pedido es menor o igual a la fecha_requerida, "Tarde" si el pedido enviado tarde. Ordene por apellido del empleado, luego por nombre y luego de manera descendente por número de pedidos.
```
SELECT
  e.first_name,
  e.last_name,
  COUNT(o.order_id) As num_orders,
  (
    CASE
      WHEN o.shipped_date <= o.required_date THEN 'On Time'
      ELSE 'Late'
    END
  ) AS shipped
FROM orders o
  JOIN employees e ON e.employee_id = o.employee_id
GROUP BY
  e.first_name,
  e.last_name,
  shipped
ORDER BY
  e.last_name,
  e.first_name,
  num_orders DESC
```

13. Muestre el nombre de la empresa, el nombre del contacto y el número de fax de todos los clientes que tengan un número de fax. (no nulo)
```
SELECT company_name, contact_name, fax
FROM customers
WHERE Fax IS NOT NULL;
```

14. Muestra el nombre_categoría y la descripción de la tabla de categorías ordenadas por nombre_categoría.
```
SELECT category_name, description
FROM categories
ORDER BY category_name;
```

15. Mostrar todos los nombres de contacto, direcciones y ciudades de todos los clientes que no sean de 'Alemania', 'México', 'España'.
```
SELECT contact_name, address, city
FROM customers
WHERE Country NOT IN ('Germany','Mexico', 'Spain')
```

16. Muestra la ciudad, nombre_compañía, nombre_contacto de todos los clientes de las ciudades que contienen la letra 'L' en el nombre de la ciudad, ordenados por nombre_contacto.
```
SELECT city, company_name, contact_name
FROM customers
WHERE city LIKE '%L%'
ORDER BY contact_name
```

# Base de datos 
### Hospital
Esta base de datos contiene las tablas de informaciones respecto a a los pacientes admitidos en el hospital, asì como la información básica del doctor que los atiende (nombre, apellido y especialidad). Además contiene las tablas de las prvincias con sus respectivo ID y nombre, las féchas de admisión, fecha de salida, el doctor que los atendió y el ID del paciente. 

Se destacan 2 llaves primarias, la del ID del paciente en la tabla de pacientes, la del ID del doctor en la tabla de doctores y el ID de provincia en la tabla de provincias. La tabla pacientes está conectada a provincias con la llave foránea de ID de provincia. Admisión se interrelaciona con la tabla de pacientes por medio del ID de sus pacientes y de esta misma tabla se saca la información que relaciona el ID del doctor con le paciente.

### Northwind
Esta base de datos es de una empresa vendedora de productos alimenticios y bebidas. Dentro de esta se encuentran las categorías de los productos qeu venden así como una descripción de ellas. También, se tiene la base de datos de sus clientes, empleados, la segmentación de estos por territorio, los proveedores, regiones, productos por categoría, el detalle de las órdenes, el shipping y el dato de las órdenes realizadas por sus clientes.  

Northwind es una base de datos más robusta que hospital pues cuenta con una mayor cantidad de tablas y estas se unen ya sea en la tabla de órdenes o productos a partir de las llaves foráneas.