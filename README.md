# Smart NFC E-Ink Card

## What this is

this is a small custom pcb device i build which have a nfc antenna, e-ink display, flash storage and a microcontroller all together on one board. the idea is that the device can talk with phone using nfc and also show some info on the e-ink screen. the screen is very low power so it can keep the image even when power is not used.

the board also have a small battery and charging circuit so it can run portable. the main chip used here is the nrf52840 which handle the nfc and other logic of the board. there is also external flash memory to store some data and firmware stuff.

## Why i build this

i mostly build this project to learn how full hardware design works from start to end. like making schematic, pcb layout, antenna design and power system. before this i never made a board with nfc and battery and display together so i wanted to try it.

also i thought it would be cool to have something like a programmable nfc card which can change what it shows on the display. it could be used for things like smart tags, id cards, small info display or just experimenting with embedded hardware.

so the main goal was learning and building something fun at same time :)

## Hardware Visualization

### Full Schematic
<img width="1754" height="1226" alt="image" src="https://github.com/user-attachments/assets/1fcf99f4-a243-4f6c-84b3-d5b85e041d16" />

### PCB Layout
<img width="658" height="1058" alt="Screenshot 2026-03-08 213518" src="https://github.com/user-attachments/assets/ba062b40-0e07-4507-8979-43b32fecd018" />

### 3D Render
<img width="1854" height="1069" alt="Screenshot 2026-03-09 181942" src="https://github.com/user-attachments/assets/35fcfaec-5a44-4aeb-ac04-55ab32c13567" />
<img width="1432" height="1045" alt="Screenshot 2026-03-09 182043" src="https://github.com/user-attachments/assets/b5f0f5ef-f9f3-45f2-b928-42c53809ae46" />
<img width="1399" height="1003" alt="Screenshot 2026-03-09 182142" src="https://github.com/user-attachments/assets/54dff823-552b-41eb-94d9-04fda799aae0" />
<img width="2074" height="1220" alt="NFC2" src="https://github.com/user-attachments/assets/86c110de-1bef-4b29-a186-59ccd1acdaab" />
<img width="2074" height="1220" alt="NFC1" src="https://github.com/user-attachments/assets/83fe807a-806d-4a03-8124-5043787e8f02" />
<img width="2074" height="1220" alt="NFC" src="https://github.com/user-attachments/assets/c5e23680-c800-4f6b-a586-7e6bc688b2b7" />

### BOM
<img width="3013" height="1652" alt="Screenshot 2026-03-09 183255" src="https://github.com/user-attachments/assets/330b22f6-a6b2-4d95-8179-b4e726d90257" />
<img width="3121" height="1626" alt="Screenshot 2026-03-09 183248" src="https://github.com/user-attachments/assets/57e070db-3dff-4712-9120-d0c05c039bf1" />
<img width="1442" height="1628" alt="Screenshot 2026-03-09 114500" src="https://github.com/user-attachments/assets/c78de80b-1408-491b-89af-5209bd811f0f" />
<img width="2859" height="1262" alt="Screenshot 2026-03-08 221103" src="https://github.com/user-attachments/assets/ab1b567d-1678-4694-b9c5-01e4cefb7e24" />
<img width="2827" height="1535" alt="Screenshot 2026-03-08 221042" src="https://github.com/user-attachments/assets/e4a75275-7134-47b4-aad3-2cc2ca19eaae" />
<img width="2813" height="1657" alt="Screenshot 2026-03-08 220932" src="https://github.com/user-attachments/assets/469a61cf-693e-467d-b18e-9faa1fa67b13" />
<img width="1835" height="1460" alt="Screenshot 2026-03-08 220645" src="https://github.com/user-attachments/assets/f4b6f6c3-9161-4e39-801e-5bb7b4f6aad4" />

## Bill of Materials (BOM)

| PCB                                                                                                       |                                                                                 |     |               |                        |               |            |
|-----------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------|-----|---------------|------------------------|---------------|------------|
| Part                                                                                                      | Link                                                                            | Qty | Cost per Unit | Footprint              | JLCPCB Part # | Total Cost |
| Material                                                                                                  | https://jlcpcb.com/                                                             | 1   | 3.42          |                        |               | 3.42       |
| Body Outline Tolerance                                                                                    | https://jlcpcb.com/                                                             | 1   | 8.42          |                        |               | 8.42       |
| 4-Wire Kelvin Test                                                                                        | https://jlcpcb.com/                                                             | 1   | 16.73         |                        |               | 16.73      |
| Min via Hole size/diameter                                                                                | https://jlcpcb.com/                                                             | 1   | 34.22         |                        |               | 34.22      |
| PCB                                                                                                       | https://jlcpcb.com/                                                             | 1   | 7             |                        |               | 7          |
|                                                                                                           |                                                                                 |     |               | TOTAL                  |               | 69.79      |
|                                                                                                           |                                                                                 |     |               |                        |               |            |
| PCBA                                                                                                      |                                                                                 |     |               |                        |               |            |
| Part                                                                                                      | Link                                                                            | Qty | Cost per Unit | Footprint              | JLCPCB Part # | Total Cost |
| Setup Fee                                                                                                 | https://jlcpcb.com/                                                             | 1   | 50.74         |                        |               | 50.74      |
| Stencil                                                                                                   | https://jlcpcb.com/                                                             | 1   | 16.3          |                        |               | 16.3       |
| Hand Soldering Labor Fee                                                                                  | https://jlcpcb.com/                                                             | 1   | 3.55          |                        |               | 3.55       |
| Manual Assembly                                                                                           | https://jlcpcb.com/                                                             | 1   | 0.65          |                        |               | 0.65       |
| PCB Assembly Fixture                                                                                      | https://jlcpcb.com/                                                             | 1   | 16.3          |                        |               | 16.3       |
| Packing Fee                                                                                               | https://jlcpcb.com/                                                             | 1   | 0.49          |                        |               | 0.49       |
| Feeders Loading Fee                                                                                       | https://jlcpcb.com/                                                             | 1   | 27.36         |                        |               | 27.36      |
| SMT Assembly                                                                                              | https://jlcpcb.com/                                                             | 1   | 1.07          |                        |               | 1.07       |
|                                                                                                           |                                                                                 |     |               | TOTAL                  |               | 116.46     |
|                                                                                                           |                                                                                 |     |               |                        |               |            |
| Components                                                                                                |                                                                                 |     |               |                        |               |            |
| Part                                                                                                      | Link                                                                            | Qty | Cost per Unit | Footprint              | JLCPCB Part # | Total Cost |
| ABM11W-32.0000MHZ-8-B1U-T3                                                                                | https://jlcpcb.com/partdetail/2077318-ABM11W_32_0000MHZ_8_B1UT3/C1985774        | 2   | 0.86          | ABM11W300000MHZ4B1UT3  | C1985774      | 1.7234     |
| SKRPACE010                                                                                                | https://jlcpcb.com/partdetail/ALPSALPINE-SKRPACE010/C139797                     | 6   | 0.07          | SMT_4.2X3.2_           | C139797       | 0.4032     |
| USB4085-GF-A_REVA4                                                                                        | https://jlcpcb.com/partdetail/8061907-USB4085_GFA/C7095263                      | 2   | 1.39          | GCT_USB4085-GF-A_REVA4 | C7095263      | 2.786      |
| 150pF                                                                                                     | https://jlcpcb.com/partdetail/1879-0402B151K500NT/C1527                         | 20  | 0.0012        | 402                    | C1527         | 0.024      |
| 10uF                                                                                                      | https://jlcpcb.com/partdetail/16204-CL05A106MQ5NUNC/C15525                      | 20  | 0.0055        | 402                    | C15525        | 0.11       |
| ABS06-32.768KHZ-9-T                                                                                       | https://jlcpcb.com/partdetail/AbraconLLC-ABS06_32_768KHZ_9T/C1985410            | 2   | 1.9242        | ABS06                  | C1985410      | 3.8484     |
| 12pF                                                                                                      | https://jlcpcb.com/partdetail/1899-0402CG120J500NT/C1547                        | 20  | 0.0011        | 402                    | C1547         | 0.022      |
| 1uF                                                                                                       | https://jlcpcb.com/partdetail/53938-CL05A105KA5NQNC/C52923                      | 20  | 0.0041        | 402                    | C52923        | 0.082      |
| 1k                                                                                                        | https://jlcpcb.com/partdetail/12256-0402WGF1001TCE/C11702                       | 20  | 0.0007        | 402                    | C11702        | 0.014      |
| MCP73831T-2ATI_OT                                                                                         | https://jlcpcb.com/partdetail/MicrochipTech-MCP73831T_2ATIOT/C14879             | 2   | 0.9961        | SOT95P270X145-5N       | C14879        | 1.9922     |
| 5.1k                                                                                                      | https://jlcpcb.com/partdetail/26648-0402WGF5101TCE/C25905                       | 40  | 0.0008        | 402                    | C25905        | 0.016      |
| nRF52840-QFAA-F-R7                                                                                        | https://jlcpcb.com/partdetail/NordicSemicon-NRF52840_QFAA_FR7/C3606653          | 2   | 5.1481        | QFN40P600X600X95-49N-D | C3606653      | 10.2962    |
| 0.1uF                                                                                                     | https://jlcpcb.com/partdetail/1877-CL05B104KO5NNNC/C1525                        | 30  | 0.0013        | 402                    | C1525         | 0.039      |
| W25Q16JVUXIQ_TR                                                                                           | https://jlcpcb.com/partdetail/WinbondElec-W25Q16JVUXIQ/C2843335                 | 2   | 1.3977        | SON50P300X200X60-9N    | C2843335      | 2.7954     |
| LED                                                                                                       | https://jlcpcb.com/partdetail/Hubei_KENTOElec-KT0603R/C2286                     | 20  | 0.0064        | 603                    | C2286         | 0.128      |
| 10k                                                                                                       | https://jlcpcb.com/partdetail/26487-0402WGF1002TCE/C25744                       | 20  | 0.0008        | 402                    | C25744        | 0.016      |
| TPS78833DBVR                                                                                              | https://jlcpcb.com/partdetail/TexasInstruments-TPS78833DBVR/C2869019            | 2   | 1.706         | SOT95P280X145-5N       | C2869019      | 3.412      |
| 2k                                                                                                        | https://jlcpcb.com/partdetail/4516-0402WGF2001TCE/C4109                         | 20  | 0.0008        | 402                    | C4109         | 0.016      |
| 4.7uF                                                                                                     | https://jlcpcb.com/partdetail/24469-CL05A475MP5NRNC/C23733                      | 20  | 0.005         | 402                    | C23733        | 0.1        |
| Waveshare 2.9 inch e-Ink Paper Display Module with SPI Interface                                          | https://robu.in/product/2-9-inch-e-ink-paper-display-module-with-spi-interface/ | 2   | 17.325        |                        |               | 34.65      |
| WLY551145 3.7V 250mAh 1S LiPo Battery – Micro Rechargeable Battery Pack for Wearables / Micro Drone / IoT | https://robu.in/product/250mah-pcm-protected-micro-li-po-battery/               | 2   | 2.222         |                        |               | 4.444      |
|                                                                                                           |                                                                                 |     |               | TOTAL                  |               | 66.9178    |
|                                                                                                           |                                                                                 |     |               |                        |               |            |
| Shipping                                                                                                  |                                                                                 |     |               |                        |               |            |
| Part                                                                                                      | Link                                                                            | Qty | Cost per Unit | Footprint              | JLCPCB Part # | Total Cost |
| Shipping                                                                                                  | https://jlcpcb.com                                                              | 1   | 14.21         |                        |               | 14.21      |
|                                                                                                           |                                                                                 |     |               | TOTAL                  |               | 14.21      |
|                                                                                                           |                                                                                 |     |               |                        |               |            |
| 3D-Printing                                                                                               |                                                                                 |     |               |                        |               |            |
| Part                                                                                                      | Link                                                                            | Qty | Cost per Unit | Footprint              | JLCPCB Part # | Total Cost |
| 3D-Printing                                                                                               | https://jlc3dp.com/                                                             | 2   | 9.45          |                        |               | 18.9       |
|                                                                                                           |                                                                                 |     |               | TOTAL                  |               | 18.9       |
