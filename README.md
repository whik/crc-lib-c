# crc-lib-c
基于C语言的CRC校验库，包括常用的21个CRC参数模型实现

#### 常用的CRC参数模型

| CRC算法名称        | 多项式公式                                                   | WIDTH | POLY     | INIT     | XOROUT   | REFIN | REFOUT |
| ------------------ | ------------------------------------------------------------ | ----- | -------- | -------- | -------- | ----- | ------ |
| CRC-4/ITU          | x4 +  x + 1                                                  | 4     | 03       | 00       | 00       | TRUE  | TRUE   |
| CRC-5/EPC          | x5 +  x3 + 1                                                 | 5     | 09       | 09       | 00       | FALSE | FALSE  |
| CRC-5/ITU          | x5 +  x4 + x2 + 1                                            | 5     | 15       | 00       | 00       | TRUE  | TRUE   |
| CRC-5/USB          | x5 +  x2 + 1                                                 | 5     | 05       | 1F       | 1F       | TRUE  | TRUE   |
| CRC-6/ITU          | x6 +  x + 1                                                  | 6     | 03       | 00       | 00       | TRUE  | TRUE   |
| CRC-7/MMC          | x7 +  x3 + 1                                                 | 7     | 09       | 00       | 00       | FALSE | FALSE  |
| CRC-8              | x8 +  x2 + x + 1                                             | 8     | 07       | 00       | 00       | FALSE | FALSE  |
| CRC-8/ITU          | x8 +  x2 + x + 1                                             | 8     | 07       | 00       | 55       | FALSE | FALSE  |
| CRC-8/ROHC         | x8 +  x2 + x + 1                                             | 8     | 07       | FF       | 00       | TRUE  | TRUE   |
| CRC-8/MAXIM        | x8 +  x5 + x4 + 1                                            | 8     | 31       | 00       | 00       | TRUE  | TRUE   |
| CRC-16/IBM         | x16 +  x15 + x2 + 1                                          | 16    | 8005     | 0000     | 0000     | TRUE  | TRUE   |
| CRC-16/MAXIM       | x16 +  x15 + x2 + 1                                          | 16    | 8005     | 0000     | FFFF     | TRUE  | TRUE   |
| CRC-16/USB         | x16 +  x15 + x2 + 1                                          | 16    | 8005     | FFFF     | FFFF     | TRUE  | TRUE   |
| CRC-16/MODBUS      | x16 +  x15 + x2 + 1                                          | 16    | 8005     | FFFF     | 0000     | TRUE  | TRUE   |
| CRC-16/CCITT       | x16 +  x12 + x5 + 1                                          | 16    | 1021     | 0000     | 0000     | TRUE  | TRUE   |
| CRC-16/CCITT-FALSE | x16 +  x12 + x5 + 1                                          | 16    | 1021     | FFFF     | 0000     | FALSE | FALSE  |
| CRC-16/X25         | x16 +  x12 + x5 + 1                                          | 16    | 1021     | FFFF     | FFFF     | TRUE  | TRUE   |
| CRC-16/XMODEM      | x16 +  x12 + x5 + 1                                          | 16    | 1021     | 0000     | 0000     | FALSE | FALSE  |
| CRC-16/DNP         | x16 +  x13 + x12 + x11 + x10 + x8 + x6 + x5 +  x2 + 1        | 16    | 3D65     | 0000     | FFFF     | TRUE  | TRUE   |
| CRC-32             | x32 +  x26 + x23 + x22 + x16 + x12 + x11 + x10 +  x8 + x7 + x5 + x4 + x2 + x + 1 | 32    | 04C11DB7 | FFFFFFFF | FFFFFFFF | TRUE  | TRUE   |
| CRC-32/MPEG-2      | x32 +  x26 + x23 + x22 + x16 + x12 + x11 + x10 +  x8 + x7 + x5 + x4 + x2 + x + 1 | 32    | 04C11DB7 | FFFFFFFF | 0        | FALSE | FALSE  |

#### CRC计算工具

在线计算工具：www.ip33.com/crc.html

离线计算工具：

- CRC_Calc v0.1：http://xz.w10a.com/Small/CRCJISUANQI.zip
- 格西CRC计算器：http://www.geshe.com/home/products/GToolbox/bin/GCRC.exe