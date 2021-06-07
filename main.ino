#include<VirtualWire.h>

int pin_tx_data = 5;

int pin_sw_tactile_W = A0;
int pin_sw_tactile_A = A1;
int pin_sw_tactile_S = A2;
int pin_sw_tactile_D = A3;;
int pin_sw_tactile_X = 2;

char var_data_command[1] = {'N'};

void setup() {
  
  pinMode(pin_sw_tactile_W, INPUT_PULLUP);
  pinMode(pin_sw_tactile_A, INPUT_PULLUP);
  pinMode(pin_sw_tactile_S, INPUT_PULLUP);
  pinMode(pin_sw_tactile_D, INPUT_PULLUP);
  pinMode(pin_sw_tactile_X, INPUT_PULLUP);

  Serial.begin(9600);
  
  vw_set_tx_pin(pin_tx_data);
  vw_setup(2000);
}

void loop() {
  
  if (digitalRead(pin_sw_tactile_W) == LOW) {
    Serial.println("SWITCH TACTIL 'W' PRESSED!");
    var_data_command[0] = 'W';
  }
    
  else if (digitalRead(pin_sw_tactile_A) == LOW) {
    Serial.println("SWITCH TACTIL 'A' PRESSED!");
    var_data_command[0] = 'A';
  }
    
  else if (digitalRead(pin_sw_tactile_S) == LOW) {
    Serial.println("SWITCH TACTIL 'S' PRESSED!");
    var_data_command[0] = 'S';
  }
    
  else if (digitalRead(pin_sw_tactile_D) == LOW) {
    Serial.println("SWITCH TACTIL 'D' PRESSED!");
    var_data_command[0] = 'D';
  }
    
  else if (digitalRead(pin_sw_tactile_X) == LOW) {
    Serial.println("SWITCH TACTIL 'X' PRESSED!");
    var_data_command[0] = 'X';
  }
    
  else {
    Serial.println("ENVIANDO NADA!");
    var_data_command[0] = 'N';
  }
  
  vw_send((uint8_t*)var_data_command, strlen(var_data_command));
  vw_wait_tx();
}
