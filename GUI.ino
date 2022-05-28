void setup() {
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse
Serial.begin(9600);
}

char t;

void loop() {

if(Serial.available()){
  t = Serial.read();
}
if(t == 'A')
{
  Forward();
  delay(1000);
  Stop();
}
if(t == 'B')
{
  Forward();
  delay(2000);
  Stop();
}
if(t == 'C')
{
  Forward();
  delay(3000);
  Stop();
}
if(t == 'D')
{
  Forward();
  delay(4000);
  Stop();
}
if(t == 'E')
{
  Forward();
  delay(5000);
  Stop();
}
if(t == 'F')
{
  Forward();
  delay(6000);
  Stop();
}
if(t == 'G')
{
  Forward();
  delay(7000);
  Stop();
}
if(t == 'H')
{
  Forward();
  delay(8000);
  Stop();
}
if(t == 'I')
{
  Forward();
  delay(9000);
  Stop();
}
if(t == 'J')
{
  Left();
  delay(1000);
  Stop();
}
if(t == 'K')
{
  Left();
  delay(2000);
  Stop();
}
if(t == 'L')
{
  Left();
  delay(3000);
  Stop();
}
if(t == 'M')
{
  Left();
  delay(4000);
  Stop();
}
if(t == 'N')
{
  Left();
  delay(5000);
  Stop();
}
if(t == 'O')
{
  Left();
  delay(6000);
  Stop();
}
if(t == 'P')
{
  Left();
  delay(7000);
  Stop();
}
if(t == 'Q')
{
  Left();
  delay(8000);
  Stop();
}
if(t == 'R')
{
  Left();
  delay(9000);
  Stop();
}
if(t == 'S')
{
  Right();
  delay(1000);
  Stop();
}
if(t == 'T')
{
  Right();
  delay(2000);
  Stop();
}
if(t == 'U')
{
  Right();
  delay(3000);
  Stop();
}
if(t == 'V')
{
  Right();
  delay(4000);
  Stop();
}
if(t == 'W')
{
  Right();
  delay(5000);
  Stop();
}
if(t == 'X')
{
  Right();
  delay(6000);
  Stop();
}
if(t == 'Y')
{
  Right();
  delay(7000);
  Stop();
}
if(t == 'Z')
{
  Right();
  delay(8000);
  Stop();
}
if(t == '1')
{
  Right();
  delay(9000);
  Stop();
}
if(t == '2')
{
  Backward();
  delay(1000);
  Stop();
}
if(t == '3')
{
  Backward();
  delay(2000);
  Stop();
}
if(t == '4')
{
  Backward();
  delay(3000);
  Stop();
}
if(t == '5')
{
  Backward();
  delay(4000);
  Stop();
}
if(t == '6')
{
  Backward();
  delay(5000);
  Stop();
}
if(t == '7')
{
  Backward();
  delay(6000);
  Stop();
}
if(t == '8')
{
  Backward();
  delay(7000);
  Stop();
}
if(t == '9')
{
  Backward();
  delay(8000);
  Stop();
}
if(t == '0')
{
  Backward();
  delay(9000);
  Stop();
}
}
void Forward()
{
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
}
void Stop()
{
  t = '/';
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  delay(10);
}
void Backward()
{
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}


void Left()
{
  digitalWrite(11,HIGH);
}

void Right()
{
  digitalWrite(13,HIGH);
}
