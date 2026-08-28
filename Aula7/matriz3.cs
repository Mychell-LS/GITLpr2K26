using System;

class Program
{
    static void Main()
    {
        int[,] A = new int[3, 3];
        int[,] B = new int[3, 3];
        int[,] C = new int[3, 3];

        // Lendo a matriz A
        Console.WriteLine("Digite os valores da matriz A:");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                A[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Lendo a matriz B
        Console.WriteLine("Digite os valores da matriz B:");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                B[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Multiplicação A * B
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    C[i, j] += A[i, k] * B[k, j];
                }
            }
        }

        // Mostrando o resultado
        Console.WriteLine("\nResultado de A * B:");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Console.Write(C[i, j] + "\t");
            }

            Console.WriteLine();
        }
    }
}