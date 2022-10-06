/*12*/
/*Un ejemplo de declaración de función sería:*/
int eleva_a_n (int, int);

/*Y su definición sería:*/
int eleva_a_n (int x, int n)
{
    if (n<0) error ("exponente negativo");
    switch (n) {
    case 0: return 1;
    case 1: return x;
    default: return eleva_a_n (x, n-1);
}
}