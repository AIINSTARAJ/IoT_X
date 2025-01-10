const int sensorpin = A0;
const float base_temp = 25.0;

void setup(){
    Serial.begin(9600);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
}

void loop(){
    int sensorval = analogread(AO);
    Serial.print("Sensor Value: ")
    Serial.print(sensorval)

    float voltage = (sensorVal/1024.0) * 5.0;

    Serial.print(“, Volts: “);
    Serial.print(voltage);
    Serial.print(“, degree C: “);

    float temperature = (voltage - .5) * 100;

    Serial.println(temperature);
    
    if (temperature < base_temp)
    {
        digitalwrite(2,LOW);
        digitalwrite(3,LOW);
        digitalwrite(4,LOW);
    }
    else if(temperature >= baselineTemp + 2 && temperature < baselineTemp+4){
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
    }
    else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
    }
    else if(temperature >= baselineTemp+6){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
    }

    delay(1)
}

