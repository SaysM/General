Area_terreno: float
Valor_terreno: float
largura: int
comprimento: float10
V_metro:float

largura = int(input("Digite a largura do terreno: "))
comprimento = int(input("Digite o comprimento do terreno: "))
V_metro = float(input("Digite o valor do metro quadrado: "))
Area_terreno = largura * comprimento
Valor_terreno = Area_terreno * V_metro
print("Area do terreno = ", Area_terreno)
print("Preço do terreno = ", Valor_terreno)




