var cor = [
    'black',
    'blue14',
    'red7445',
    'yellow6',
    'pink5',
]

for (var letter of cor){
    console.log(letter);
}
/*
Uma estrutura For simples, mas aqui eu dou o comando de "variavel LETRA DE cor" mas poderia dar "variavel de LETRA EM cor"
*/
for (var letter in cor){
    console.log(letter);
}

for (var number of cor){
    console.log(number);
} 

for(var letter of "colonostopia"){
    console.log(letter);
}

for(var i = 0; i<10; i = i+1) {
    console.log(i);
}

for (var element of [
    5,
    4,
    3,
    2,
    1
]){
    console.log(element);
}