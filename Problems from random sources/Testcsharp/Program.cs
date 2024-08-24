using System;
using System.IO;

namespace ReadATextFile
{
    class Program
    {

        static readonly string rootFolder =  @"C:\Temp\Data";
        static readonly string textFile = @"C:\Users\Benedict\Desktop\ONTI_C#_2019_resurse\utilizatori.txt";

        public static string RootFolder => rootFolder;

        static void Main(string[] args)
        {
            if (File.Exists(textFile))
            {
                  
                string text = File.ReadAllText(textFile);
                Console.WriteLine(text);
            }

            if (File.Exists(textFile))
            {
    
                string[] lines = File.ReadAllLines(textFile);
                foreach (string line in lines)
                    Console.WriteLine(line);
            }

            if (File.Exists(textFile))
            {
               
                using (StreamReader file = new StreamReader(textFile))
                {
                    int counter = 0;
                    string ln;

                    while ((ln = file.ReadLine()) != null)
                    {
                        Console.WriteLine(ln);
                        counter++;
                    }
                    file.Close();
                    Console.WriteLine($"File has {counter} lines.");
                }
            }

            Console.ReadKey();
        }
    }
}