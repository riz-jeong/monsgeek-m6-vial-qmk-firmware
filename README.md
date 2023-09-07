# monsgeek m6 vial qmk firmware

Monsgeek M6 Vial 지원 QMK 펌웨어

* **monsgeek_m6_vial.bin / Vial 펌웨어**
* monsgeek_m6_via.bin / 기존 Via 펌웨어



## 펌웨어 플래시

* [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
* [wb32-dfu-updater 드라이버](https://github.com/WestberryTech/wb32-dfu-updater/blob/master/driver/wb32-dfu-updater_cli-driver-windows-x64.zip)

1. QMK Toolbox 실행
2. Local file - Open - monsgeek_m6_vial.bin 선택
3. ESC를 누른 상태로 키보드 연결
4. Flash
5. Exit DFU



## 직접 빌드 (QMK MSYS)

* [QMK MSYS](https://github.com/qmk/qmk_distro_msys/releases/latest)

```Shell
# QMK MSYS
git clone --recursive https://github.com/vial-kb/vial-qmk.git
git clone https://github.com/riz-jeong/monsgeek-m6-vial-qmk-firmware.git
mv monsgeek-m6-vial-qmk-firmware/monsgeek vial-qmk/keyboards
rm -rf monsgeek-m6-vial-qmk-firmware
cd vial-qmk
qmk compile -j 8 -kb monsgeek/m6 -km vial
```

vial-qmk 폴더에 펌웨어 파일 빌드 완료 (monsgeek_m6_vial.bin)



## 참고 문서

* [VIA Docs](https://www.caniusevia.com/docs/specification)
* [VIAL Docs](https://get.vial.today/docs/)
* [QMK Firmware](https://github.com/qmk/qmk_firmware)