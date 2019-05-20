
int s1=5,s2=6,s3=7,s4=8,s5=9,s6=10;
int ha=2,hb=3,hc=4;
int hallsensor_a,hallsensor_b,hallsensor_c;



void setup() {
  // put your setup code here, to run once:
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(s4,OUTPUT);
  pinMode(s5,OUTPUT);
  pinMode(s6,OUTPUT);

  pinMode(ha,INPUT);
  pinMode(hb,INPUT);
  pinMode(hc,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
hallsensor_a = digitalRead(ha);
hallsensor_b = digitalRead(hb);
hallsensor_c = digitalRead(hc);

if(hallsensor_a==1 && hallsensor_b==0 && hallsensor_c==1)
{
digitalWrite(s1,HIGH);
digitalWrite(s6,HIGH);

digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);


}
else if(hallsensor_a==1 && hallsensor_b==0 && hallsensor_c==0)
{
  digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);

digitalWrite(s3,LOW);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
digitalWrite(s6,LOW);


}
else if(hallsensor_a==1 && hallsensor_b==1 && hallsensor_c==0)
{
  digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);

digitalWrite(s1,LOW);
digitalWrite(s6,LOW);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
}
else if(hallsensor_a==0 && hallsensor_b==1 && hallsensor_c==0)
{
  digitalWrite(s3,HIGH);
digitalWrite(s4,HIGH);

digitalWrite(s2,LOW);
digitalWrite(s1,LOW);
digitalWrite(s6,LOW);
digitalWrite(s5,LOW);
}
else if(hallsensor_a==0 && hallsensor_b==1 && hallsensor_c==1)
{
  digitalWrite(s4,HIGH);
digitalWrite(s5,HIGH);

digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
digitalWrite(s1,LOW);
digitalWrite(s6,LOW);
}
else if(hallsensor_a==0 && hallsensor_b==0 && hallsensor_c==1)
{
  digitalWrite(s5,HIGH);
digitalWrite(s6,HIGH);

digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
digitalWrite(s4,LOW);
digitalWrite(s1,LOW);
}

}
