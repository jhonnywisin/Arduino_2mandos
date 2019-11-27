
int pinX    = A0;
int pinY    = A1;
int pinX2   = A2;
int pinY2   = A3;

const int R = 250;
const int L = 5;

void setup() {

  Serial.begin(9600);

}

void loop() {

  int Xv   = 0;
  int Yv   = 0;
  int X2v  = 0;
  int Y2v  = 0;


  Xv   = analogRead(pinX);
  delay(L);
  X2v  = analogRead(pinX2);
  delay(L);
  Yv   = analogRead(pinY);
  delay(L);
  Y2v  = analogRead(pinY2);
  delay(L);

  Serial.print("X:");
  Serial.println(Xv);
  Serial.print("Y:");
  Serial.println(Yv);
  Serial.print("X2:");
  Serial.println(X2v);
  Serial.print("Y2:");
  Serial.println(Y2v);
  delay(R);
}
