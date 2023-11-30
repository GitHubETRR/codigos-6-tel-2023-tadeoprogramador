#include <iostream>
#include <cctype>
#include <string>
#include "calc.h"

using namespace std;

class operacion {
private:
  float num1 = 0, num2 = 0;
  char signo;
  string strOperacion;

public:
  void ingresarString(void);
  void imprimirString(void);
  void separar(void);
  float op(void);
};

class operacion op1;

void operacion::ingresarString(void) { cin >> strOperacion; }

void operacion::imprimirString(void) {
  cout << "El string que ingreso es: " << strOperacion << endl;
}

void operacion::separar(void) {
  float res = 0;
  bool flag_ter = true, flag_ter_2 = false;
  string termino_1, termino_2;

  for (int i = 0; i < strOperacion.length(); i++) {
    if (isalnum(strOperacion[i]) && !isalpha(strOperacion[i])) {
      if (flag_ter) {
        termino_1.push_back(strOperacion[i]);
        cout << termino_1 << endl;
      } else {
        termino_2.push_back(strOperacion[i]);
        cout << termino_2 << endl;
        if (isalnum(strOperacion[i+1]) && !isalpha(strOperacion[i+1])) continue;
        flag_ter_2 = true;
      }
    }
    else if (flag_ter) {
      signo = strOperacion[i];
      cout << signo << endl;
      flag_ter = false;
    }
    if (flag_ter_2) {
      num1 = stoi(termino_1);
      num2 = stoi(termino_2);
      res = op1.op();
      termino_1 = to_string(res);
      cout << termino_1 << endl;
      flag_ter_2 = false;
      flag_ter = true;
      //termino_1.clear();
      termino_2.clear();
    }
  }
}

float operacion::op() {
  float resultado;
  switch (signo) {
  case '+':
    resultado = suma(num1, num2);
    break;
  case '-':
    resultado = resta(num1, num2);
    break;
  case '*':
    resultado = mult(num1, num2);
    break;
  case '/':
    resultado = divi(num1, num2);
    break;
  case '^':
    resultado = pote(num1, num2);
    //resultado = pote(num1, num2);
    break;
  default:
    cout << "Ingrese una opcion valida" << endl;
    break;
  }
  cout << "El resultado de su operacion es: " << resultado << endl;
  return resultado;
}

int main(void) {
  cout << "Ingrese su operación" << endl;
  op1.ingresarString();
  op1.separar();
  return 0;
}
