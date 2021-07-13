////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
/////                   E:Links Unten                      /////
/////                   D:Unten                            /////
/////                   C:Rechts Unten                     /////
/////                   G:Mitte                            /////
/////                   F:Links Oben                       /////
/////                   A:Oben                             /////
/////                   B:Rechts Oben                      /////
/////                   DP:Punkt                           /////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

//Integer
int taster = 13;
int F = 12;
int G = 11;
int D = 10;
int E = 9;
int DP = 8;
int C = 7;
int B = 6;
int A = 5;

//Delay Settings 
int time = 1500;

//Settings
void setup()
{
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

//Code
void loop()
{
  if (digitalRead (taster) == HIGH) {
    Null ();
    delay(time);
    Eins ();
    delay(time);
    Zwei ();
    delay(time);
    Drei ();
    delay(time);
    Vier ();
    delay(time);
    Funf ();
    delay(time);
    Sechs ();
    delay(time);
    Sieben ();
    delay(time);
    Acht ();
    delay(time);
    Neun ();
    delay(time);
    Aus ();
  }
}

//Settings
void Null () {
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(DP, HIGH);
}

void Eins () {
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(D, LOW);
}

void Zwei () {
  digitalWrite(C, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
}

void Drei () {
  digitalWrite(E, LOW);
  digitalWrite(C, HIGH);
}

void Vier () {
  digitalWrite(D, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, HIGH);
}

void Funf () {
  digitalWrite(B, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(D, HIGH);
}

void Sechs () {
  digitalWrite(E, HIGH);
}

void Sieben () {
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(D, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
}
void Acht () {
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(E, HIGH);

}
void Neun () {
  digitalWrite(E, LOW);
}

void Aus () {
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(DP, LOW);
}

//Code created by [AMIXSO]
//GITHUB: https://github.com/AMIXSO
