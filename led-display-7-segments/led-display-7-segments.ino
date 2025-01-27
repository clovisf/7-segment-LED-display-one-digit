long oldtime= 0;
int i= 0;

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

void displayControl(int seg){
  int segments[8]= {0};

  if(seg == 0 || seg > 9){ // DP, g, f, ....
    segments[0]=1;
    segments[1]= 1;
    segments[2]=0;
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 1){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=1;
    segments[2]=1;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=1;
  }else if (seg == 2){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]=1;
    segments[3]=0;
    segments[4]=0;
    segments[5]=1;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 3){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]=1;
    segments[3]=1;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0; 
  }else if(seg == 4){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=1;
  }else if(seg == 5){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=1;
    segments[4]=0;
    segments[5]=0;
    segments[6]=1;
    segments[7]=0;
  }else if(seg == 6){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]=0;
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=1;
    segments[7]=0;
  }else if(seg == 7){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=1;
    segments[2]=1;
    segments[3]=1;
    segments[4]=1;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 8){ // DP, g, f, ....
    segments[0]=1;
    segments[1]=0;
    segments[2]= 0;   
    segments[3]=0;
    segments[4]=0;
    segments[5]=0;
    segments[6]=0;
    segments[7]=0;
  }else if(seg == 9){ // DP, g, f, ....
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

  if(millis() - oldtime > 500){ // enters the display function every "x" milisseconds
    oldtime= millis();

    if(i < 10){ // counts from 0 to 9
      displayControl(i); //sends an integer between 0 and 9 to the display
      i++;      
    }else{
      i= 0;
    }
        
  }
}
