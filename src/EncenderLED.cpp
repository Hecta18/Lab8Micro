// Definir el número de pin al que está conectado el LED
const int ledPin = 9;

void setup() {
  // Inicializar el pin como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Mantener encendido por 1 segundo
  
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Mantener apagado por 1 segundo
}
