var myBackpack = {
    food:[
        'bananas',
        'nuts',
        'energy bar'
    ],
    equipament:[
        'map',
        'compass'
    ],
    clothing:[
        'scarf',
        'jacket',
        'hat'
    ]
}
console.log(myBackpack.food)

for (var food in myBackpack){
    console.log(food)
}