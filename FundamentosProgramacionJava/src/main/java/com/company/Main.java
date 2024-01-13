package com.company;

public class Main {
    public static void main(String[] args) {

        // Variables y tipos de datos
        System.out.println("VARIABLES Y TIPOS DE DATOS");
        int entero = 300;
        String cadenaCaracteres = "Harvey";
        float flotante = 30.50f;
        boolean boleano = true;

        System.out.println("int: " + entero);
        System.out.println("String: " + cadenaCaracteres);
        System.out.println("float: " + flotante);
        System.out.println("boolean: " + boleano);

        // Estructuras de control

        System.out.println("ESTRUCTURAS DE CONTROL");
        // Costo de Vehiculo = 100
        int dinero = 10;
        if(dinero>=100){
            System.out.println("Puedes comprar el auto.");
        }else{
            System.out.println("No completas el auto.");
        }

        int dia = 9;

        switch (dia){
            case 1: {
                System.out.println("Lunes");
                break;
            }
            case 2: {
                System.out.println("Martes");
                break;
            }
            default: {
                System.out.println("No existe el dia");
            }
        }

        // Estructuras repetitivas

        System.out.println("ESTRUCTURAS REPETITIVAS");
        for(int i=0; i<=10; i++){
            System.out.println(i);
        }

        int i=0;
        while(i<=10){
            System.out.println(i);
            i++;
        }

        //Funciones

        System.out.println("FUNCIONES");
        System.out.println("Suma: " + sumar(3, 4));
    }

    public static int sumar(int a, int b){

        return a + b;
    }
}