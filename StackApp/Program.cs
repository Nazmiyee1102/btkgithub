using System;
using StackApp.Models;

var numbers = new StackApp.Models.Stack<int>(new int[] {1,2,3});

 //stack_numbers.Push(55);

var cities = new List<String>()
{
   "İstanbul", "Ankara", "Bayburt"
};

var stack_cities = new StackApp.Models.Stack<string>(cities);
 //stack_numbers.Push("Sinan");
//Console.WriteLine(stack_numbers.Peek());
Console.WriteLine(stack_cities.Peek());

var stack_employees = new StackApp.Models.Stack<Employee> (new Employee[]
{
    new Employee("Nazmiye","Kurban",25),
    new Employee("Sinan", "Çimen",42),
    new Employee("Ali","Yıldız",35),
});