#include <iostream>
#include <string>
#include <iomanip>

class AlunoDisciplina {
private:
    int matricula;
    std::string nome;
    double notaProva1, notaProva2, notaTrabalho;

public:
    AlunoDisciplina(int matricula = 0, std::string nome = "",
                    double prova1 = 0.0, double prova2 = 0.0, double trabalho = 0.0)
        : matricula(matricula), nome(nome), notaProva1(prova1),
          notaProva2(prova2), notaTrabalho(trabalho) {}

    int getMatricula() const { return matricula; }
    void setMatricula(int valor) { matricula = valor; }
    std::string getNome() const { return nome; }
    void setNome(const std::string& valor) { nome = valor; }
    double getNotaProva1()   const { return notaProva1; }
    void setNotaProva1(double v) { notaProva1 = v; }
    double getNotaProva2()   const { return notaProva2; }
    void setNotaProva2(double v) { notaProva2 = v; }
    double getNotaTrabalho() const { return notaTrabalho; }
    void setNotaTrabalho(double v) { notaTrabalho = v; }

    // cada prova tem peso 2,5 e o trabalho tem peso 2
    double media() const {
        return (notaProva1 * 2.5 + notaProva2 * 2.5 + notaTrabalho * 2.0) / 7.0;
    }

    // quanto falta para a prova final (0 se nao for para a final)
    double final() const {
        double m = media();
        if (m >= 60.0) return 0.0;
        return 100.0 - m;
    }

    void mostrarSituacao() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Aluno: " << nome << " (matricula " << matricula << ")"
                  << " | Media: " << media();
        if (final() == 0.0)
            std::cout << " | Aprovado, nao vai para a final\n";
        else
            std::cout << " | Precisa de " << final() << " na prova final\n";
    }
};

int main() {
    int matricula;
    std::string nome;
    double p1, p2, t;

    std::cout << "Matricula: ";  std::cin >> matricula;
    std::cin.ignore();
    std::cout << "Nome: ";       std::getline(std::cin, nome);
    std::cout << "Nota prova 1: "; std::cin >> p1;
    std::cout << "Nota prova 2: "; std::cin >> p2;
    std::cout << "Nota trabalho: "; std::cin >> t;

    AlunoDisciplina a(matricula, nome, p1, p2, t);
    a.mostrarSituacao();
    return 0;
}
