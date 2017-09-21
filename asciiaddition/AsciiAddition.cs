using System;
using System.Linq;

namespace AsciiAddition
{
    public class AsciiAddition
    {
        private static readonly string[] zero = {
            "xxxxx",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "xxxxx"
        };
        private static readonly string[] one = {
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"
        };
        private static readonly string[] two =
        {
            "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "x....",
            "x....",
            "xxxxx"
        };
        private static readonly string[] three =
        {
            "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        };
        private static readonly string[] four =
        {
            "x...x",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "....x"
        };
        private static readonly string[] five =
        {
            "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        };
        private static readonly string[] six =
        {
            "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"
        };
        private static readonly string[] seven =
        {
            "xxxxx",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"
        };
        private static readonly string[] eight =
        {
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"
        };
        private static readonly string[] nine =
        {
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"
        };
        private static readonly string[] plus =
        {
            ".....",
            "..x..",
            "..x..",
            "xxxxx",
            "..x..",
            "..x..",
            "....."
        };

        static void Main(string[] args)
        {
            string[] lines = new string[7];
            for (int i = 0; i < 7; ++i)
            {
                lines[i] = Console.ReadLine();
            }
            string[][] ascii = Format(lines);
            string[] s = IntToAscii(Sum(ascii));
            for (int i = 0; i < s.Length; ++i)
            {
                Console.WriteLine(s[i]);
            }
        }

        private static string[] IntToAscii(int sum)
        {
            string[] output = new string[7];
            string s = Convert.ToString(sum);
            for (int i = 0; i < s.Length; ++i)
            {
                string[] temp;
                if (s[i] == '0')
                    temp = zero;
                else if (s[i] == '1')
                    temp = one;
                else if (s[i] == '2')
                    temp = two;
                else if (s[i] == '3')
                    temp = three;
                else if (s[i] == '4')
                    temp = four;
                else if (s[i] == '5')
                    temp = five;
                else if (s[i] == '6')
                    temp = six;
                else if (s[i] == '7')
                    temp = seven;
                else if (s[i] == '8')
                    temp = eight;
                else
                    temp = nine;
                for (int x = 0; x < 7; ++x)
                {
                    output[x] = output[x] + (i == 0 ? "" : ".") + temp[x];
                }
            }
            return output;
        }

        private static int Sum(string[][] ascii)
        {
            string number = "";
            int sum = 0;
            for (int i = 0; i < ascii.GetLength(0); ++i)
            {
                if (ascii[i] == null)
                {
                    break;
                }
                else if (Enumerable.SequenceEqual(ascii[i], zero))
                {
                    number = number + "0";
                }
                else if (Enumerable.SequenceEqual(ascii[i], one))
                {
                    number = number + "1";
                }
                else if (Enumerable.SequenceEqual(ascii[i], two))
                {
                    number = number + "2";
                }
                else if (Enumerable.SequenceEqual(ascii[i], three))
                {
                    number = number + "3";
                }
                else if (Enumerable.SequenceEqual(ascii[i], four))
                {
                    number = number + "4";
                }
                else if (Enumerable.SequenceEqual(ascii[i], five))
                {
                    number = number + "5";
                }
                else if (Enumerable.SequenceEqual(ascii[i], six))
                {
                    number = number + "6";
                }
                else if (Enumerable.SequenceEqual(ascii[i], seven))
                {
                    number = number + "7";
                }
                else if (Enumerable.SequenceEqual(ascii[i], eight))
                {
                    number = number + "8";
                }
                else if (Enumerable.SequenceEqual(ascii[i], nine))
                {
                    number = number + "9";
                }
                else if (Enumerable.SequenceEqual(ascii[i], plus))
                {
                    sum = Convert.ToInt32(number);
                    number = "";
                }

            }
            sum += Convert.ToInt32(number);
            return sum;
        }

        private static string[][] Format(string[] lines)
        {
            string[][] numbers = new string[19][];
            for (int i = 0; i < 7; ++i)
            {
                for (int x = 0; x < 19; ++x)
                {
                    if (numbers[x] == null)
                        numbers[x] = new string[7];
                    if (lines[i].Length < x * 6)
                        break;
                    numbers[x][i] = lines[i].Substring(x * 6, 5);
                }
            }
            return numbers;
        }
    }
}
