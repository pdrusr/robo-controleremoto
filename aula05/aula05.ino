// DECLARANDO VARIÁVEL NÚMERICA INTEIRA
int idade = 20

// DECLARANDO VARIÁVEL NUMERICA FLUTUANTE
float dinheiro = 2.0

// DECLARANDO VARIÁVEL DE CARACTER
char letra = 'A'

// DECLARANDO VARIÁVEL DE TEXTO
String nome = "Pedro"

// DECLARANDO VARIÁVEL BOOLEANA
bool fome = true

// CONFIGURAÇÕES
void setup()
{
    // DECLARANDO PINO DIGITAL 2 COMO SAÍDA
    pinMode(2, OUTPUT);

    // DECLARANDO PINO DIGITAL 3 COMO ENTRADA
    pinMode(3, INPUT);

    // INICIALIZANDO A CONEXÃO SERIAL
    Serial.begin(9600);
}

// EXECUÇÕES
void loop()
{
    // IMPRIMINDO TEXTO
    Serial.print("mensagem: ");

    // IMPRIMINDO TEXTO EM LINHA ÚNICA
    Serial.println("Oi");

    // AGUARDO DE 6 SEGUNDOS OU 6000 MILISSEGUNDOS
    delay(6000);
}