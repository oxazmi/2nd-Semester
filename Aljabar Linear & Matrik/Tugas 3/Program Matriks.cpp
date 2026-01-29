#include <iostream>
using namespace std;
int main()
{
    cout << "=======================================\n";
    cout << "| Tugas Aljabar Linier & Matrik D-081 |\n";
    cout << "|              Kelompok 3             |\n";
    cout << "|   Arif Nur Cahyo     (23081010192)  |\n";
    cout << "|   Alvin Rama Saputra (23081010236)  |\n";
    cout << "|   M. Wifaqul Azmi    (23081010246)  |\n";
    cout << "=======================================\n\n";

    int i, j, k, l, m, n, p, q, op, sum = 0;
    cout << " Masukkan jumlah baris Matriks A = ";
    cin >> m;
    cout << " Masukkan jumlah kolom Matriks A = ";
    cin >> n;
    cout << endl;
    cout << " Masukkan jumlah baris Matriks B = ";
    cin >> p;
    cout << " Masukkan jumlah kolom Matriks B = ";
    cin >> q;
    cout << endl;
    int m1[m][n], m2[p][q], m3[m][q];

    cout << "=======================================\n\n";

    {
        cout << " [Matriks A] " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " Masukkan baris ke [" << i + 1 << "] kolom ke [" << j + 1 << "] = ";
                cin >> m1[i][j];
            }
        }

        cout << endl;
        cout << " [Matriks B] " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << " Masukkan baris ke [" << i + 1 << "] kolom ke [" << j + 1 << "] = ";
                cin >> m2[i][j];
            }
        }
    }

    cout << "=======================================\n";

    cout << endl
         << " [Matriks A]" << endl
         << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " [" << m1[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl
         << " [Matriks B]" << endl
         << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << " [" << m2[i][j] << "]";
        }
        cout << endl;
    }

    cout << "=======================================\n";

    while (true)
    {

        cout << endl;
        cout << " Penjumlahan\t= Ketik '1'" << endl;
        cout << " Pengurangan\t= Ketik '2'" << endl;
        cout << " Perkalian\t= Ketik '3'" << endl;
        cout << " Akhiri Program\t= Ketik '4' \n"
             << endl;
        cout << " Pilih Operasi Matriks = ";
        cin >> op;

        cout << "=======================================\n";
        cout << endl;

        if (op == 3)
        {
            if (n != p)
            {
                cout << "Operasi Perkalian Matriks Tidak Dapat Dilakukan" << endl;
                return 0;
            }
            else
            {
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < q; j++)
                    {
                        for (k = 0; k < p; k++)
                        {
                            sum = sum + m1[i][k] * m2[k][j];
                        }
                        m3[i][j] = sum;
                        sum = 0;
                    }
                }

                cout << endl;
                cout << " Hasil Perkalian Matriks A x B = " << endl
                     << endl;
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < q; j++)
                    {
                        cout << " [" << m3[i][j] << "]" << ends;
                    }
                    cout << endl;
                }
            }
        }

        else if (op == 2)
        {
            if (m != p, n != q)
            {
                cout << "Operasi Pengurangan Matriks Tidak Dapat Dilakukan" << endl;
                return 0;
            }
            else
            {
                cout << " Hasil dari Pengurangan Matriks = " << endl
                     << endl;
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << " [" << m1[i][j] - m2[i][j] << "]" << ends;
                    }
                    cout << endl;
                }
            }
        }

        else if (op == 1)
        {
            if (m != p, n != q)
            {
                cout << "Operasi Penjumlahan Matriks Tidak Dapat Dilakukan" << endl;
                return 0;
            }
            else
            {
                cout << " Hasil dari Penjumlahan Matriks = " << endl
                     << endl;
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << " [" << m1[i][j] + m2[i][j] << "]" << endl;
                    }
                    cout << endl;
                }
            }
        }

        else if (op == 4)
        {
            cout << "Terimakasih telah mencoba!!!" << endl;
            break;
        }
    }
}
