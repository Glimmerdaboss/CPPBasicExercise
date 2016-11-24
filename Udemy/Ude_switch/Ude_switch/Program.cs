using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ude_switch
{
    class Program
    {

        static void Main(string[] args)
        {

            switchMenu();
            switchCase();
            

        }
        public static void switchMenu()
        {

            Console.WriteLine("1.Search");
            Console.WriteLine("2. View");
            Console.WriteLine("3. Delete");
            Console.WriteLine("4. Quit");

        }
        public static int switchCase()
        {
            // int num=int.Parse(abc); Console.writeline(num);

            Console.Write("Enter your number: ");

            int inputUser;
            inputUser = int.Parse(Console.ReadLine());


            switch (inputUser)
            {
                case 1:
                    Console.WriteLine("S");
                    break;

                case 2:
                    Console.WriteLine("V");
                    break;
                case 3:
                    Console.WriteLine("D");
                    break;
                case 4:
                    Console.WriteLine("Q");
                    break;
                default:
                    Console.WriteLine("Default");
                    break;
            }
            return 0;
        }
    }
}
