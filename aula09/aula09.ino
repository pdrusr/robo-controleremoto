// VARIÁVEL CARACTER BLUETOOTH
char letra = '';

// PINO DIGITAL 5 PARA O LED
int led = 5;

// CONFIGURAÇÃO
void setup()
{
    // DEFININDO PINO LED COMO SAIDA
    pinMode(led, OUTPUT);

    // INICIALIZANDO DA CONEXÃO SERIAL
    Serial.begin(9600);
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
            digitalWrite(led, LOW);
        }
        if (letra == 'B')
        {
            digitalWrite(led, HIGH);
        }
    }
}