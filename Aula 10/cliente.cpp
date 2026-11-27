using System;
using System.Collections.Generic;

namespace Aula10
{
    public class Reserva
    {
        public int Id { get; set; }
        public DateTime DataEntrada { get; set; }
        public DateTime DataSaida { get; set; }
        public Cliente Cliente { get; set; }   // cada reserva pertence a um cliente

        public Reserva(int id, DateTime entrada, DateTime saida)
        {
            Id = id;
            DataEntrada = entrada;
            DataSaida = saida;
        }

        public override string ToString()
        {
            return $"Reserva {Id}: {DataEntrada:dd/MM/yyyy} a {DataSaida:dd/MM/yyyy}"
                 + $" | Cliente: {Cliente?.Nome}";
        }
    }

    public class Cliente
    {
        public int Id { get; set; }
        public string Nome { get; set; }
        public List<Reserva> Reservas { get; set; } = new List<Reserva>();

        public Cliente(int id, string nome)
        {
            Id = id;
            Nome = nome;
        }

        // c) adiciona uma reserva e garante a vinculacao dos dois lados
        public void AdicionarReserva(Reserva reserva)
        {
            if (reserva == null) throw new ArgumentNullException(nameof(reserva));
            reserva.Cliente = this;
            Reservas.Add(reserva);
        }

        // e) lista todas as reservas do cliente
        public void ListarReservas()
        {
            Console.WriteLine($"Reservas de {Nome}:");
            if (Reservas.Count == 0)
            {
                Console.WriteLine("  (nenhuma reserva)");
                return;
            }
            foreach (Reserva r in Reservas)
                Console.WriteLine("  " + r);
        }
    }

    public class Program
    {
        static void Main(string[] args)
        {
            Cliente joao = new Cliente(1, "Joao");
            Cliente maria = new Cliente(2, "Maria");

            joao.AdicionarReserva(new Reserva(100, new DateTime(2026, 12, 20), new DateTime(2026, 12, 27)));
            joao.AdicionarReserva(new Reserva(101, new DateTime(2027, 1, 10),  new DateTime(2027, 1, 15)));
            maria.AdicionarReserva(new Reserva(102, new DateTime(2026, 12, 24), new DateTime(2026, 12, 26)));

            joao.ListarReservas();
            Console.WriteLine();
            maria.ListarReservas();
        }
    }
}
