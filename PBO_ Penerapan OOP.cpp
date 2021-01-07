	//TODO add your headling code here
	//Variable dan input
	String noKursi= null;
	int hargaNasiPutih = 0;
	int hargaNasiRames = 0;
	int hargaAyamGoreng = 0;
	int hargaAyamBakar = 0;
	int hargaTahu = 0;
	int hargaTempe = 0;
	int diskon1 = 0;
	int diskon2 = 0;
	int diskon3 = 0;
	int diskon4 = 0;
	String nama;

//Proses
//Masukkan nama pelanggan
nama = txtNama.getText();
		//Pilihan Kursi
		if (r1.isSelected()) {
			noKursi = "i";
		} else if (r2.isSelected()) {
			noKursi = "i";
		} else if (r3.isSelected()) {
			noKursi = "i";
		} else if (r4.isSelected()) {
			noKursi = "i";
		}

//Pilihan item
		if (chNasiPutih.isSelected()) {
			hargaNasiPutih = 3000;
		}
		if (chNasiRames.isSelected()) {
			hargaNasiPutih = 5000;
		}
		if (chAyamGoreng.isSelected()) {
			hargaAyamGoreng = 4500;
		}
		if (chAyamBakar.isSelected()) {
			hargaAyamBakar = 5500;
		}
		if (chTahu.isSelected()) {
			hargaTahu = 1000;
		}
		if (chTempe.isSelected()) {
			hargaTempe = 1000;
		}
		
		int jumlah_harga = hargaNasiPutih + hargaNasiRames + hargaAyamGoreng + hargaAyamBakar + hargaTahu + hargaTempe;
		
		if (chNasiPutih.isSelected() + chAyamGoreng.isSelected())
		diskon1 = 3;
		if (chNasiPutih.isSelected() + chAyamBakar.isSelected())
		diskon2 = 4;
		if (chNasiRames.isSelected() + chTahu.isSelected())
		diskon3 = 1;
		if (chNasiRames.isSelected() + chTempe.isSelected())
		diskon4 = 2;
		int jumlah_diskon = diskon1 + diskon2 + diskon3 + diskon4;
		
		int totaol = jumlah_harga - ((jumlah_harga + jumlah_diskon)/100);
		
	
	//Output
		DefaultListModel list = new DefaultModel ();
		jList.setModel(list);
		list.addElement("-----------RUMAH MAKAN MEWAH-----------");
		list.addElement("--------------NOTA PENJUALAN--------------");
		list.addElement("NAMA : " + nama);
		list.addElement("NO KURSI : " + noKursi);
		list.addElement("---------------ITEM----------------")
		if (chNasiPutih.isSelected()) {
			list.addElement(" NASI PUTIH : Rp." + hargaNasiPutih);
		}
		if (chNasiRames.isSelected()) {
			list.addElement(" NASI RAMES : Rp." + hargaNasiRames);
		}
		if (chAyamGoreng.isSelected()) {
			list.addElement(" AYAM GORENG : Rp." + hargaAyamGoreng);
		}
		if (chAyamBakar.isSelected()) {
			list.addElement(" AYAM BAKAR : Rp." + hargaAyamBakar);
		}
		if (chTahu.isSelected()) {
			list.addElement(" TAHU : Rp." + hargaTahu);
		}
		if (chTempe.isSelected()) {
			list.addElement(" TEMPE : Rp." + hargaTempe);
		}
		list.addElement("----------------------------")
		list.addElement("JUMLAH : Rp." + jumlah_harga);
		list.addElement("DISKON : Rp." + jumlah_diskon);
		
