#include <iostream>
#include <vector>

// Fungsi untuk melakukan pencarian linear
std::vector<int> linearSearch(const std::vector<int> &arr, int target)
{
    std::vector<int> indices;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == target)
        {
            indices.push_back(i);
        }
    }
    return indices;
}

int main()
{
    // Inisialisasi array/vektor
    std::vector<int> array = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    // Melakukan pengujian dengan test case
    while (true)
    {
        int input;
        std::cout << "Masukkan angka untuk pencarian (atau -1 untuk keluar): ";
        std::cin >> input;

        if (input == -1)
        {
            break;
        }

        // Melakukan pencarian linear search
        std::vector<int> result = linearSearch(array, input);

        if (result.empty())
        {
            std::cout << "Angka " << input << " tidak ada dalam array" << std::endl;
        }
        else
        {
            std::cout << "Angka " << input << " ada di indeks ke: ";
            for (int idx : result)
            {
                std::cout << idx + 1 << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
