# Ardunio
 Kısa süre önce bana hediye edilen, galaksi desenli kürenin ışık animasyonu yeteri kadar etkileyici değildi.
Bu hediyenin uzunca seneler hafızamda yer tutacağına şüphem yoktu fakat animasyon iyileştirilmeliydi.
Aslında çok basit bir kod ve devre tasarımı gerektiriyor.
Tavsiyem kodları yazmadan önce kağıt ve kalemle taslaklar çizmek,
bundan kastım kodlarla birlikte fiziksel halini ve sıralamalarınıda çizmek böylece tasarım kafanızda canlanabiliyor.
Yapay zekadan destek almak düşünülebilir fakat promttunuzun netliği ve yapay zekanın öğrenimine göre farklı sonuçlar üretecektir.
Kod beklenmedik şekilde karmaşık olabileceği gibi çalışmamasıda söz konusu ama tamamen soyutlamamak lazım fikir verici bir araç olarak kullanılabilir.

 Devre tasarımında, herşeyin istediğiniz gibi eksiksiz bir şekilde çalıştığından emin olduğunuzda artık plaket üzerine lehimleme yapmaya hazırdır.
Kodlardaki gecikme sürelerini değiştirebilirsiniz,led sayınızı değiştirebilirsiniz ve direnç seçimi için;

1. LED'in Özellikleri
  İleri Gerilim (İleri Gerilim - Vf): LED'in çalışması için gereken minimum gerilim. Tipik olarak:
  Kırmızı LED: 1.8 - 2.2V
  Yeşil, Sarı LED: 2.0 - 3.0V
  Mavi, Beyaz LED: 3.0 - 3.6V
  İleri Akım (Forward Current - If): LED'in optimum donanımta çalışması için geçen akım. 20 mA'dir (0,02 A), ancak bu değer LED'e göre değişebilir.

2. Besleme Gerilimi (Vcc)
  LED'e bağlayacağınız devre kaynağının gerilimini (örneğin, 5V, 12V) bilmelisiniz. Bu, direnç programlamasında gereklidir.

3. Direnç Hesaplama
  Direnç değeri, Ohm Kanunu hesaplanır:
  R=(besleme gerilimi - led ileri gerilimi)/ileri akım​

  Hesaplama:
    Besleme gerilimi (Vcc): 5V
    LED ileri gerilimi (Vf): 2,0V (kırmızı LED)
    İleri akım (If): 20 mA (0,02 A)
    𝑅=5𝑉−2𝑉/0,02𝐴   => 150Ω
    Bu durumda, 150 ohm'luk bir direnç seçmelisiniz.

4. Direnç Gücü
  Direncin dayanması gereken güç (Watt), aşağıdaki formülle hesaplanır: P=akım^2.R

    Akım (If): 20 mA (0,02 A)
    Direnç (R): 150 ohm
    𝑃=(0,02)^2 .150 = 0,06Watt
    Bu durumda 0.125W (1/8W) veya 0.25W gücünde bir direnç yeterlidir.

Özel Durumlar
  Daha fazla parlaklık: Daha düşük bir direnç kullanabilirsiniz, ancak LED'e geçen başlamanın üreticinin maksimum değerleri aşmadığından emin olun.
  Birden Fazla LED:
  LED'leri seri bağlarsanız, toplam Vf'yi dikkate alın.
  LED'leri paralel bağlarsanız, her bir LED için ayrı direnç kullanmanız gerekir.

 Tercihler belirlendikten sonra plaket üzerine lehimleme işlemlerine geçilir, tercihen dairesel bir dizilim yapacağım.
İlerleyen zamanlarda çalışan halini yüklemeye çalışacağım. Belkide 3B tasarım ile elde edilecek parçalarla daha keyifli bir hale getirilebilir.
