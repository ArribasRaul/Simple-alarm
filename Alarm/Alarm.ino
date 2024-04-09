/*
////Tiempos////
int inicio = 0;
int tiempo1 = 0;
int tiempo2 = 0;
int tiempo3 = 0;
int tiempo4 = 0;
*/

////Estados////
int estado = 0;
int espera1 = 0;
int reposo = 1;
int espera2 = 2;
int activado = 3;


////PIO////
int led = 1;
int sensor =2;
int rele = 3;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(rele, OUTPUT);
  pinMode(led, OUTPUT);

  digitalWrite(rele, LOW);
  digitalWrite(led, LOW);
}

void loop() {
  if(estado == espera1){
    /*
    if(inicio == 0){
      tiempo1 = millis();
      inicio = 1;
    }

    tiempo2 = millis();

    if((tiempo2 - tiempo1) > 60000){
      inicio = 0;
      estado = reposo;
    }
    */
    delay(60000);
  }

  if(estado == reposo){
    digitalWrite(rele, LOW);
    digitalWrite(led, LOW);

    if(sensor == LOW){
      estado = espera2;
    }
  }

  if(estado == espera2){
    /*
    if(inicio == 0){
      tiempo3 = millis();
      inicio = 1;
    }

    tiempo4 = millis();

    if((tiempo4 - tiempo3) > 30000){
      inicio = 0;
      estado = activado;
    }
    */
    delay(30000);
  }

  if(estado == activado){
    digitalWrite(rele, HIGH);
    digitalWrite(led, HIGH);
  }
}
