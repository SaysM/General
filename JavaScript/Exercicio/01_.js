const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question('What\'s your name',(name)=>{
    console.log(name)
});
readline.question(`What's your name?`, response(name));
readline.close();
