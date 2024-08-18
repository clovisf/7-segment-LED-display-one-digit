#define A D0
#define B D1
#define C D2
#define D D3
#define E D4
#define F D5
#define G D6
#define DP D7

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
  digitalWrite(DP, LOW);
  digitalWrite(A, HIGH);
  delay(500);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(500);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  delay(500);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(500);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  delay(500);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  delay(500);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(500);
  digitalWrite(G, LOW);
  digitalWrite(DP, HIGH);
  delay(500);

}
