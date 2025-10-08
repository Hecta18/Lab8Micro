# Lab8Micro
Introducción a programación en el área de IoT.

## Conexiones del Hardware

Configuración:

   - Conectar el sensor de movimiento HC-SR501 a uno de los pines digitales.
   - Conectar el sensor de luz BH1750 usando I²C (pines SDA y SCL).
   - Conectar el LED a otro pin digital con una resistencia adecuada.
   - Conectar el potenciómetro al pin analógico.

Razón: Usar I²C para el sensor de luz simplifica conexiones y ahorra pines disponibles.

## Funciones Básicas

   - Detectar movimiento: Usar el sensor HC-SR501 para activar el LED.
   - Detectar luz natural: Usar el sensor BH1750 para decidir si encender el LED.
   - Gradación de brillo: Usar el PWM en el ESP8266 para controlar la intensidad del LED.

## Control vía Servidor Web

   - Arduino IoT Cloud: Permite fácil integración y almacenamiento de datos.

## Almacenamiento, Análisis y Visualización de Datos en la Nube

   - Google Sheets: Para almacenar los datos de uso y duración del LED, además de graficar el consumo eléctrico en función del tiempo.
