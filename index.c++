// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     setlocale(LC_ALL, "Russian");
//     double a=0.5, b=1.5, p=-4, x, y;
//     cin >> x;
//     if(fabs(x) < 0.2){
//         y = a*a*pow(x,3)+sqrt(pow(b,4)+1.4);
//         cout << y << endl;
//     } else if(fabs(x) == 0.2){
//         y = atan(pow(2,x) - fabs(p));
//         cout << y << endl;
//     } else if (fabs(x) > 0.2){
//         y = cbrt(log(fabs(a))+4.3)+x;
//         cout << y << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double a, b;
//     cin >> a >> b;
//     if (a == 0 || b == 0) {
//         cout << "Proizvedenie ravna nulu" << endl;
//     }
//     else if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
//         cout << "Proizvedenie polozhitelnoe" << endl;
//     }
//     else {
//         cout << "Proizvedenie otritsatelnoe" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int command;
//     cin >> command;
//     switch (command) {
//         case 1:
//             cout << "Nachat igru" << endl;
//             break;
//         case 2:
//             cout << "Pokazat pravila" << endl;
//             break;
//         case 3:
//             cout << "Vivesti record" << endl;
//             break;
//         case 4:
//             cout << "Zavershit igru" << endl;
//             break;
//         default:
//             cout << "Neizvestnaya komanda" << endl;
//             break;
//     }
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int k;
//     cin >> k;

//     double Z = 1;

//     for (int j = -4; j <= k; j++) {
//         if (j == 3 || j == 0 || j == -2) continue;

//         double S = 0;
//         for (int i = j; i <= k + 5; i++) {
//             if (i == 11) continue;
//             S += pow(i + 5, 0.2) / (i - 11) + 5 * i;
//         }

//         Z *= (j + 2.0) * j / (j - 3) * S;
//     }

//     cout << "Z = " << Z << endl;
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// #include <clocale>
// using namespace std;

// int main() {
//     setlocale(LC_ALL, "Russian");

//     double x, y;
//     cin >> x;
// for (int v = 1; v <= 3; v++) {
//         double a, b, z;

//         if (v == 1) { a = 0.4; b = 2.3; z = exp(2 * x); }
//         if (v == 2) { a = 0.2; b = 0.8; z = exp(x); }
//         if (v == 3) { a = 0.7; b = 8.1; z = 0.8; }

//         if (x < 3.5 * a)
//             y = a * b * x - pow(cos(z * x), 2);
//         else if (x <= b)
//             y = pow(a - x, 2) - log(z + x);
//         else
//             y = sqrt(b * x - a) + z * x * x;

//         cout << v << ": y = " << y << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <clocale>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     if (n > 0) {
//                 if (n % 2 == 0)
//             cout << "Pologitelnoe chetnoe chislo" << endl;
//         else
//             cout << "Pologitelnoe nechotnoe chislo" << endl;
//     }
//     else if (n < 0) {
//         cout << "Otritsatelnoe chislo" << endl;
//     }
//     else {
//         cout << "Chislo ravna nulu" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <clocale>
// using namespace std;

// int main() {

//     int d;
//     cout << "Vvedite chislo (1-7): ";
//     cin >> d;

//     switch (d) {
//         case 1:
//             cout <<"Ponedelnik" << endl;
//             break;
//         case 2:
//             cout << "Vtornik" << endl;
//             break;
//         case 3:
//             cout << "Sreda" << endl;
//             break;
//         case 4:
//             cout << "Chetverg" << endl;
//             break;
//         case 5:
//             cout << "Piyatnitsa" << endl;
//             break;
//         case 6:
//             cout << "Subota" << endl;
//             break;
//         case 7:
//             cout << "Voskresenie" << endl;
//             break;
//         default:
//             cout << "Oshibka" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// #include <clocale>
// using namespace std;

// int main() {

//     double x;
//     int k;
//     cout << "Vvedite znachenie x:";
//     cin >> x;
//     cout << "Vvedite znachenie k(tseloe chislo >= 2):";
//     cin >> k;

    
//     if (k < 2) {
//         cout << "Oshibka: k dolgen bit bolshe ili ravno 2" << endl;
//         return 0;
//     }

// double U = 1.0;  
//  int count = 0;    

//     for (int t = 2; t <= k; ++t) {
//        if (t == 12) continue;

//         double S = 0.0;
//         for (int i = 1; i <= t; ++i) {
//             if (i == 6) continue;  
//             if (i == 4) continue;   
//             S += (i - 4.0) / (i - 6.0);
//         }

//         double f = t * pow(x, t) / (t - 12.0) * S;
//        if (f == 0 || fabs(f) > 1e300) continue;

//         U *= f;
//         ++count;
//     }

//     cout << "Rezultat U=" << U << endl;
//     cout << "Uchteno mnogiteley" << count << endl;
//     return 0;
// }
// #include <iostream>
// #include <stdlib.h>
// #include <cmath>
// using namespace std;

// int main() {
//     int A[5][5], i, j;
//     int x, k, l, kol=0;
//     srand(time(0));
//     for(i=0; i<5; i++) {
//         for(j=0; j<5; j++) {
//             A[i][j]=rand()%15-2;
//         }
//     }
//     for(i=0; i<5; i++) {
//         for(j=0; j<5; j++) {
//             cout << "A["<< i << "][" << j << "]=" << A[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cin >> x;
//     for(i=0; i<5; i++)
//         for(j=0; j<5; j++) {
//             if(A[i][j]==x) {
//                 cout<<A[i][j]<<endl;
//                 kol++;
//                 k=i;
//                 l=j;
//             }
//         }
//     if(kol==0) {
//         cout<<"x="<<x<<"ne sush.";
//     } 
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, d= 2;
//     cin >> n;

//     int count = 0;       
//     int sobDel = 0;      

//     while (d <= n / 2) {
//         if (n % d == 0) {
//             count++;
//             sobDel = d;
//         }
//         d++;
//     }

//     if (count == 0) {
//         cout << "Chislo " << n << " prostoe" << endl;
//     } else {
//         cout << "Naibolshiy sobstvenniy delitel: " << sobDel << endl;
//         cout << "Kolichestvo sobstvenix deliteley: " << count << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    const int n = 10;
    int a[n];

    srand((unsigned)time(0));

    // Заполнение и вывод массива
    cout << "Массив: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 21 - 10;   // [-10; 10]
        cout << a[i] << "\t";
    }

    // Поиск элементов, встречающихся ровно один раз
    int sum = 0;
    int count = 0;

    cout << "\nЭлементы, встречающиеся один раз: ";
    for (int i = 0; i < n; i++)
    {
        int times = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                times++;
            }
        }

        if (times == 1)
        {
            cout << a[i] << " ";
            sum += a[i];
            count++;
        }
    }

    if (count == 0)
    {
        cout << "таких элементов нет";
    }
    else
    {
        cout << "\nСумма: " << sum;
    }

    cout << endl;
    return 0;
}