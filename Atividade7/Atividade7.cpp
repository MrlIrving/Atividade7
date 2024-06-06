//ATV1
/*#include <iostream>
#include <iomanip> // Para usar std::fixed e std::setprecision

int main() {
    int numeroFuncionario;
    double horasTrabalhadas;
    double valorPorHora;

    // Lendo os dados do funcionário
    std::cout << "Digite o numero do funcionario: ";
    std::cin >> numeroFuncionario;

    std::cout << "Digite o numero de horas trabalhadas: ";
    std::cin >> horasTrabalhadas;

    std::cout << "Digite o valor que recebe por hora: ";
    std::cin >> valorPorHora;

    // Calculando o salário
    double salario = horasTrabalhadas * valorPorHora;

    // Exibindo o número do funcionário e o salário
    std::cout << "Numero do funcionario: " << numeroFuncionario << std::endl;
    std::cout << "Salario: R$ " << std::fixed << std::setprecision(2) << salario << std::endl;

    return 0;
}*/

//ATV2
/*#include <iostream>
using namespace std;

int main() {
    int quantidade1, quantidade2;
    float valorUnitario1, valorUnitario2;

    // Entrada de dados do primeiro produto
    cout << "Digite a quantidade do primeiro produto: ";
    cin >> quantidade1;
    cout << "Digite o valor unitario do primeiro produto: ";
    cin >> valorUnitario1;

    // Entrada de dados do segundo produto
    cout << "Digite a quantidade do segundo produto: ";
    cin >> quantidade2;
    cout << "Digite o valor unitario do segundo produto: ";
    cin >> valorUnitario2;

    // Cálculo do valor total a ser pago
    float total1 = quantidade1 * valorUnitario1;
    float total2 = quantidade2 * valorUnitario2;
    float totalAPagar = total1 + total2;

    // Exibição do valor total a ser pago
    cout << "O total a pagar e: R$ " << totalAPagar << endl;

    return 0;
}*/

//ATV3
/*#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    double A, B, C;

    // Entrada dos valores
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;

    // Cálculo das áreas
    // a) Área do triângulo retângulo
    double areaTriangulo = (A * C) / 2.0;

    // b) Área do círculo
    const double PI = 3.14159;
    double areaCirculo = PI * C * C;

    // c) Área do trapézio
    double areaTrapezio = ((A + B) / 2.0) * C;

    // d) Área do quadrado
    double areaQuadrado = B * B;

    // e) Área do retângulo
    double areaRetangulo = A * B;

    // Saída dos resultados
    cout << "Área do triângulo retângulo: " << areaTriangulo << endl;
    cout << "Área do círculo: " << areaCirculo << endl;
    cout << "Área do trapézio: " << areaTrapezio << endl;
    cout << "Área do quadrado: " << areaQuadrado << endl;
    cout << "Área do retângulo: " << areaRetangulo << endl;

    return 0;
}*/