#include <iostream>
#include <string>
using std::cout;
using std::string;

// class untuk menyimpan data nama dan alamat
class Person
{
public:
    string nama;
    string alamat;

    // Constructor default
    Person() : nama(""), alamat("") {}
    Person(const string &n, const string &a) : nama(n), alamat(a) {}
};

// fungsi untuk bubble sort
void bubbleSortByName(Person arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j].nama > arr[j + 1].nama)
            {
                // Tukar posisi elemen
                Person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// fungsi untuk selection sort
void selectionSortByName(Person arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j].nama < arr[minIndex].nama)
            {
                minIndex = j;
            }
        }

        // Tukar posisi elemen
        if (minIndex != i)
        {
            Person temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    // Membuat array of object Person
    const int arraySize = 8; // Jumlah elemen dalam array
    // array sebelum diurukan
    Person unSortedPeople[arraySize] = {
        Person("Fahmi", "Jakarta"),
        Person("Romi", "Solo"),
        Person("Andri", "Jakarta"),
        Person("Fadillah", "Banyuwangi"),
        Person("Ruli", "Bandung"),
        Person("Rudi", "Bali"),
        Person("Dendi", "Jakarta"),
        Person("Zaki", "Madiun")};
    cout << "Nama                | Alamat\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << unSortedPeople[i].nama << " | " << unSortedPeople[i].alamat << "\n";
    }

    // urutkan array dengan bubble short
    // Menggunakan fungsi bubbleSortByName dan assign hasil pengurutan ke variable

    // buat array baru berdasarkan class person
    Person bubbleShortPeople[arraySize];
    for (int i = 0; i < arraySize; ++i)
    {
        bubbleShortPeople[i] = unSortedPeople[i];
    }

    // jalankan fungsi bubbleSortByName
    bubbleSortByName(bubbleShortPeople, arraySize);

    // tampilkan hasil pengurutan dengan bubble short
    cout << "\nSetelah diurutkan dengan bubble short:\n";
    cout << "Nama                | Alamat\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << bubbleShortPeople[i].nama << " | " << bubbleShortPeople[i].alamat << "\n";
    }

    // urutkan array dengan selection short
    //  Menggunakan fungsi selectionSortByName dan assign hasil pengurutan ke variable

    // buat array baru berdasarkan class person
    Person selectionShortPeople[arraySize];
    for (int i = 0; i < arraySize; ++i)
    {
        selectionShortPeople[i] = unSortedPeople[i];
    }

    // jalankan fungsi selectionSortByName
    selectionSortByName(selectionShortPeople, arraySize);

    // tampilkan hasil pengurutan dengan selection short
    cout << "\nSetelah diurutkan dengan selection short:\n";
    cout << "Nama                | Alamat\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << selectionShortPeople[i].nama << " | " << selectionShortPeople[i].alamat << "\n";
    }

    return 0;
}
