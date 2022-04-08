algoritmo "Baskara"

var
  a,b,c,delta,x1,x2: real

inicio
   escreva("Coeficiente a: ")
   leia(a)
   escreva("Coeficiente b: ")
   leia(b)
   escreva("Coeficiente c: ")
   leia(c)
   
   delta <- (b^2) - (4 * a * c)
   
   x1 <- (-(b) + RaizQ(delta)) / (2 * a)
   x2 <- (-(b) - RaizQ(delta)) / (2 * a)
   
   Escreval("X1 = ", x1:8:4)
   Escreval("X2 = ", x2:8:4)
fimalgoritmo