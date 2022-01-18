#include <iostream>
using namespace std;
int main()
{
                int kode, pri, jml, tot, byr, kbl;
                string mad = "Ya";
                do
                {
                                cout<<"               GUBUH BALINESE          "<<endl;
                                cout<<"         F&B TRADISIONAL & WESTREN     "<<endl;
                                cout<<"           Chef Ranenvy Gracean        "<<endl;
                                cout<<"          Jl. Ir.Soekarno No. 32       "<<endl;
                                cout<<"======================================="<<endl;
                                cout<<""<<endl;
                                cout<<" ______________________________________"<<endl;
                                cout<<"|     Menu Makanan      |      Harga   |"<<endl;
                                cout<<"|                       |              |"<<endl;
                                cout<<"|   1. Ayam Goreng      |  Rp. 14.000  |"<<endl;
                                cout<<"|   2. Nasi Goreng      |  Rp. 10.000  |"<<endl;
                                cout<<"|   3. Mie Pangsit      |  Rp. 10.000  |"<<endl;
                                cout<<"|   4. Pecel Ayam+Nasi  |  Rp. 15.000  |"<<endl;
                                cout<<"|   5. Nasi Rames       |  Rp.  8.000  |"<<endl;
                                cout<<"|   6. Jus Jeruk        |  Rp.  5.000  |"<<endl;
                                cout<<"|   7. Teh Manis        |  Rp.  3.000  |"<<endl;
                                cout<<"|_______________________|______________|"<<endl;
                                cout<<""<<endl;
                                cout<<"Menu Makanan yang Anda Pesan : ";
                                cin>>kode;
                                switch (kode)
                                {
                                case 1:
                                cout<<'\n'<<"Ayam Goreng"<<endl;
                                pri=14000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Pesanan Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 2:
                                cout<<'\n'<<"Nasi Goreng"<<endl;
                                pri=10000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 3:
                                cout<<'\n'<<"Mie Pangsit"<<endl;
                                pri=10000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 4:
                                cout<<'\n'<<"Pecel Ayam+Nasi"<<endl;
                                pri=15000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 5:
                                cout<<'\n'<<"Nasi Rames"<<endl;
                                pri=8000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 6:
                                cout<<'\n'<<"Jus Jeruk"<<endl;
                                pri=5000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                               
                                case 7:
                                cout<<'\n'<<"Teh Manis"<<endl;
                                pri=3000;
                                cout<<"Masukan Jumlah Porsi Dipesan : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Harganya       : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian            : Rp. "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Ya/Tidak : ";
                                cin>>mad;
                                break;
                                default:
                                cout<<"Kode Yang Anda Masukan Tidak Tersedia";
                                } 
                }
                while (mad == "Ya");
                cout<<"Terima Kasih Atas Kunjungan Anda Di GUBUH BALINESE";
                return 0;
}
