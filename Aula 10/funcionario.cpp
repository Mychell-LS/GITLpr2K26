#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

class Funcionario {
private:
    std::string nome;
    double salarioBruto;
    double imposto;

    // Tabela: 10% ate 2000 | 15% ate 3000 | 20% acima de 3000
    static double calcularImposto(double salarioBruto) {
        if (salarioBruto <= 2000.0) return salarioBruto * 0.10;
        if (salarioBruto <= 3000.0) return salarioBruto * 0.15;
        return salarioBruto * 0.20;
    }

public:
    Funcionario(std::string nome = "", double salarioBruto = 0.0)
        : nome(nome), salarioBruto(salarioBruto) {
        imposto = calcularImposto(salarioBruto);
    }

    std::string getNome()    const { return nome; }
    double getSalarioBruto() const { return salarioBruto; }
    double getImposto()      const { return imposto; }

    void setNome(const std::string& valor) { nome = valor; }

    void setSalarioBruto(double valor) {
        if (valor < 0) throw std::invalid_argument("Salario bruto invalido");
        salarioBruto = valor;
        imposto = calcularImposto(salarioBruto);
    }

    double salarioLiquido() const { return salarioBruto - imposto; }

    void aumentarSalario(double porcentagem) {
        if (porcentagem < 0) throw std::invalid_argument("Porcentagem invalida");
        salarioBruto += salarioBruto * (porcentagem / 100.0);
        imposto = calcularImposto(salarioBruto);
    }

    void mostrarDados() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Funcionario: " << nome
                  << " | Salario bruto: R$ " << salarioBruto
                  << " | Imposto: R$ " << imposto
                  << " | Salario liquido: R$ " << salarioLiquido() << "\n";
    }
};

int main() {
    std::string nome;
    double bruto, porcentagem;

    std::cout << "Nome: ";
    std::getline(std::cin, nome);
    std::cout << "Salario bruto: ";
    std::cin >> bruto;

    Funcionario f(nome, bruto);
    f.mostrarDados();

    std::cout << "Porcentagem de aumento: ";
    std::cin >> porcentagem;
    f.aumentarSalario(porcentagem);
    std::cout << "Depois do aumento:\n";
    f.mostrarDados();
    return 0;
}
