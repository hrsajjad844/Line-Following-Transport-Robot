byte sensorState(){
  byte val = B00000000;
  // 11,9,8,7,6
  
  if(digitalRead(6)==1) val |= (1<<0);
  if(digitalRead(7)==1) val |= (1<<1);
  if(digitalRead(8)==1) val |= (1<<2);
  if(digitalRead(9)==1) val |= (1<<3);
  if(digitalRead(11)==1) val |= (1<<4);
  return val;
}

//Motor Control Functions
void goForward(){
    analogWrite(pwmm, 220);
    digitalWrite(rmp1,HIGH);
    digitalWrite(rmp2,LOW); 
    digitalWrite(lmp1,HIGH);
    digitalWrite(lmp2,LOW);
     
}
void goBackward(){
    analogWrite(pwmm, 127);
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,HIGH); 
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,HIGH);
     
}
  
void leftTurn(){
    analogWrite(pwmm, 200);
    digitalWrite(rmp1,HIGH);
    digitalWrite(rmp2,LOW); 
    //turn off Left motors
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,LOW);   
}
void rightTurn(){
    analogWrite(pwmm, 200); 
    digitalWrite(lmp1,HIGH);
    digitalWrite(lmp2,LOW);
    //turn off Right motors
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,LOW);
    
}

void leftTurn90(){
    analogWrite(pwmm, 127);
    digitalWrite(rmp1,HIGH);
    digitalWrite(rmp2,LOW); 
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,HIGH);
    delay(500);
}

void rightTurn90(){
    analogWrite(pwmm, 127);
    digitalWrite(lmp1,HIGH);
    digitalWrite(lmp2,LOW);
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,HIGH);
    delay(500);
}
void stopCar(){
    analogWrite(pwmm, 0); 
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,LOW);
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,LOW);
}

//  float obstacleDistance(){
//    digitalWrite(trigPin, LOW);
//    delayMicroseconds(2);
// 
//    digitalWrite(trigPin, HIGH);
//    delayMicroseconds(10);
//    digitalWrite(trigPin, LOW);
//
//    duration = pulseIn(echoPin, HIGH);
//    distance = duration*0.034/2;
//    return distance;
//  }
