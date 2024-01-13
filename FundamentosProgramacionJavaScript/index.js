// Variables y tipos de datos
console.log("VARIABLES Y TIPOS DE DATOS");
let entero = 100;
let cadenaCaracteres = "Harvey";
let booleano = true;

console.log(entero);
console.log(cadenaCaracteres);
console.log(booleano);

// Estructuras de control

console.log("ESTRUCTURAS DE CONTROL");
// Costo de Vehiculo = 100
let dinero = 100;
if(dinero>=100){
    console.log("Puedes comprar el auto.");
}else{
    console.log("No completas el auto.");
}

let dia = 20;

switch(dia){
    case 1: {
        console.log("Lunes");
        break;
    }
    case 2: {
        console.log("Martes");
        break;
    }
    default: {
        console.log("No existe el dia.");
    }
}

// Estructuras repetitivas

console.log("ESTRUCTURAS REPETITIVAS");
for(let i=0; i<=10; i++){
    console.log(i);
}

let i=0;
while(i<=10){
    console.log(i);
    i++;
}

//Funciones

console.log("FUNCIONES");
console.log("SUMA: " + sumar(3, 4));

function sumar(a, b){
    return a + b;
}