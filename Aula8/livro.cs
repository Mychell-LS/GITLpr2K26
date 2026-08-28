using System;

struct Livro
{
    public string Titulo;
    public string Autor;
    public int AnoPublicacao;
    public int NumeroPaginas;
    public double Preco;
}

class Program
{
    static void Main()
    {
        Livro[] livros = new Livro[3];

        double totalPreco = 0;
        int totalPaginas = 0;

        // Cadastro dos 3 livros
        for (int i = 0; i < 3; i++)
        {
            Console.WriteLine($"\nLivro {i + 1}");

            Console.Write("Título: ");
            livros[i].Titulo = Console.ReadLine();

            Console.Write("Autor: ");
            livros[i].Autor = Console.ReadLine();

            Console.Write("Ano de publicação: ");
            livros[i].AnoPublicacao = int.Parse(Console.ReadLine());

            Console.Write("Número de páginas: ");
            livros[i].NumeroPaginas = int.Parse(Console.ReadLine());

            Console.Write("Preço: ");
            livros[i].Preco = double.Parse(Console.ReadLine());

            totalPreco += livros[i].Preco;
            totalPaginas += livros[i].NumeroPaginas;
        }

        double mediaPaginas = totalPaginas / 3.0;

        Console.WriteLine($"\nPreço total dos livros: R$ {totalPreco:F2}");
        Console.WriteLine($"Média de páginas: {mediaPaginas:F2}");
    }
}