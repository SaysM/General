function Calcular(){
    BaseR = document.getElementById("BaseRet");
    AltR = document.getElementById("AltRet");
    Res = document.getElementById("Resultado");
    Base = Number(BaseR.value);
    Altura = Number(AltR.value);

    Area = Base * Altura;
    Perimetro = Base + Base + Altura + Altura;
    Diagonal = (Base * Base) + (Altura * Altura);
    Res.innerHTML = `Area = ${Area}`;
    Res.innerHTML += `Perimetro = ${Perimetro}`;
    Res.innerHTML += ``;

}