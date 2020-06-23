char x;
String s="SIVANT";
int k=0;
int t=12;
int e=11; 
int buzz=13;


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  Serial.begin(9600);
}

void off()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}

void devoff()
{
  off();
  digitalWrite(buzz,LOW);
}

void red()
{
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
}

void yellow()
{
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
}

void green()
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
}

void name()
{ 
  k=0;
  k=s.length();
  for (int i=0;i<k;i++)
  {
  x=s.charAt(i);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
    
  switch(x)
    {
      case 'A':
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(10,LOW);
      break;
      case 'B':
      digitalWrite(3,LOW);
      break;
      case 'C':
      digitalWrite(3,LOW);
      digitalWrite(6,LOW);
      break;
      case 'D':
      digitalWrite(6,LOW);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
      break;
      case 'E':
      break;
      case 'F':
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      break;
      case 'G':
      digitalWrite(8,LOW);
      digitalWrite(10,LOW);
      break;
      case 'H':
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      break;
      case 'I':
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      case 'J':
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(9,LOW);
      break;
      case 'K':
      digitalWrite(3,LOW);
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      break;
      case 'L':
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
      case 'M':
      digitalWrite(7,LOW);
      digitalWrite(5,LOW);
      break;
      case 'N':
      digitalWrite(7,LOW);
      digitalWrite(5,LOW);
      break;
      case 'O':
      digitalWrite(6,LOW);
      case 'P':
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      break;
      case 'Q':
      digitalWrite(4,LOW);
      digitalWrite(2,LOW);
      digitalWrite(8,LOW);
      break;
      case 'R':
      digitalWrite(5,LOW);
      digitalWrite(3,LOW);
      break;
      case 'S':
      digitalWrite(10,LOW);
      break;
      case 'T':
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      break;
      case 'U':
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
      case 'V':
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(2,LOW);
      digitalWrite(8,LOW);
      break;
      case 'W':
      digitalWrite(7,LOW);
      break;
      case 'X':
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      digitalWrite(3,LOW);
      digitalWrite(9,LOW);
      break;
      case 'Y':
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(7,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      break;
      case 'Z':
      digitalWrite(3,LOW);
      digitalWrite(9,LOW);
      case '.':
      off();
      digitalWrite(6,HIGH);
      break;
      default:
      delay(1000);
      off();
    }
    delay(1500);
  }
}

void loop()
{
  devoff();
    
  digitalWrite(t,LOW);
  delayMicroseconds(5);
  digitalWrite(t,HIGH);
  delayMicroseconds(1000);
  digitalWrite(t,LOW);
  int p=pulseIn(e,HIGH);
  int d=0.034*0.5*p;
  if(d>100)
  {
    green();
  }
  else if(d>60)
  {
    yellow();
    analogWrite(buzz,50);
  }
  else
  {
    red();
    analogWrite(buzz,255);
  }
  delay(1000);
  name();
  delay(3000);
}
