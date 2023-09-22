# libft
Primer proyecto de 42 Madrid

Índice general
I. Introducción 2
II. Instrucciones generales 3
III. Parte obligatoria 5
III.1. Consideraciones técnicas . . . . . . . . . . . . . . . . . . . . . . . . . 5
III.2. Parte 1 - Funciones de libc . . . . . . . . . . . . . . . . . . . . . . . . 6
III.3. Parte 2 - Funciones adicionales . . . . . . . . . . . . . . . . . . . . . . 7
IV. Parte bonus 12
V. Entrega y evaluación 17

Capítulo I
Introducción
Programar en C puede ser aburrido cuando uno no tiene acceso a las funciones comunes
más utilizadas. Este proyecto te permitirá entender la forma en la que estas funciones
funcionan, cómo implementarlas y aprender a utilizarlas. Crearás una librería propia, que
será muy útil ya que la utilizarás en los siguientes proyectos de C.
Asegúrate de ir enriqueciendo tu libft a lo largo de tu cursus. Sin embargo, cuando
utilices tu librería asegúrate de que todas las funciones utilizadas por tu librería respetan
las permitidas por cada proyecto.

Capítulo II
Instrucciones generales
• Tu proyecto deberá estar escrito en C.
• Tu proyecto debe estar escrito siguiendo la Norma. Si tienes archivos o funciones
adicionales, estas están incluidas en la verificación de la Norma y tendrás un 0 si
hay algún error de norma en cualquiera de ellos.
• Tus funciones no deben terminar de forma inesperada (segfault, bus error, double free, etc) ni tener comportamientos indefinidos. Si esto pasa tu proyecto será
considerado no funcional y recibirás un 0 durante la evaluación.
• Toda la memoria asignada en el heap deberá liberarse adecuadamente cuando sea
necesario. No se permitirán leaks de memoria.
• Si el enunciado lo requiere, deberás entregar un Makefile que compilará tus archivos
fuente al output requerido con las flags -Wall, -Werror y -Wextra y por supuesto
tu Makefile no debe hacer relink.
• Tu Makefile debe contener al menos las normas $(NAME), all, clean, fclean y
re.
• Para entregar los bonus de tu proyecto deberás incluir una regla bonus en tu
Makefile, en la que añadirás todos los headers, librerías o funciones que estén
prohibidas en la parte principal del proyecto. Los bonus deben estar en archivos
distintos _bonus.{c/h}. La parte obligatoria y los bonus se evalúan por separado.
• Si tu proyecto permite el uso de la libft, deberás copiar su fuente y sus Makefile
asociados en un directorio libft con su correspondiente Makefile. El Makefile
de tu proyecto debe compilar primero la librería utilizando su Makefile, y después
compilar el proyecto.
• Te recomendamos crear programas de prueba para tu proyecto, aunque este trabajo
no será entregado ni evaluado. Te dará la oportunidad de verificar que tu
programa funciona correctamente durante tu evaluación y la de otros compañeros.
Y sí, tienes permitido utilizar estas pruebas durante tu evaluación o la de otros
compañeros.
• Entrega tu trabajo en tu repositorio Git asignado. Solo el trabajo de tu repositorio
Git será evaluado. Si Deepthought evalúa tu trabajo, lo hará después de tus compañeros. Si se encuentra un error durante la evaluación de Deepthought, esta habrá
terminado.

Capítulo III
Parte obligatoria
Nombre de programa
libft.a
Archivos a entregar
Makefile, libft.h, ft_*.c
Makefile NAME, all, clean, fclean, re
Funciones autorizadas
Detalles debajo
Se permite usar
libft
todavía no la tienes
Descripción Escribe tu propia librería: un conjunto de
funciones que será una herramienta muy útil a lo
largo del cursus.
III.1. Consideraciones técnicas
• Declarar variables globales está prohibido.
• Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra
static para ello. De esta forma, las funciones se quedarán en el archivo apropiado.
• Pon todos tus archivos en la raíz de tu repositorio.
• Se prohibe entregar archivos no utilizados.
• Todos los archivos .c deben compilarse con las flags -Wall -Werror -Wextra.
• Debes utilizar el comando ar para generar la librería. El uso de libtool queda
prohibido.
• Tu libft.a tiene que ser creado en la raíz del repositorio.

III.2. Parte 1 - Funciones de libc
Para empezar, deberás rehacer algunas funciones de la libc. Tus funciones tendrán los
mismos prototipos e implementarán los mismos comportamientos que las funciones originales. Deberán ser tal y como las describe el man. La única diferencia será la nomenclatura.
Empezarán con el prefijo “ft_”. Por ejemplo, strlen se convertirá en ft_strlen.
Algunas funciones tienen en sus prototipos la palabra “restrict”.
Esta palabra forma parte del estándar de c99. Por lo tanto, está
prohibido incluirla en tus propios prototipos, así como compilar tu
código con la flag -std=c99.
Deberás escribir tus propias funciones implementando las siguientes funciones originales. No requieren de funciones autorizadas:
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
Para implementar estas otras dos funciones, tendrás que utilizar malloc():
• calloc
• strdup

III.3. Parte 2 - Funciones adicionales
En esta segunda parte, deberás desarrollar un conjunto de funciones que, o no son de
la librería libc, o lo son pero de una forma distinta.
Algunas de las siguientes funciones se pueden hacer de forma más
fácil si utilizas funciones de la parte 1.
Nombre de función
ft_substr
Prototipo char *ft_substr(char const *s, unsigned int start,
size_t len);
Archivos a entregar
-
Parámetros s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring.
Valor devuelto La substring resultante.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
Nombre de función
ft_strjoin
Prototipo char *ft_strjoin(char const *s1, char const *s2);
Archivos a entregar
-
Parámetros s1: La primera string.
s2: La string a añadir a ’s1’.
Valor devuelto La nueva string.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.
7
Libft Tu primera librería
Nombre de función
ft_strtrim
Prototipo char *ft_strtrim(char const *s1, char const *set)
