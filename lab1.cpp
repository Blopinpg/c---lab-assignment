// LAB 1
// Q.N0:1
// #include <iostream>
// using namespace std;
// class dist
// {
// private:
//     int feet, inch;

// public:
//     void getvalue()
//     {
//         cout << "enter distance in feet and inch:";
//         cin >> feet >> inch;
//     }
//     void show()
//     {
//         cout << feet << "feet" << inch << "inch" << endl;
//     }
//     void add(dist d1, dist d2)
//     {
//         feet = d1.feet + d2.feet;
//         inch = d1.inch + d2.inch;
//         if (inch >= 12)
//         {
//             feet = feet + inch / 12;
//             inch = inch % 12;
//         }
//     }
// };
// int main()
// {
//     dist d1, d2, d3;
//     d1.getvalue();
//     d2.getvalue();
//     d3.add(d1, d2);
//     d3.show();
//     return 0;
// }
// Q.NO:2
// maximum and minimum of three numbers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, num3;
//     cout << "enter three mumbers:";
//     cin >> num1 >> num2 >> num3;
//     if (num1 >= num2)
//     {
//         if (num1 >= num3)
//         {
//             cout << "Maximum no is :" << num1 << endl;
//             if (num2 > num3)
//             {
//                 cout << "Minimum no is :" << num3 << endl;
//             }
//             else
//             {
//                 cout << "Minimum no is :" << num2 << endl;
//             }
//         }

//         else
//         {
//             cout << "Maximum no is :" << num3 << endl;
//             if (num1 > num2)
//             {
//                 cout << "Minimum no is :" << num2 << endl;
//             }
//             else
//             {
//                 cout << "Minimum no is :" << num1 << endl;
//             }
//         }
//     }
//     if (num2 >= num1)
//     {
//         if (num2 >= num3)
//         {
//             cout << "Maximum no is :" << num2 << endl;

//             if (num1 > num3)
//             {
//                 cout << "Minimum no is :" << num3 << endl;
//             }
//             else
//             {
//                 cout << "Minimum no is :" << num1 << endl;
//             }
//         }
//         else
//         {
//             cout << "Maximum no is :" << num3 << endl;

//             if (num1 > num2)
//             {
//                 cout << "Minimum no is :" << num2 << endl;
//             }
//             else
//             {
//                 cout << "Minimum no is :" << num1 << endl;
//             }
//         }
//     }
// }

// }
// Q.NO:3
// pharmacy store
// #include <iostream>
// using namespace std;
// class phar
// {
//     int store_quantity, order_quatity;

// public:
//     void entry()
//     {
//         cout << "Enter the  store quantity:";
//         cin >> store_quantity;
//         cout << endl;
//         cout << "Enter the order quantity:";
//         cin >> order_quatity;
//     }
//     void store_check()
//     {
//         if (order_quatity > store_quantity)

//         {
//             cout << "Not enough quantity\n.";
//         }
//         if (order_quatity < store_quantity)
//         {
//             if (order_quatity >= 16 && store_quantity > 40)
//             {
//                 cout << "Your order is accepted.";
//             }
//             else if (order_quatity > 16 && store_quantity <= 40)
//             {
//                 cout << "You cannot order more than 16 items.";
//             }
//         }
//     }
// };
// int main()
// {
//     phar p1;
//     p1.entry();
//     p1.store_check();
//     return 0;
// }
// Q.no .4 Employee detail
// #include <iostream>
// using namespace std;
// class EMPLOYEE
// {
//     int empno;                   // employee no
//     char name[50];               // employee name
//     float DA, basic, IT, netsal; // daily allowance,basic salary,income tax,net salary
// public:
//     void getinput()
//     {
//         cout << "enter employee no,name,basic salary:";
//         cin >> empno >> name >> basic;
//     }
//     void show()
//     {
//         cout << "employee no:" << empno << endl
//              << "employee name:" << name << endl
//              << "basic salary:" << basic << endl
//              << "daily allowance:" << DA << endl
//              << "income tax:" << IT << endl
//              << "netsalary:" << netsal << endl;
//     }
//     void calculate()
//     {
//         DA = 0.52 * basic;
//         netsal = DA + basic;
//         IT = 0.30 * netsal;
//     }
// };
// int main()
// {
//     EMPLOYEE E[100];
//     int n, i;
//     cout << "How many employee:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         E[i].getinput();
//         E[i].calculate();
//     }
//     for (i = 1; i <= n; i++)
//     {
//         E[i].show();
//     }
//     return 0;
// }

// Q.no:5
// using static data members
// #include <iostream>
// #include <string.h>
// using namespace std;
// class EMPLOYEE
// {
//     int empid, num; // employee id
//     static int fcount, scount;
//     char name[50], des[50]; // employee name ,destinetion
// public:
//     void getinput()
//     {
//         cout << "enter employee no,name,destination:";
//         cin >> empid >> name >> des;
//     }
//     void hi()
//     {
//         if (strcmp("Manager", des) == 0)
//         {
//             ++fcount;
//         }
//         if (strcmp("Engineer", des) == 0)
//         {
//             ++scount;
//         }
//     }
//     void show()
//     {
//         cout << "employee no:" << empid << endl
//              << "employee name:" << name << endl
//              << des << endl;
//         cout << "total no of Employee:" << n << endl;
//         cout << "total no of MANAGER:" << fcount << endl;
//         cout << "total no of ENGINEER:" << scount << endl;
//     }
// };
// int EMPLOYEE::fcount = 0;
// int EMPLOYEE::scount = 0;
// int main()
// {
//     EMPLOYEE E[100];
//     int num, i;
//     cout << "How many employee:";
//     cin >> num;
//     for (i = 1; i <= num; i++)
//     {
//         E[i].getinput();
//         E[i].hi();
//     }
//     for (i = 1; i <= num; i++)
//     {
//         E[i].show();
//     }
//     return 0;
// }
