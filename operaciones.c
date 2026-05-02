#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
/* sirve para combinar o añadir dos o más valores numéricos (enteros o de coma flotante) para obtener un total a + b */
int sumar(int a, int b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */
/* sirve para calcular la diferencia entre dos valores numéricos (enteros o de punto flotante) a - b */
int restar(int a, int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*sirve para calcular el producto de dos números (enteros o flotantes) a * b */
int multiplicar(int a, int b)
{
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
int esPar(int n)
{
    return (n % 2) == 0; /* version main */
}
