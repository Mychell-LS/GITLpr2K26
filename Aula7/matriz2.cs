using System;

class Program
{
    static void Main()
    {
        string[] cidades =
        {
            "Vitória",
            "Belo Horizonte",
            "Rio de Janeiro",
            "São Paulo"
        };

        int[,] distancias =
        {
            { 0, 524, 521, 882 },
            { 524, 0, 434, 586 },
            { 521, 434, 0, 429 },
            { 882, 586, 429, 0 }
        };

        int origem, destino;

        do
        {
            Console.WriteLine("\nCidades:");

            for (int i = 0; i < cidades.Length; i++)
            {
                Console.WriteLine($"{i} - {cidades[i]}");
            }

            Console.Write("Digite o número da cidade de origem: ");
            origem = int.Parse(Console.ReadLine());

            Console.Write("Digite o número da cidade de destino: ");
            destino = int.Parse(Console.ReadLine());

            if (origem != destino)
            {
                Console.WriteLine(
                    $"Distância entre {cidades[origem]} e {cidades[destino]}: {distancias[origem, destino]} km"
                );
            }

        } while (origem != destino);

        Console.WriteLine("Origem e destino são iguais. Programa encerrado.");
    }
}