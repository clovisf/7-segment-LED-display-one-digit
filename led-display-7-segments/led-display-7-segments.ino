

void setup() {
  // put your setup code here, to run once:
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D10, OUTPUT);

}

void ligadisplay(int seg){
  int segments[8]= {0};

  if(seg == 0){
    segments[0]=1;
    segments[1]= 1;
    segments[2]=0;
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 1){
    segments[0]=1;
    segments[1]=1;
    segments[2]=1;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=1;
  }else if (seg == 2){
    segments[0]=1;
    segments[1]=0;
    segments[2]=1;
    segments[3]=0;
    segments[4]=0;
    segments[5]=1;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 3){
    segments[0]=1;
    segments[1]=0;
    segments[2]=1;
    segments[3]=1;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 4){
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=1;
  }else if(seg == 5){
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=1;
    segments[4]=0;
    segments[5]=0;
    segments[6]=1;
    segments[7]=0;
  }else if(seg == 6){
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=1;
    segments[7]=0;
  }else if(seg == 7){
    segments[0]=1;
    segments[1]=1;
    segments[2]=1;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 8){
    segments[0]=1;
    segments[1]=0;
    segments[2]= 0;   
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 9){
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }
  digitalWrite(D3, segments[0]);
  digitalWrite(D4, segments[1]);
  digitalWrite(D5, segments[2]);
  digitalWrite(D6, segments[3]);
  digitalWrite(D7, segments[4]);
  digitalWrite(D8, segments[5]);
  digitalWrite(D9, segments[6]);
  digitalWrite(D10, segments[7]);

}
void loop() {
  // put your main code here, to run repeatedly:

  
  ligadisplay(6); // DP, g, f, ....
  delay(1000);
  ligadisplay(3);
  delay(1000);


}
