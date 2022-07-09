function Carregar(){
    msg = document.getElementById("msg");
    img = document.getElementById("time_pic2");
    data = new Date()
    hora = data.getHours();
    msg.innerHTML =`Agora são ${hora} horas`
    color = document.getElementById("body1")

    if(hora > 6 && hora < 12){
        img.src= '/JavaScript/Curso_em_video/006(Exercicios)/morning.jpg';
        color.setAttribute('background','#7894ba')
    }else if (hora > 12 && hora < 20){
        img.src = '/JavaScript/Curso_em_video/006(Exercicios)/afternoon.jpg';
        color.setAttribute('background-color', '#2f4f6c')
    }else{
        img.src = '/JavaScript/Curso_em_video/006(Exercicios)/nigth.png';
        color.setAttribute('backgroundColor', 'black')
    }
}

