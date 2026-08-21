using System ;
using System.Runtime.InteropServices;
namespace selecionar
{
    class code
    {

        static void Class(string[] args)
        {
            Console.WriteLine("Seleção para Guerreira,Mago,Arqueira");
            Console.WriteLine("Digite o seu personagem: ");
            string seleciona = Console.ReadLine(); 
            if (seleciona == "Guerreira")
            {
              Console.WriteLine("Suas habilidades são ataque pesado e defesa total");  
            }
            else if (seleciona == "Mago")
            {
                Console.WriteLine("Suas habilidades são Bola de fogo e escudo de Gelo");
            }
             else if (seleciona == "Arqueira"){
                
                Console.WriteLine("Suas habilidades são Flecha Precisa e Disparo triplo");
            }
                    



            

            











        }
    


    }



}
