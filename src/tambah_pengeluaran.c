void tambahUangKeluar() {
    bersihkanLayar();
    tampilBanner("TAMBAH PENGELUARAN");

    printf("Kategori : ");
    getchar();
    fgets(daftarTransaksi[jumlahTransaksi].kategori, 50, stdin);
    daftarTransaksi[jumlahTransaksi].kategori[strcspn(daftarTransaksi[jumlahTransaksi].kategori, "\n")] = 0;

    printf("Jumlah   : ");
    scanf("%d", &daftarTransaksi[jumlahTransaksi].jumlah);

    if (daftarTransaksi[jumlahTransaksi].jumlah > saldoSaatIni) {
        aturWarna(12);
        tulisPelan("Saldo tidak cukup! Transaksi dibatalkan.\n", 10);
        aturWarna(7);
        return;
    }

    strcpy(daftarTransaksi[jumlahTransaksi].jenis, "Keluar");
    ambilTanggal(daftarTransaksi[jumlahTransaksi].tanggal);

    saldoSaatIni -= daftarTransaksi[jumlahTransaksi].jumlah;
    jumlahTransaksi++;

    simpanData();

    aturWarna(10);
    tulisPelan("\nPengeluaran berhasil dicatat!\n", 15);
    aturWarna(14);
    printf("Tanggal: %s\n", daftarTransaksi[jumlahTransaksi - 1].tanggal);
    aturWarna(7);
}
