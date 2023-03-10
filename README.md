## Multi-layer-Multiple-Classes-Supervised-Learning

  Yapay sinir ağlarında eğitimi gerçekleştirirken eğitim verisinin non-lineer bir
şekilde dağılımı söz konusu olduğu zaman birden çok katmana ihtiyaç duyulmaktadır. Bunu
sağlamak için ağımızı oluştururken iki katman kullanılmıştır. W matrisi output katmanını V
matrisi ise gizli katmanı (hidden layer) temsil etmektedir. Örneğimizde 6 farklı türde veri girişi
sağlanmaktadır. Gizli katmanda 1 den 9 a kadar ve gizli katmandaki nöron sayısının eğitimi ne
akdar hızlandırdığını gözlemlemek için 50 adet nöron tanımlanabilmektedir. Burada dikkat
edilmesi gereken değerler atanırken gizli katmandaki bir nöronun ağırlığı w da ki nörondan 1
fazla olmalıdır.

  Kullanıcı arayüzünde verilen ve ağırlıklar aşağıda görüldüğü gibi hem hazır olarak
dosyadan atabildiği gibi arayüzden de setlenebilmektedir.

![image](https://user-images.githubusercontent.com/22706674/218222293-70ed1ecc-d4a5-42af-8fd3-745278c3af99.png)

  Veri girişlerini yaptığımıza göre artık eğitime başlanabilir. Eğitimi yaparken gizli
katmanda parametrik relu fonksiyonu , Output katmanında ise tanh fonksiyonu kullanılmıştır.
![image](https://user-images.githubusercontent.com/22706674/218222368-f1897e6e-d0db-430c-bf7c-d448784b370e.png)

  Eğitimi yaparken giriş verilerimiz Relu fonk. Kullanıldığı için batch normalizasyon ile
normalize edilmiştir. Hem gizli katmanda hemde çıkış katmanında bias olarak 1 değeri
kullanılmıştır. Aşağıdaki fonksiyonda eğitim gerçeklenmiştir.
  
  
    ###EĞİTİM
    
  Ağın eğitimi yapıldıktan sonra örnek çıktısı aşağıda gösterilmiştir. Burada çizilen mavi
renkteki doğrular gizli katmanın öğrenilmiş doğrularıdır. Problem insan gözünün algılayacağı bir
türde olmadığı için ağın eğitimini gözle yorumlamak için ağa test uygulanmalıdır.
![image](https://user-images.githubusercontent.com/22706674/218222686-c2b72f3d-36a9-4023-852e-2ff7b77d5300.png)

    ##TEST
  Ağımızın eğitimi tamamlandıktan sonra ağa test verileri yüklenerek ağın testi
gerçeklenmiştir. Test verileri olarak programımızda kullandığımız picturebox taki piksel
değerlerini kullanarak ağımızı test ettik. Burada örnek picturebox boyutu 450*450 olduğu için
her piksele test yaptığımız zaman toplamda 200.000 den fazla test verisi olmaktadır. Bu da test
işlemini uzun tutmaktadır ve çok bellek kapsamaktadır. Bunu önlemek için her 5 pikseli 1 veri
olarak kabul edilip buna göre test işlemi uygulanmıştır. Aşağıdaki fonksiyon ile ağ test işlemine
sokulmuştur.
![image](https://user-images.githubusercontent.com/22706674/218222743-defea8d9-8690-4d32-bc85-c297d45452cc.png)


  Test işlemi yapıldıktan sonra tekrar ağımıza input verisi vererek eğer girilen input değeri
hatalı ise ağımızı tekrar eğitip ağın ağırlıkları tekrar güncellenecektir. Aşağıdaki örnekte
görüleceği üzere bu işlem yapılmış ve test verileri ile program çıktısı güncellenmiştir.

![image](https://user-images.githubusercontent.com/22706674/218222812-b9157930-4ff6-465a-8530-226731c32051.png)

  ##Momentum Metod
  
  Ağımızın öğrenme hızını artırmak için ağırlık güncellerken momentum
katsayısından yararlanılmıştır. Momentum katsayısı ağımızın daha hızlı yerel minimuma
yaklaşmamızı sağlamaktadır. Bu momentum katsayısı temel olarak daha önceki değişimin bir
kısmını işlem gören değişime eklemeye dayanmaktadır. Aşağıdaki fonksiyon momentum ile
öğrenme sağlanmaktadır.

  Momentum katsayısı ile öğretilen ağın örnek çıktısı aşağıdaki gibidir. Buradan da görüleceği
üzere ağımızın öğrenme hızı neredeyse 2 katına çıkmaktadır. 

![image](https://user-images.githubusercontent.com/22706674/218223213-99a98e5c-a3f4-4d3d-ae12-53c01091638d.png)

