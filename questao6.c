// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int max = 0;                          ---> 1
// for (int i = 0; i < max; i++) {       ---> 1 + (n+1) + n
//   printf("%d", i);                    ---> n
// }

// Total: 4+3n instruções
// Complexidade no pior caso: Como max é 0, a condição i < max falhará
// imediatamente, e o corpo do loop nunca será executado, logo a quantidade de
// instruções não depende de max, sendo constante e O(1)