
const Nave = document.querySelector('.Nave');
const Meteoro = document.querySelector('.Meteoro');

const Navegation = () =>{
    
    Nave.classList.add('Navegation')
  
    
    setTimeout(()=>{

        Nave.classList.remove('Navegation')
    },1000);
}

const loop = setInterval(() => {
    const MeteoroPosition = Meteoro.OffsetLeft;
    console.log(MeteoroPosition)
},10);

document.addEventListener('keyDown', Navegation );