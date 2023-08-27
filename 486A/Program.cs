using System;
using System.Collections.Generic;
using System.Linq;

namespace CodeforcesSolution {
    class Program {
        static void Main () {
            Int64 x = Convert.ToInt64(Console.ReadLine());

            if (x % 2 == 0) {
                Console.WriteLine(x/2);
            } else {
                Console.WriteLine(-(x - (x/2)));
            }
        }
    }
}