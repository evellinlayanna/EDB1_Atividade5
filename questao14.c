// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int a = n; // n > 3               ---> 1
// int b = 3;                        ---> 1
// do {
//   printf("%d", a * (a - b));      ---> n
//   a--;                            ---> n
// } while (a > b);                  ---> n+1

// Total: 3 + 3n
// Complexidade no pior caso: O(n)