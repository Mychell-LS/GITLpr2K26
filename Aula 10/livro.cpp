using System;
using System.Collections.Generic;

namespace Aula10
{
    public class Livro
    {
        public string Titulo { get; set; }
        public string Autor { get; set; }
        public int AnoPublicacao { get; set; }

        public Livro() { }

        public Livro(string titulo, string autor, int anoPublicacao)
        {
            Titulo = titulo;
            Autor = autor;
            AnoPublicacao = anoPublicacao;
        }

        // Setter com validacao (setter usado como metodo de escrita)
        public void SetAnoPublicacao(int ano)
        {
            if (ano < 1450 || ano > DateTime.Now.Year)
                throw new ArgumentException("Ano de publicacao invalido");
            AnoPublicacao = ano;
        }

        public override string ToString()
        {
            return $"\"{Titulo}\" - {Autor} ({AnoPublicacao})";
        }
    }

    public class Biblioteca
    {
        private readonly List<Livro> livros = new List<Livro>();
        public string Nome { get; set; }

        public Biblioteca(string nome)
        {
            Nome = nome;
        }

        public void AdicionarLivro(Livro livro)
        {
            if (livro == null) throw new ArgumentNullException(nameof(livro));
            livros.Add(livro);
        }

        public void ListarLivros()
        {
            Console.WriteLine($"Acervo da biblioteca {Nome} ({livros.Count} livro(s)):");
            if (livros.Count == 0)
            {
                Console.WriteLine("  (acervo vazio)");
                return;
            }
            for (int i = 0; i < livros.Count; i++)
                Console.WriteLine($"  {i + 1}. {livros[i]}");
        }
    }

    public class Program
    {
        static void Main(string[] args)
        {
            Biblioteca biblioteca = new Biblioteca("ETEFMC");

            biblioteca.AdicionarLivro(new Livro("Dom Casmurro", "Machado de Assis", 1899));
            biblioteca.AdicionarLivro(new Livro("O Hobbit", "J. R. R. Tolkien", 1937));
            biblioteca.AdicionarLivro(new Livro("Clean Code", "Robert C. Martin", 2008));

            biblioteca.ListarLivros();
        }
    }
}
