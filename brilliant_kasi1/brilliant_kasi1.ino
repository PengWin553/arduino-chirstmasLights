int k;
int l;
int m;
int n;
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  Serial.begin(9600);
}
void loop(){
  //FROM THE CENTER
  for((k = 7) && (l = 8); k >= 2; (k--) && (l++)){
    Serial.println("FROM THE CENTER");
     digitalWrite(k,HIGH);
    digitalWrite(l,HIGH);
    delay(100);
    digitalWrite(k,LOW);
    digitalWrite(l,LOW);
    delay(100);
  }
   //TO THE CENTER
  for((m = 2) && (n = 13); m <= 7; (m++) && (n--)){
    Serial.println("TO THE CENTER");
    digitalWrite(m,HIGH);
    digitalWrite(n,HIGH);
    delay(100);
    digitalWrite(m,LOW);
    digitalWrite(n,LOW);
    delay(100);
  }
  //FROM THE CENTER
  for((k = 7) && (l = 8); k >= 2; (k--) && (l++)){
    Serial.println("FROM THE CENTER");
    digitalWrite(k,HIGH);
    digitalWrite(l,HIGH);
    delay(100);
    digitalWrite(k,LOW);
    digitalWrite(l,LOW);
    delay(100);
  }
   //TO THE CENTER
  for((m = 2) && (n = 13); m <= 7; (m++) && (n--)){
    Serial.println("TO THE CENTER");
    digitalWrite(m,HIGH);
    digitalWrite(n,HIGH);
    delay(100);
    digitalWrite(m,LOW);
    digitalWrite(n,LOW);
    delay(100);
  }
  //FROM THE CENTER WITH BLANKS (1 of 2)
  for((k = 7) && (l = 8); k >= 2; (k-=2) && (l+=2)){
    Serial.println("FROM THE CENTER WITH BLANKS (1 of 2)");
    digitalWrite(k,HIGH);
    digitalWrite(l,HIGH);
    delay(1000);
  }
  //FROM THE CENTER WITH BLANKS (1 of 2)
  for((k = 6) && (l = 9); k >= 2; (k-=2) && (l+=2)){
    Serial.println("FROM THE CENTER WITH BLANKS (2 of 2)");
    digitalWrite(k,HIGH);
    digitalWrite(l,HIGH);
    delay(1000);
  }
  //TO THE CENTER WITH BLANKS (1 of 2)
  for((k = 7) && (l = 8); k >= 2; (k-=2) && (l+=2)){
    Serial.println("TO THE CENTER WITH BLANKS (1 of 2)");
    digitalWrite(k,LOW);
    digitalWrite(l,LOW);
    delay(1000);
  }
  //TO THE CENTER WITH BLANKS (1 of 2)
  for((k = 6) && (l = 9); k >= 2; (k-=2) && (l+=2)){
    Serial.println("TO THE CENTER WITH BLANKS (2 of 2)");
    digitalWrite(k,LOW);
    digitalWrite(l,LOW);
    delay(1000);
  }
  //TO THE LEFT
  for(int i = 2; i<=13; i++){
    Serial.println("TO THE LEFT");
    digitalWrite(i,HIGH);
  delay(100);
    digitalWrite(i,LOW);
    delay(100);
  }
  //TO THE RIGHT
  for(int j = 13; j>=2; j--){
    Serial.println("TO THE RIGHT");
    digitalWrite(j,HIGH);
  delay(100);
    digitalWrite(j,LOW);
    delay(100);
  }
  //TURN ON: TO THE CENTER FROM BOTH SIDES
  for((m = 2) && (n = 13); m <=7; (m++) && (n--)){
    Serial.println("TURN ON: TO THE CENTER FROM BOTH SIDES");
    digitalWrite(m,HIGH);
    delay(250);
    digitalWrite(n,HIGH);
    delay(250);
  }
   //TURN OFF: TO THE CENTER FROM BOTH SIDES
  for((m = 2) && (n = 13); m <=7; (m++) && (n--)){
    Serial.println("TURN OFF: TO THE CENTER FROM BOTH SIDES");
    digitalWrite(m,LOW);
    delay(250);
    digitalWrite(n,LOW);
    delay(250);
  }
}