using System;

class Program
{
    static void Main()
    {
        int[,] matriz = new int[3, 3];
        int soma = 0;

        // Leitura da matriz
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Console.Write($"Digite o elemento [{i},{j}]: ");
                matriz[i, j] = int.Parse(Console.ReadLine());

                soma += matriz[i, j];
            }
        }

        // Mostrar a matriz
        Console.WriteLine("\nMatriz digitada:");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Console.Write(matriz[i, j] + "\t");
            }

            Console.WriteLine();
        }

        // Mostrar a soma
        Console.WriteLine($"\nSoma dos elementos: {soma}");
    }
}