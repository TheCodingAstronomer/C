using System;
using System.Reflection.Metadata.Ecma335;

namespace Variables
{
    class Program
    {
        static void Main(string[] args)
        {
            string myName = "Nihal";
            int myNum = 234;
            double mySecondNum = 7475868047.9576738;
            bool male = true;

            Console.WriteLine("Hi, my name is Compy! :)");
            Console.WriteLine("My creator's name was " + myName + ".");
            Console.WriteLine("He made " + myNum + " robots!");
            Console.WriteLine(mySecondNum);
            Console.WriteLine(male);

            Console.ReadLine();
        }
    }
}
