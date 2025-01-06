int switchState = 0;

void setup(){
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(2,INPUT);
}

void loop(){
    switchState = digitalread(2);
    if (switchState == 'HIGH'){
        digitalwrite(3,LOW);
        digitalwrite(4,LOW);
        digitalwrite(5,HIGH);
        delay(250);
        digitalwrite(4,HIGH);
        digitalwrite(5,LOW);
        delay(250);
    }
    else{
        digitalwrite(3,HIGH);
        digitalwrite(4,LOW);
        digitalwrite(5,LOW);
    }
}