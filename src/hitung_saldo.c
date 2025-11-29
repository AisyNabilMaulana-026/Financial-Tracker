void cekSaldo() {
    bersihkanLayar();
    tampilBanner("SALDO SAAT INI");
    aturWarna(11);
    printf("Saldo anda sekarang: %d\n", saldoSaatIni);
    aturWarna(7);
}
