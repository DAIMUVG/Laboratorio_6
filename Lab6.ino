//Dylan Ixcayau 18486
//Laboratorio #6: Carrera con TIVA C
//Fecha de creacion: 9 de septiembre del 2021
//Ultima fecha de modificacion: 20 de septiembre del 2021

#define LEDV PF_3                           //Defino las RGB con palabras sencillas
#define LEDB PF_2
#define LEDR PF_1
#define boton PF_4                          //Defino los botones de manera sencilla
#define boton2 PF_0
int buttonState = 0;                        //Defino variables
int buttonState1 = 0, buttonState2 = 0 ;
int cont = 0, ganador = 0, ganador2 = 0;
int cont1 = 0;
int cont2 = 0;
int cont3 = 0;
int estadosalida, estado, start = 0;
void setup() {
  pinMode(boton2, INPUT_PULLUP);            //Defino las entradas y salidas que usare
  pinMode(boton, INPUT_PULLUP);
  pinMode(LEDV, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(PD_0, OUTPUT);
  pinMode(PD_1, OUTPUT);
  pinMode(PD_2, OUTPUT);
  pinMode(PD_3, OUTPUT);
  pinMode(PA_6, INPUT_PULLUP);
  pinMode(PA_7, OUTPUT);
  pinMode(PE_1, OUTPUT);
  pinMode(PE_2, OUTPUT);
  pinMode(PE_3, OUTPUT);
  pinMode(PB_3, OUTPUT);
  pinMode(PC_4, OUTPUT);
  pinMode(PC_5, OUTPUT);
  pinMode(PC_6, OUTPUT);
  pinMode(PC_7, OUTPUT);
  pinMode(PD_6, OUTPUT);
  pinMode(PB_7, OUTPUT);
  pinMode(PB_6, OUTPUT);
  
}

void loop() {                               //Programa principal
  buttonState2 = digitalRead(PA_6);         //Boton de incio
  if(buttonState2 == LOW){                  
    ganador = 0;
    ganador2 = 0;
    
  digitalWrite(LEDR, HIGH);                 //configuracion de semaforo, en forma de carrera, encendemos una por una
  digitalWrite(LEDV, LOW);
  digitalWrite(LEDB, LOW);
  delay(1000);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDV, LOW);
  delay(1000);
  digitalWrite(LEDV, HIGH);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDR, LOW);
  delay(1000);                                //DELAY
  digitalWrite(LEDV, LOW);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDR, LOW);
  
  start = 1;                                  //Inicia la carrera
  }
  if (ganador == 0){                          //Todo se ejecuta hasta que alguien gana 
  buttonState = digitalRead(boton);           //leemos el estado del boton
  if(buttonState == LOW){                     
    estadosalida = 1;                         //Antirebote
  cont1 = cont+1;                             //Manejo del menu
  }
    if(estadosalida == 1 && buttonState == HIGH && start == 1){     //Condiciones para que el menu se ejecute

  switch(cont1){                             //el menu se maneja con cont1
    case 0:                                  //llegamos hasta 6 casos, 1 por cada led
       digitalWrite(PD_0, LOW);              //Pin en 0
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 1: 
       digitalWrite(PD_0, HIGH);              //Pin encendido
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 2:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, HIGH);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 3:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, HIGH);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 4:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, HIGH);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 5:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, HIGH);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 6:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, HIGH);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       break;
    case 7:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, HIGH);
       digitalWrite(PE_3, LOW);
       break;
    case 8:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, HIGH);
       break;
   default:                                   //Terminamos el menu y apagamos todo
      digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       digitalWrite(LEDV, LOW);               //Si gana el jugador 1 se enciende el RGB ROJO
        digitalWrite(LEDB, LOW);
        digitalWrite(LEDR, HIGH);
       ganador = 1;                           //Hay un ganador
       cont1 = 0;                             //limpiamos controladores del menu
       cont3 = 0;
       break;
      }
    cont = cont1;                         
    estadosalida = 0;
    cont1 = 0;
    cont3 = 0;
    }

                                        
    buttonState1 = digitalRead(boton2);       //Se repite para el segundo jugador
  if(buttonState1 == LOW){
    estado = 1;
  cont3 = cont2+1;
  }
    if(estado == 1 && buttonState1 == HIGH && start == 1){

  switch(cont3){
    case 0: 
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 1: 
       digitalWrite(PB_3, HIGH);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 2:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, HIGH);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 3:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, HIGH);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 4:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, HIGH);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 5:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, HIGH);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 6:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, HIGH);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       break;
    case 7:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, HIGH);
       digitalWrite(PB_6, LOW);
       break;
    case 8:
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, HIGH);
       break;
   default:
       digitalWrite(PD_0, LOW);
       digitalWrite(PD_1, LOW);
       digitalWrite(PD_2, LOW);
       digitalWrite(PD_3, LOW);
       digitalWrite(PA_7, LOW);
       digitalWrite(PE_1, LOW);
       digitalWrite(PE_2, LOW);
       digitalWrite(PE_3, LOW);
       digitalWrite(PB_3, LOW);
       digitalWrite(PC_4, LOW);
       digitalWrite(PC_5, LOW);
       digitalWrite(PC_6, LOW);
       digitalWrite(PC_7, LOW);
       digitalWrite(PD_6, LOW);
       digitalWrite(PB_7, LOW);
       digitalWrite(PB_6, LOW);
       digitalWrite(LEDV, HIGH);                          //Si gana el jugador 1 se enciende el RGB VERDE
        digitalWrite(LEDB, LOW);
        digitalWrite(LEDR, LOW);
       cont3 = 0;
       cont1 = 0;
       ganador = 1;
       break;
      }
    cont2 = cont3;
    estado = 0;
    cont3 = 0;
    cont1 = 0;
    }
  }
      delay(100);                                             //delay
}
