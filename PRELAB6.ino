
int cont = 0;
int contnuevo = 0;

void setup() {
  pinMode(PF_4, INPUT);
  pinMode(PD_0, OUTPUT);
  pinMode(PD_1, OUTPUT);
  pinMode(PD_2, OUTPUT);
  pinMode(PD_3, OUTPUT);
  pinMode(PE_0, OUTPUT);
  pinMode(PE_1, OUTPUT);
  pinMode(PE_2, OUTPUT);
  pinMode(PE_3, OUTPUT);
}

void loop() {
  if(digitalRead(PF_4)== HIGH){
    contnuevo = cont+1;
    if(contnuevo != cont){

      Serial.println(contnuevo);

      switch(contnuevo){
        case 1: 
              digitalWrite(PD_0, HIGH);
        break;
        case 2:
              digitalWrite(PD_1, HIGH);
        break;
        case 3:
              digitalWrite(PD_2, HIGH);
        break;
        case 4:
               digitalWrite(PD_3, HIGH);
        break;
        case 5:
              digitalWrite(PE_0, HIGH);
        break;
        case 6:
              digitalWrite(PE_1, HIGH);
        break;
        case 7:
              digitalWrite(PE_2, HIGH);
        break;
        case 8:
              digitalWrite(PE_3, HIGH);
        break;
        default:
              pinMode(PD_0, LOW);
              pinMode(PD_1, LOW);
              pinMode(PD_2, LOW);
              pinMode(PD_3, LOW);
              pinMode(PE_0, LOW);
              pinMode(PE_1, LOW);
              pinMode(PE_2, LOW);
              pinMode(PE_3, LOW);
              contnuevo = 0;
        break;
        }
        cont = contnuevo;
      }
    }
  delay(100);
}
