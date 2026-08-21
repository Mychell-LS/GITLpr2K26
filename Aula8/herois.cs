using System;
using System.Runtime.CompilerServices;

class Program
{
   
   public struct heroi
    {
        string nome;
        int pontuacao;
        int poder;
    }
    heroi[] herois = new heroi[5];
    static void cadastrarHeroi(ref string nome, ref string poder, ref int pontuacao)
    {
       heroi nheroi = new heroi with
    }

    
    static void selecionarEquipe(
        string nome1, string nome2, string nome3, string nome4, string nome5,
        ref string equipe1, ref string equipe2, ref string equipe3,
        ref int pontEquipe1, ref int pontEquipe2, ref int pontEquipe3)
    {
        int escolha;

        Console.WriteLine("\n=== HEROIS CADASTRADOS ===");

        if (nome1 != "") Console.WriteLine("1 - " + nome1);
        if (nome2 != "") Console.WriteLine("2 - " + nome2);
        if (nome3 != "") Console.WriteLine("3 - " + nome3);
        if (nome4 != "") Console.WriteLine("4 - " + nome4);
        if (nome5 != "") Console.WriteLine("5 - " + nome5);

        for (int i = 1; i <= 3; i++)
        {
            Console.Write("Escolha o " + i + "º heroi: ");
            escolha = int.Parse(Console.ReadLine());

            switch (escolha)
            {
                case 1:
                    if (i == 1) equipe1 = nome1;
                    if (i == 2) equipe2 = nome1;
                    if (i == 3) equipe3 = nome1;
                    break;

                case 2:
                    if (i == 1) equipe1 = nome2;
                    if (i == 2) equipe2 = nome2;
                    if (i == 3) equipe3 = nome2;
                    break;

                case 3:
                    if (i == 1) equipe1 = nome3;
                    if (i == 2) equipe2 = nome3;
                    if (i == 3) equipe3 = nome3;
                    break;

                case 4:
                    if (i == 1) equipe1 = nome4;
                    if (i == 2) equipe2 = nome4;
                    if (i == 3) equipe3 = nome4;
                    break;

                case 5:
                    if (i == 1) equipe1 = nome5;
                    if (i == 2) equipe2 = nome5;
                    if (i == 3) equipe3 = nome5;
                    break;

                default:
                    Console.WriteLine("Opcao invalida!");
                    i--;
                    break;
            }
        }
    }

   
    static int calcularPontuacaoTotal(int pont1, int pont2, int pont3)
    {
        return pont1 + pont2 + pont3;
    }

   
    static void exibirEquipe(
        string equipe1, string equipe2, string equipe3,
        string poderEq1, string poderEq2, string poderEq3,
        int pontTotal)
    {
        Console.WriteLine("\n=== EQUIPE SELECIONADA ===");

        Console.WriteLine("Heroi 1: " + equipe1 + " | Poder: " + poderEq1);
        Console.WriteLine("Heroi 2: " + equipe2 + " | Poder: " + poderEq2);
        Console.WriteLine("Heroi 3: " + equipe3 + " | Poder: " + poderEq3);

        Console.WriteLine("Pontuacao total da equipe: " + pontTotal);
    }

   
    static int menuPrincipal()
    {
        int opcao;

        Console.WriteLine("\n===== MENU =====");
        Console.WriteLine("1 - Cadastrar Heroi");
        Console.WriteLine("2 - Selecionar Equipe");
        Console.WriteLine("3 - Exibir Equipe");
        Console.WriteLine("0 - Sair");
        Console.Write("Escolha uma opcao: ");

        opcao = int.Parse(Console.ReadLine());

        return opcao;
    }

    static void Main(string[] args)
    {
      
        string nome1 = "", nome2 = "", nome3 = "", nome4 = "", nome5 = "";
        string poder1 = "", poder2 = "", poder3 = "", poder4 = "", poder5 = "";

        int pont1 = 0, pont2 = 0, pont3 = 0, pont4 = 0, pont5 = 0;

     
        string equipe1 = "", equipe2 = "", equipe3 = "";
        string poderEq1 = "", poderEq2 = "", poderEq3 = "";

        int pontEquipe1 = 0, pontEquipe2 = 0, pontEquipe3 = 0;

        int totalHerois = 0;
        int opcao;

        do
        {
            opcao = menuPrincipal();

            switch (opcao)
            {
                case 1:

                    if (totalHerois < 5)
                    {
                        totalHerois++;

                        switch (totalHerois)
                        {
                            case 1:
                                cadastrarHeroi(ref nome1, ref poder1, ref pont1);
                                break;

                            case 2:
                                cadastrarHeroi(ref nome2, ref poder2, ref pont2);
                                break;

                            case 3:
                                cadastrarHeroi(ref nome3, ref poder3, ref pont3);
                                break;

                            case 4:
                                cadastrarHeroi(ref nome4, ref poder4, ref pont4);
                                break;

                            case 5:
                                cadastrarHeroi(ref nome5, ref poder5, ref pont5);
                                break;
                        }
                    }
                    else
                    {
                        Console.WriteLine("Limite de herois atingido!");
                    }

                    break;

                case 2:

                    if (totalHerois >= 3)
                    {
                        selecionarEquipe(
                            nome1, nome2, nome3, nome4, nome5,
                            ref equipe1, ref equipe2, ref equipe3,
                            ref pontEquipe1, ref pontEquipe2, ref pontEquipe3
                        );

                        
                        if (equipe1 == nome1) { poderEq1 = poder1; pontEquipe1 = pont1; }
                        if (equipe1 == nome2) { poderEq1 = poder2; pontEquipe1 = pont2; }
                        if (equipe1 == nome3) { poderEq1 = poder3; pontEquipe1 = pont3; }
                        if (equipe1 == nome4) { poderEq1 = poder4; pontEquipe1 = pont4; }
                        if (equipe1 == nome5) { poderEq1 = poder5; pontEquipe1 = pont5; }

                        if (equipe2 == nome1) { poderEq2 = poder1; pontEquipe2 = pont1; }
                        if (equipe2 == nome2) { poderEq2 = poder2; pontEquipe2 = pont2; }
                        if (equipe2 == nome3) { poderEq2 = poder3; pontEquipe2 = pont3; }
                        if (equipe2 == nome4) { poderEq2 = poder4; pontEquipe2 = pont4; }
                        if (equipe2 == nome5) { poderEq2 = poder5; pontEquipe2 = pont5; }

                        if (equipe3 == nome1) { poderEq3 = poder1; pontEquipe3 = pont1; }
                        if (equipe3 == nome2) { poderEq3 = poder2; pontEquipe3 = pont2; }
                        if (equipe3 == nome3) { poderEq3 = poder3; pontEquipe3 = pont3; }
                        if (equipe3 == nome4) { poderEq3 = poder4; pontEquipe3 = pont4; }
                        if (equipe3 == nome5) { poderEq3 = poder5; pontEquipe3 = pont5; }

                        Console.WriteLine("Equipe selecionada com sucesso!");
                    }
                    else
                    {
                        Console.WriteLine("Cadastre pelo menos 3 herois!");
                    }

                    break;

                case 3:

                    int pontTotal = calcularPontuacaoTotal(
                        pontEquipe1,
                        pontEquipe2,
                        pontEquipe3
                    );

                    exibirEquipe(
                        equipe1,
                        equipe2,
                        equipe3,
                        poderEq1,
                        poderEq2,
                        poderEq3,
                        pontTotal
                    );

                    break;

                case 0:
                    Console.WriteLine("Programa encerrado.");
                    break;

                default:
                    Console.WriteLine("Opcao invalida!");
                    break;
            }

        } while (opcao != 0);
    }
}