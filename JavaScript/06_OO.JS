var name = {
    first : 'Martin ',
    middle: 'Luther ',
    last : 'King',
};
console.log(name.first + name.middle + name.last);

var objectName = {
    propertyName: 'Coding is fun ',
    otherPropertyName: 'this is also a key value'
};
console.log(objectName.propertyName + objectName.otherPropertyName)

/*
    ao usar {} a um objeto ele pode armazenar varios valores que podem possuir nomes, propriedades e/ou chaves 
    ENTENDO QUE AS DEFINIÇOES DAS VARIAVEIS DENTRO DOS OBEJTOS SE DA COM DOIS PONTOS E NAO COM IGUAL
*/

var teacup = {
    red: 100,
    green: 50,
    blue: 50
};
var sugar = teacup.green;
console.log(sugar)