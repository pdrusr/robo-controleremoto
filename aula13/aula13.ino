// VARIÁVEIS HABILITAR MOTORES
int ENA = 9;
int ENB = 10;

// VARIÁVEIS ENTRADA DOS MOTORES
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

// VARIÁVEL CARACTER BLUETOOTH
char letra = 'S'

// CONFIGURAÇÃO
void setup()
{
    // DEFINIÇÃO DO MODO DE PINO MOTORES
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    // INICIALIZAÇÃO DO ROBÔ
    Serial.begin(9600);
    Serial.println("ROBÔ INICIADO!");
}

// EXECUÇÃO
void loop()
{
    // VERIFICAÇÃO DA DISPONIBILIDADE DO SERIAL
    if (Serial.available() > 0)
    {
        // DEFINIÇÃO DO CARACTER RECEBIDO
        letra = Serial.read();
        Serial.println(letra);

        // VERIFICAÇÃO DO CARACTER
        if (letra == 'F')
        {
            MotoresFrente();
        }
        if (letra == 'B')
        {
            MotoresTras();
        }
        if (letra == 'L')
        {
            MotoresEsquerda();
        }
        if (letra == 'R')
        {
            MotoresDireita();
        }
        if (letra == 'S')
        {
            MotoresParar();
        }
    }
}

// FUNÇÃO ROBÔ IR PARA FRENTE
void MotoresFrente()
{
    analogWrite(ENA, 128);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    analogWrite(ENB, 128);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

// FUNÇÃO ROBÔ IR PARA TRÁS
void MotoresTras()
{
    analogWrite(ENA, 128);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    analogWrite(ENB, 128);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

// FUNÇÃO ROBÔ GIRAR PARA ESQUERDA
void MotoresEsquerda()
{
    analogWrite(ENA, 128);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    analogWrite(ENB, 128);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

// FUNÇÃO ROBÔ GIRAR PARA DIREITA
void MotoresDireita()
{
    analogWrite(ENA, 128);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    analogWrite(ENB, 128);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}

// FUNÇÃO ROBÔ PARAR
void MotoresParar()
{
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    analogWrite(ENB, 0);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}