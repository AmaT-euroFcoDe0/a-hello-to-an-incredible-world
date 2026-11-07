#include <iostream>

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int d;
    std::cin >> d; //92

    std::string loai[]    = {"Loai A", "Loai B", "Loai C"};
    std::string chitiet[] = {"Xuat sac", "Gioi", "Kha", "Trung binh", "Yeu", "Kem"};

    int ln1 = (d < 80) + (d < 50);
            //92 < 80   92 < 50
                // 0        0       = 0
    int ln2 = (d < 90) + (d < 80) + (d < 65) + (d < 50) + (d < 35);
            // 92 < 90     92 < 80      92 < 65     92 < 50     92 < 35
            // 0            0           0           0           0       =   0

    std::cout << loai[ln1] << '\n' << chitiet[ln2];
                // 0                       0
                //loai[0]   +   chitiet[0]
                //Loai A        Xuat sac

    return 0;
}
