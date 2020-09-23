
def factorial(n):
  f = 1
  for i in range(0,n):
    f=f*(n-i)
  return f

def combinacao(n, p):
  return factorial(n) / (factorial(p) * factorial(n-p))

def dist_binomial(n, x, p):
  return (combinacao(n, x)) * (p**x) * ((1-p)**(n-x))

print()
print("_________________________________________________________________________________________________________")
print("  Ola, bem vinda(o) ao programa que vai te ajudar a resolver questoes referentes a Distribuiçoes Binomiais:")
print("  Para Distribuição Binomial digite 1;")
print("  Para Distribuição Binomial Acumulada digite 2.")
print()

while True:
  user = input('  "1" ou "2": ')

  if user == "1":
    print(round(dist_binomial(int(input("  Digite o numero referente a N: ")), int(input("  Digite o numero referente a X: ")), float(input("  Digite o numero referente a P (Por favor, use o ponto no lugar da virgula):  "))), 4 ))
    print()
    print("  Agradecemos pela preferencia.")
    print("_______________________________________________________________________________________________________")
    break

  if user == "2":
    n = int(input("  Digite o numero referente a N: "))
    x = int(input("  Digite o numero referente a X: "))
    p = float(input("  Digite o numero referente a P (Por favor, use o ponto no lugar da virgula): "))
    soma = 0
    for i in range(x+1):
      soma += dist_binomial(n, i, p)
    print()
    print("  Resultado = ", round(soma, 4))
    print()
    print("  Agradecemos pela preferencia.")
    print("_______________________________________________________________________________________________________")
    break
