int r=4,y=3,g=2;
int a=13,b=12,c=11,d=10;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}

void s1()
{
  for(int i=0;i<500;i++)
  {
    g1();
    off();
    delay(4);
    r2();
    off();
    delay(4);
    r3();
    off();
    delay(4);
    r4();
    off();
    delay(4);
  }
}

void s2()
{
  for(int i=0;i<500;i++)
  {
    g2();
    off();
    delay(4);
    r1();
    off();
    delay(4);
    r3();
    off();
    delay(4);
    r4();
    off();
    delay(4);
  }
}

void s3()
{
  for(int i=0;i<500;i++)
  {
    g3();
    off();
    delay(4);
    r1();
    off();
    delay(4);
    r2();
    off();
    delay(4);
    r4();
    off();
    delay(4);
  }
}

void s4()
{
  for(int i=0;i<500;i++)
  {
    g4();
    off();
    delay(4);
    r1();
    off();
    delay(4);
    r2();
    off();
    delay(4);
    r3();
    off();
    delay(4);
  }
}

void a1()
{
  for(int i=0;i<200;i++)
  {
    y1();
    off();
    delay(4);
    y2();
    off();
    delay(4);
  }
}

void a2()
{
  for(int i=0;i<200;i++)
  {
    y2();
    off();
    delay(4);
    y3();
    off();
    delay(4);
  }
}

void a3()
{
  for(int i=0;i<200;i++)
  {
    y3();
    off();
    delay(4);
    y4();
    off();
    delay(4);
  }
}

void a4()
{
  for(int i=0;i<200;i++)
  {
    y4();
    off();
    delay(4);
    y1();
    off();
    delay(4);
  }
}


void off()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(y, LOW);
}

void g1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g,HIGH);
}

void g2()
{
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g,HIGH);
}

void g3()
{
  digitalWrite(c, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g,HIGH);
}

void g4()
{
  digitalWrite(d, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g,HIGH);
}

void r1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(r,HIGH);
}

void r2()
{
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(r,HIGH);
}

void r3()
{
  digitalWrite(c, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(r,HIGH);
}

void r4()
{
  digitalWrite(d, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(r,HIGH);
}

void y1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(y,HIGH);
}

void y2()
{
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(y,HIGH);
}

void y3()
{
  digitalWrite(c, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(y,HIGH);
}

void y4()
{
  digitalWrite(d, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(y,HIGH);
}

void loop()
{
  s1();
  a1();
  delay(500);
  s2();
  a2();
  delay(500);
  s3();
  a3();
  delay(500);
  s4();
  a4();
  delay(500);
}
