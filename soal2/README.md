1. int n, x, t, batas;
    tipe data integer

2.  cout<<"Input N : ";
    cin>>n;
    output tampilan "Input N : "
    input variabel ditandai n

3.  batas=n+100;
    x=20;
    t=n;

    batas=n+100; batas perulangan 100
    x=20; x sama dengan 20
    t=n; t sama dengan n

4.)     while(t<=batas){
        t = t+x;
        x = x+10;
        }
    Penjumlahan yang didapatkan sebagai berikut :
    jika n = 05

        t+x=t
        5+20=25
        t=25

        x+10=x
        20+10=30
        x=30

        t+x=t
        25+30=55
        t=55

        x+10=x
        30+10=40
        x= 40

        t+x=t
        55+40=95
        t= 95

        x+10=x
        40+10=50
        x=50

        t+x=t
        95+50=145
        t=145

penjumlah berulang hingga menemukan batas hingga 100, jika sudah 100 maka

5.) cout<<t;
    print t
    jika n = 05 maka printnya 145

Screenshot :
![alt text](https://raw.githubusercontent.com/arkyana/UTS_Algoritma/master/soal2/2.png)