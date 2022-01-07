// DECLARAÇÃO DAS PINAGENS DO SENSOR
int trig = 2;
int echo = 3;

// CONFIGURAÇÃO
void setup()
{
    // DEFININDO O MODO DOS PINOS
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);

    // INICIALIZANDO A CONEXÃO SERIAL
    Serial.begin(9600);
}

// EXECUÇÃO
void loop()
{
    // SALVANDO A DISTÂNCIA OBTIDA
    float distancia = ultrassonico();

    // IMPRIMINDO NO SERIAL A DISTÂNCIA
    Serial.println(distancia);
}

// FUNÇÃO PARA OBTER A DISTÂNCIA
float ultrassonico()
{
    // DESLIGANDO O GATILHO POR 2 MICROSSEGUNDOS
    digitalWrite(trig, LOW);
    delayMicroseconds(2);

    // LIGANDO O GATILHO POR 10 MICROSSEGUNDOS
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);

    // DESLIGANDO O GATILHO
    digitalWrite(trig, LOW);

    // OBTENDO A DURAÇÃO DA ULTRAONDA
    long duracao = pulseIn(echo, HIGH);

    // RETORNANDO O RESULTADO DO CÁLCULO DA DISTÂNCIA
    return ((duracao * 0.034) / 2)
}
