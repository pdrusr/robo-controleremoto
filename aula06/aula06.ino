// PINO DIGITAL 2 PARA O LED
int led = 2;

// CONFIGURAÇÃO
void setup()
{
    // DEFININDO PINO LED COMO SAIDA
    pinMode(led, OUTPUT);

    // INICIALIZANDO A CONEXÃO SERIAL
    Serial.begin(9600);
}

// EXECUÇÃO
void loop()
{
    // ESCREVENDO DIGITALMENTE ALTO PARA O LED DURANTE 2 SEGUNDOS
    digitalWrite(led, HIGH);
    delay(2000);

    // ESCREVENDO DIGITALMENTE BAIXO PARA O LED DURANTE 2 SEGUNDOS
    digitalWrite(led, LOW);
    delay(2000);
}