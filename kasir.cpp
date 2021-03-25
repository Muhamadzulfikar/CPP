#include <iostream>

using namespace std;
void KOP ()
{
    int  clrscr();
   cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                 PT muhamad zulfikar                                    "<<endl;
    cout<<"                        Jl. teluk air                             "<<endl;
    cout<<"                        muhamadzulfikar995@gmail.com                                   "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl<<endl;

    cout<<endl;
    cout<<"           Maaf Barang Yang Sudah Dibeli Tidak Dapat Ditukar Kembali          "<<endl;
    cout<<"               Kecuali Ada Kesepakatan Antara Kedua Belah Pihak               "<<endl<<endl<<endl;
}


void Input ()
{
    int i;
   float n, jum, x;
   cout<<"                DAFTAR PEMBELIAN BARANG   "<<endl<<endl;
   cout<<"Banyaknya Barang Yang Dibeli : ";
   cin>>n;
   cout<<"  "<<endl;
   i=0;
   jum=0;
   do
       {
          i++;
         cout<<"Harga Barang ke-"<<i<<" : Rp ";
         cin>>x;
         jum=jum+x;
      }
   while (i<n);
   cout<<"           Jumlah : Rp "<<jum<<endl;
   cout<<"  "<<endl;
   cout<<"Tekan ENTER untuk Melakukan Pembayaran"<<endl;
   cout<<"  "<<endl;
}


void transaksi ()
{
    long menu,totalHarga,jmlhHarga;
   long UngPembyaran,Kembalian,hasil;



   cout<<"                 MENU TRANSAKSI BARANG               "<<endl;
   cout<<"   1.Member    "<<endl;
   cout<<"   2.Bukan Member     "<<endl<<endl;
   cout<<"   Silahkan Pilih Menu 1-2 :";
   cin>>menu;
   cout<<"________________________________________"<<endl;
   cout<<"    "<<endl;


   if (menu==1)
       {
          cout<<"Selamat Anda Mendapatkan Tambahan diskon 2%"<<endl;
          cout<<"Masukan Total Harga   :Rp ";
          cin>>totalHarga;
         if (totalHarga >100000 && totalHarga<=200000)
             {
                 jmlhHarga =totalHarga-totalHarga*5/100;
               cout<<"Anda Mendapatkan Total diskon 5% dari tambahan diskon 2%"<<endl;
               cout<<"__________________________________"<<endl;
               cout<<"   "<<endl;
               cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
              }
          else if (totalHarga >200000 && totalHarga<=300000)
             {
               jmlhHarga =totalHarga-totalHarga*6/100;
               cout<<"Anda Mendapatkan Total diskon 6% dari tambahan diskon 2%"<<endl;
               cout<<"__________________________________"<<endl;
               cout<<"   "<<endl;
               cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
             }
           else if (totalHarga > 300000)
             {
                 jmlhHarga =totalHarga-totalHarga*7/100;
               cout<<"Anda Mendapatkan Total diskon 7% dari tambahan diskon 2%"<<endl;
               cout<<"__________________________________"<<endl;
               cout<<"   "<<endl;
               cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
             }
           else if(totalHarga<=100000)
                   {
                   cout<<"   "<<endl;
                   cout<<"_______________________________________________________"<<endl;
                   cout<<"| Maaf Anda tidak mendapatkan Diskon                  |"<<endl;
                   cout<<"| Dikarenakan Total Belanja Tidak Lebih dari Rp 100000|"<<endl;
                   cout<<"_______________________________________________________"<<endl;
                   cout<<"Total Harga           : Rp "<<totalHarga;
                   jmlhHarga=totalHarga;

                  }
         }

       else if(menu==2)
          {
             cout<<"Masukan Total Harga   : Rp ";
             cin>>totalHarga;
                 if (totalHarga >100000 && totalHarga<=200000)
                     {
                        jmlhHarga =totalHarga-totalHarga*1/100;
                           cout<<"Anda Mendapatkan diskon 1%"<<endl;
                           cout<<"__________________________________"<<endl;
                           cout<<"    "<<endl;
                           cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
                        }
               else if (totalHarga >200000 && totalHarga<=300000)
                     {
                         jmlhHarga =totalHarga-totalHarga*2/100;
                         cout<<"Anda Mendapatkan diskon 2%"<<endl;
                           cout<<"__________________________________"<<endl;
                           cout<<"   "<<endl;
                           cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
                        }
               else if (totalHarga > 300000)
                     {
                        jmlhHarga =totalHarga-totalHarga*3/100;
                           cout<<"Anda Mendapatkan diskon 3%"<<endl;
                           cout<<"__________________________________"<<endl;
                           cout<<"    "<<endl;
                           cout<<"Jumlah Pembayaran     : Rp "<<jmlhHarga;
                        }
               else if(totalHarga<=100000)
                       {
                           jmlhHarga=totalHarga;

                      }
           }
       else if(menu!=1 && menu!=2)
           {
             cout<<"Maaf Harusnya memilih angka 1 & 2";
           }

         cout<<"    "<<endl;

         cout<<"Uang Pembayaran       : Rp ";
         cin>>UngPembyaran;
         Kembalian=UngPembyaran-jmlhHarga;
         cout<<"__________________________________ -"<<endl;
         cout<<"Uang Kembalian        : Rp "<<Kembalian;
         cout<<"  "<<endl;

         if (UngPembyaran<jmlhHarga)
             {
                hasil=(Kembalian)*-1;
                cout<<"Pembayaran Anda Kurang: Rp "<<hasil;
            }


}

int main(){
   char jawab;
   KOP ();

   Input ();
   cout<<"  "<<endl<<endl;
    transaksi ();
   cout<<"   "<<endl;

   cout<<"Apakah akan memlih menu transaksi lagi? (Y/T)";
         cin>>jawab;
         cout<<"  "<<endl<<endl;
   if (jawab=='y' || jawab=='Y')
      {
          do
         {
          Input ();
              cout<<"  "<<endl<<endl;
            transaksi ();
           cout<<"   "<<endl;
         cout<<"Apakah akan memlih menu transaksi lagi? (Y/T)";
         cin>>jawab;
         cout<<"  "<<endl<<endl;
         }
         while (jawab=='y' || jawab=='Y');
         main();
      }
   if (jawab=='t' || jawab=='T')
       {
         cout<<" . Terima Kasih Telah Berkunjung! ."<<endl;
         cout<<"                                                by:muhamad zulfikar";
      }
   return 0;

}
