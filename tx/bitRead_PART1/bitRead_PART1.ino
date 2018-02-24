#include <IRremote.h>
IRrecv irrecv(11);
decode_results results;
int i=0;
char n[]="/GOD IS LOVE/";
int s=sizeof(n);
int d1=10;
void setup()
{
  Serial.begin(9600);
  Serial.println(s);
  pinMode(13,OUTPUT);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
}
void loop()
{

  delay(d1);
  if (irrecv.decode(&results)) {
    irrecv.resume(); 
  }
  if(results.value==1)
 { 
  int a[10],l=0, j=0;
   if(s==(i+1))
       i=0;
  if(n[i]!='\0')
  {
    int c=n[i];
    if(a[i]==42)
     Serial.println("");
    else
     Serial.print(n[i]);
    for(j=7 ; j>=0 ;j--)
     {
      int l=bitRead(c,j);
      digitalWrite(13,l);     
      delay(35);
     }
    i++;
    }
 }
   results.value=0;
    delay(d1);
   if (irrecv.decode(&results)) {
    irrecv.resume(); 
  }
  }
}
