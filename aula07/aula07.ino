// PINO DIGITAL 2 PARA O LED
int led = 2;

// PINO ANALOGICO 0 PARA O POTÊNCIOMETRO
int pot = A0;

// CONFIGURAÇÃO
void setup()
{
    // DEFININDO PINO LED COMO SAIDA
    pinMode(led, OUTPUT);

    // DEFININDO PINO POTÊNCIOMETRO COMO ENTRADA  
    pinMode(pot, INPUT);

    // INICIALIZANDO A CONEXÃO SERIAL
    Serial.begin(9600);
}

// EXECUÇÃO
void loop()
{
    // LENDO O VALOR OBTIDO DO POTÊNCIOMENTRO
    int valor = analogRead(pot);

    // CONVERTENDO O VALOR PARA PWM (0 - 255)
    valor = map(valor, 0, 1023, 0, 255);

    // ESCREVENDO DIGITALMENTE O VALOR DO POTÊNCIOMETRO PARA O LED
    digitalWrite(led, valor);

    // AGUARDANDO 50 MILISSEGUNDOS
    delay(50);
}