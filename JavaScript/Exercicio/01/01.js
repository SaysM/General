function Calcular(){
    var larg = document.getElementById("TextLarg");
    var Comp = document.getElementById("TextComp");
    var Valor = document.getElementById("TextMetro");
   
    largura = Number(larg.value);
    Comprimento = Number(Comp.value);
    Valor_real = Number(Valor.value);

    Area_Total = largura * Comprimento;
    Valor_Total = Area_Total * Valor_real;

    Resp = document.getElementById("Res");
    Resp.innerHTML = `A area total do terreno é igual a ${Area_Total} e o preço total é R$${Valor_Total}`


}