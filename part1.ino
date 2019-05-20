 /*
 int start_time;
 int end_time;
 int T=12;
 int count1,count2;
 */

 unsigned long start_time;
 unsigned long end_time;
 unsigned long T=12*1000;
 
 
void setup()
 { 
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);

 /*
 pinMode(2,OUTPUT);
 Serial.begin(9600);
 */
 }

void loop()
 { 
start_time = micros();
end_time = micros();


//Ha 2
//Hb 3
//Hc 4 
while(1)
{
if(end_time - start_time <= T/6)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
end_time = micros();

}

else if(end_time - start_time <= (2*T)/6)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
end_time = micros();
}
else if(end_time - start_time <= (3*T)/6)
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
end_time = micros();
}
else if(end_time - start_time <= (4*T)/6)
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
end_time = micros();
}
else if(end_time - start_time <= (5*T)/6)
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
end_time = micros();
}
else if(end_time - start_time <= (6*T)/6)
{
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
end_time = micros();
}
else
{
break;
}

}
 
 
 
 

 /*count1=0;
 count2=0;
  start_time = millis();
  end_time = millis();
  while(end_time - start_time <= T/2)
 {
 digitalWrite(2,HIGH);
 end_time = millis();
 count1++;
 } 
 Serial.print("count1");
 Serial.print(count1);
 
 
 while(end_time - start_time > T/2 && end_time - start_time <= T )
 {
 digitalWrite(2,LOW);
 end_time = millis();
 count2++;
 }
 
 Serial.print("count2");
 Serial.print(count2);
 */
  
  //Serial.println(time);  
 }
