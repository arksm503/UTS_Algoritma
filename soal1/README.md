1.) int a, b, x, y;
    tipe data integer

2.) cout<<"Input A : ";
    cin>>a;
    Output : "Input A : "
    input ditandai dengan variabel a

    cout<<"Input B : ";
    cin>>b;
    Output : "Input B : "
    input ditandai dengan variabel b
    endl : sama seperti enter

3.) x=a;
    y=b;
    x diartikan sama dengan a, dan y diartikan sama dengan b

4.) while(x!=y) {   //perulangan
        if(x<y) {
            x = x+a;
        }else
            y = y+b;
    }

    cout<<x;

    =========================================================
    -) terdapat perulangan x tidak sama dengan y

        Jika benar maka terdapat percabangan lagi
            jika x kurang dari y,
                ambil contoh : x:2 y:4

                jika benar, maka x mengalami kelipatan hingga sama dengan y
                    contoh :
                        kelipatan 2 = 2, 4
                            1+2 = 2
                            2+2 = 4

                jika salah, maka y yang mengalami kelipatan hingga sama dengan x
                    contoh :
                        kelipatan 4 = 4
                            1+4 = 4

            berhubung x dan y sudah mendapat nilai yang sama "4", maka print x

        Jika salah, tidak perlu ada perulangan, dengan arti x dan y nilainya sama
            maka print x

Screenshot :
![alt text](https://raw.githubusercontent.com/arkyana/UTS_Algoritma/master/soal1/1.png)
