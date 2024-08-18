#define A D0
#define B D1
#define C D2
#define D D3
#define E D4
#define F D5
#define G D6
#define DP D7

void clear(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);

}
void one(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}
void two(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
}
void three(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}
void four(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void five(){
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void six(){
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void seven(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}
void eight(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void nine(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void zero(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}
void a(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void b(){
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void c(){
  digitalWrite(A, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}
void d(){
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
}
void e(){
  digitalWrite(A, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void f(){
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  one();
  delay(500);
  clear();
  two();
  delay(500);
  clear();
  three();
  delay(500);
  clear();
  four();
  delay(500);
  clear();
  five();
  delay(500);
  clear();
  six();
  delay(500);
  clear();
  seven();
  delay(500);
  clear();
  eight();
  delay(500);
  clear();
  nine();
  delay(500);
  clear();
  zero();
  delay(500);
  clear();
  a();
  delay(500);
  clear();
  b();
  delay(500);
  clear();
  c();
  delay(500);
  clear();
  d();
  delay(500);
  clear();
  e();
  delay(500);
  clear();
  f();
  delay(500);
  clear();
}
