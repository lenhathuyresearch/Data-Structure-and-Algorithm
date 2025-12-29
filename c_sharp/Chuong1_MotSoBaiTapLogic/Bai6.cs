using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Chuong1_MotSoBaiTapLogic
{
    internal class Bai6
    {
        private float usingfor(float a, float b, int n)
        {
            float sn = 0;
            float d = b - a;
            if (n == 1)
                sn = a;
            else if (n == 2)
                sn = b;
            else if (n == 3)
                sn = b+d;
            else
            {
                sn = b+d;
                for (int i = 4; i <= n; ++i)
                    sn += d;
            }    
            
            return sn;
        }

        private float usingformula(float a, float b, int n)
        {
            if (n == 1)
                return a;
            else if (n == 2)
                return b;
            float d = b - a;
            return a + (n - 1) * d;
        }
        internal void bai6Main()
        {
            Console.Write("Nhập số hạng thứ nhất: ");
            float a = Convert.ToSingle(Console.ReadLine());
            Console.Write("Nhập số hạng thứ hai: ");
            float b = Convert.ToSingle(Console.ReadLine());
            
            int[] test = { 1, 3, 4, 10, 20, 100 };
            foreach (int i in test)
            {
                Console.WriteLine("Số hạng thứ n dùng vòng lặp là u(" + i + ") = "+usingfor(a, b, i));
                Console.WriteLine("Số hạng thứ n dùng công thức là u(" + i + ") = " + usingformula(a, b, i));
            }    
           
        }
    }
}
