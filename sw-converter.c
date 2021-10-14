#include<stdio.h>

int main(void){

  int seireki;
  char *gengou, *jikkan, *junishi;

  printf("半角数字で西暦年号を入力して下さい：");
  scanf("%d",&seireki);
  

  switch(seireki % 10){
  default: jikkan = "庚"; break;
  case 1: jikkan = "辛"; break;
  case 2: jikkan = "壬"; break;
  case 3: jikkan = "癸"; break;
  case 4: jikkan = "甲"; break;
  case 5: jikkan = "乙"; break;
  case 6: jikkan = "丙"; break;
  case 7: jikkan = "丁"; break;
  case 8: jikkan = "戊"; break;
  case 9: jikkan = "己"; break;
  }

  switch(seireki % 12){
  default: junishi = "申"; break;
  case 1: junishi = "酉"; break;
  case 2: junishi = "戌"; break;
  case 3: junishi = "亥"; break;
  case 4: junishi = "子"; break;
  case 5: junishi = "丑"; break;
  case 6: junishi = "寅"; break;
  case 7: junishi = "卯"; break;
  case 8: junishi = "辰"; break;
  case 9: junishi = "巳"; break;
  case 10: junishi = "午"; break;
  case 11: junishi = "未"; break;
  }

  if(645 <= seireki && seireki <= 649){
    gengou = "大化";
  }
  else if(650 <= seireki && seireki <= 654){
    gengou = "白雉";
  }
  else if(seireki == 686){
    gengou = "朱鳥";
  }
  else if(701 <= seireki && seireki <= 703){
    gengou = "大宝";
  }
  else if(704 <= seireki && seireki <= 707){
    gengou = "慶雲";
  }
  else if(708 <= seireki && seireki <= 714){
    gengou = "和銅";
  }
  else if(715 <= seireki && seireki <= 716){
    gengou = "霊亀";
  }
  else if(717 <= seireki && seireki <= 723){
    gengou = "養老";
  }
  else if(724 <= seireki && seireki <= 728){
    gengou = "神亀";
  }
  else if(729 <= seireki && seireki <= 748){
    gengou = "天平";
  }
  else if(seireki == 749){
    gengou = "天平感宝・天平勝宝";
  }
  else if(750 <= seireki && seireki <= 756){
    gengou = "天平勝宝";
  }
  else if(757 <= seireki && seireki <= 764){
    gengou = "天平宝字";
  }
  else if(765 <= seireki && seireki <= 766){
    gengou = "天平神護";
  }
  else if(767 <= seireki && seireki <= 769){
    gengou = "神護慶雲";
  }
  else if(770 <= seireki && seireki <= 780){
    gengou = "宝亀";
  }
  else if(seireki == 781){
    gengou = "天応";
  }
  else if(782 <= seireki && seireki <= 805){
    gengou = "延暦";
  }
  else if(806 <= seireki && seireki <= 809){
    gengou = "大同";
  }
  else if(810 <= seireki && seireki <= 823){
    gengou = "弘仁";
  }
  else if(824 <= seireki && seireki <= 833){
    gengou = "天長";
  }
  else if(834 <= seireki && seireki <= 847){
    gengou = "承和";
  }
  else if(848 <= seireki && seireki <= 850){
    gengou = "嘉祥";
  }
  else if(851 <= seireki && seireki <= 853){
    gengou = "仁寿";
  }
  else if(854 <= seireki && seireki <= 856){
    gengou = "斉衡";
  }
  else if(857 <= seireki && seireki <= 858){
    gengou = "天安";
  }
  else if(859 <= seireki && seireki <= 876){
    gengou = "貞観";
  }
  else if(877 <= seireki && seireki <= 884){
    gengou = "元慶";
  }
  else if(885 <= seireki && seireki <= 888){
    gengou = "仁和";
  }
  else if(889 <= seireki && seireki <= 897){
    gengou = "寛平";
  }
  else if(898 <= seireki && seireki <= 900){
    gengou = "昌泰";
  }
  else if(901 <= seireki && seireki <= 922){
    gengou = "延喜";
  }
  else if(923 <= seireki && seireki <= 930){
    gengou = "延長";
  }
  else if(931 <= seireki && seireki <= 937){
    gengou = "承平";
  }
  else if(938 <= seireki && seireki <= 946){
    gengou = "天慶";
  }
  else if(947 <= seireki && seireki <= 956){
    gengou = "天暦";
  }
  else if(957 <= seireki && seireki <= 960){
    gengou = "天徳";
  }
  else if(961 <= seireki && seireki <= 963){
    gengou = "応和";
  }
  else if(964 <= seireki && seireki <= 967){
    gengou = "康保";
  }
  else if(968 <= seireki && seireki <= 969){
    gengou = "安和";
  }
  else if(970 <= seireki && seireki <= 973){
    gengou = "天禄";
  }
  else if(974 <= seireki && seireki <= 975){
    gengou = "天延";
  }
  else if(976 <= seireki && seireki <= 977){
    gengou = "貞元";
  }
  else if(978 <= seireki && seireki <= 982){
    gengou = "天元";
  }
  else if(983 <= seireki && seireki <= 984){
    gengou = "永観";
  }
  else if(985 <= seireki && seireki <= 986){
    gengou = "寛和";
  }
  else if(987 <= seireki && seireki <= 988){
    gengou = "永延";
  }
  else if(seireki == 989){
    gengou = "永祚";
  }
  else if(990 <= seireki && seireki <= 994){
    gengou = "正暦";
  }
  else if(995 <= seireki && seireki <= 998){
    gengou = "長徳";
  }
  else if(999 <= seireki && seireki <= 1003){
    gengou = "長保";
  }
  else if(1004 <= seireki && seireki <= 1012){
    gengou = "寛弘";
  }
  else if(1013 <= seireki && seireki <= 1016){
    gengou = "長和";
  }
  else if(1017 <= seireki && seireki <= 1020){
    gengou = "寛仁";
  }
  else if(1021 <= seireki && seireki <= 1023){
    gengou = "治安";
  }
  else if(1024 <= seireki && seireki <= 1027){
    gengou = "万寿";
  }
  else if(1028 <= seireki && seireki <= 1036){
    gengou = "長元";
  }
  else if(1037 <= seireki && seireki <= 1039){
    gengou = "長暦";
  }
  else if(1040 <= seireki && seireki <= 1043){
    gengou = "長久";
  }
  else if(1044 <= seireki && seireki <= 1045){
    gengou = "寛徳";
  }
  else if(1046 <= seireki && seireki <= 1052){
    gengou = "永承";
  }
  else if(1053 <= seireki && seireki <= 1057){
    gengou = "天喜";
  }
  else if(1058 <= seireki && seireki <= 1064){
    gengou = "康平";
  }
  else if(1065 <= seireki && seireki <= 1068){
    gengou = "治暦";
  }
  else if(1069 <= seireki && seireki <= 1073){
    gengou = "延久";
  }
  else if(1074 <= seireki && seireki <= 1076){
    gengou = "承保";
  }
  else if(1077 <= seireki && seireki <= 1080){
    gengou = "承暦";
  }
  else if(1081 <= seireki && seireki <= 1083){
    gengou = "永保";
  }
  else if(1084 <= seireki && seireki <= 1086){
    gengou = "応徳";
  }
  else if(1087 <= seireki && seireki <= 1094){
    gengou = "寛治";
  }
  else if(1095 <= seireki && seireki <= 1096){
    gengou = "嘉保";
  }
  else if(seireki == 1097){
    gengou = "永長・承徳";
  }
  else if(seireki == 1098){
    gengou = "承徳";
  }
  else if(1099 <= seireki && seireki <= 1103){
    gengou = "康和";
  }
  else if(1104 <= seireki && seireki <= 1105){
    gengou = "長治";
  }
  else if(1106 <= seireki && seireki <= 1107){
    gengou = "嘉承";
  }
  else if(1108 <= seireki && seireki <= 1109){
    gengou = "天仁";
  }
  else if(1110 <= seireki && seireki <= 1112){
    gengou = "天永";
  }
  else if(1113 <= seireki && seireki <= 1117){
    gengou = "永久";
  }
  else if(1118 <= seireki && seireki <= 1119){
    gengou = "元永";
  }
  else if(1120 <= seireki && seireki <= 1123){
    gengou = "保安";
  }
  else if(1124 <= seireki && seireki <= 1125){
    gengou = "天治";
  }
  else if(1126 <= seireki && seireki <= 1130){
    gengou = "大治";
  }
  else if(seireki == 1131){
    gengou = "天承";
  }
  else if(1132 <= seireki && seireki <= 1134){
    gengou = "長承";
  }
  else if(1135 <= seireki && seireki <= 1140){
    gengou = "保延";
  }
  else if(seireki == 1141){
    gengou = "永治";
  }
  else if(1142 <= seireki && seireki <= 1143){
    gengou = "康治";
  }
  else if(seireki == 1144){
    gengou = "天養";
  }
  else if(1145 <= seireki && seireki <= 1150){
    gengou = "久安";
  }
  else if(1151 <= seireki && seireki <= 1153){
    gengou = "仁平";
  }
  else if(1154 <= seireki && seireki <= 1155){
    gengou = "久寿";
  }
  else if(1156 <= seireki && seireki <= 1158){
    gengou = "保元";
  }
  else if(seireki == 1159){
    gengou = "平治";
  }
  else if(seireki == 1160){
    gengou = "永暦";
  }
  else if(1161 <= seireki && seireki <= 1162){
    gengou = "応保";
  }
  else if(1163 <= seireki && seireki <= 1164){
    gengou = "長寛";
  }
  else if(seireki == 1165){
    gengou = "永万";
  }
  else if(1166 <= seireki && seireki <= 1168){
    gengou = "仁安";
  }
  else if(1169 <= seireki && seireki <= 1170){
    gengou = "嘉応";
  }
  else if(1171 <= seireki && seireki <= 1174){
    gengou = "承安";
  }
  else if(1175 <= seireki && seireki <= 1176){
    gengou = "安元";
  }
  else if(1177 <= seireki && seireki <= 1180){
    gengou = "治承";
  }
  else if(seireki == 1181){
    gengou = "養和";
  }
  else if(1182 <= seireki && seireki <= 1183){
    gengou = "寿永";
  }
  else if(seireki == 1184){
    gengou = "元暦";
  }
  else if(1185 <= seireki && seireki <= 1189){
    gengou = "文治";
  }
  else if(1190 <= seireki && seireki <= 1198){
    gengou = "建久";
  }
  else if(1199 <= seireki && seireki <= 1200){
    gengou = "正治";
  }
  else if(1201 <= seireki && seireki <= 1203){
    gengou = "建仁";
  }
  else if(1204 <= seireki && seireki <= 1205){
    gengou = "元久";
  }
  else if(seireki == 1206){
    gengou = "建永";
  }
  else if(1207 <= seireki && seireki <= 1210){
    gengou = "承元";
  }
  else if(1211 <= seireki && seireki <= 1213){
    gengou = "建暦";
  }
  else if(1214 <= seireki && seireki <= 1218){
    gengou = "健保";
  }
  else if(1219 <= seireki && seireki <= 1221){
    gengou = "承久";
  }
  else if(1222 <= seireki && seireki <= 1223){
    gengou = "貞応";
  }
  else if(seireki == 1224){
    gengou = "元仁";
  }
  else if(1225 <= seireki && seireki <= 1227){
    gengou = "嘉禄";
  }
  else if(seireki == 1228){
    gengou = "安貞";
  }
  else if(1229 <= seireki && seireki <= 1231){
    gengou = "寛喜";
  }
  else if(seireki == 1232){
    gengou = "貞永";
  }
  else if(seireki == 1233){
    gengou = "天福";
  }
  else if(seireki == 1234){
    gengou = "文暦";
  }
  else if(1235 <= seireki && seireki <= 1237){
    gengou = "嘉禎";
  }
  else if(seireki == 1238){
    gengou = "暦仁";
  }
  else if(seireki == 1239){
    gengou = "延応";
  }
  else if(1240 <= seireki && seireki <= 1242){
    gengou = "仁治";
  }
  else if(1243 <= seireki && seireki <= 1246){
    gengou = "寛元";
  }
  else if(1247 <= seireki && seireki <= 1248){
    gengou = "宝治";
  }
  else if(1249 <= seireki && seireki <= 1255){
    gengou = "建長";
  }
  else if(seireki == 1256){
    gengou = "康元";
  }
  else if(1257 <= seireki && seireki <= 1258){
    gengou = "正嘉";
  }
  else if(seireki == 1259){
    gengou = "正元";
  }
  else if(seireki == 1260){
    gengou = "文応";
  }
  else if(1261 <= seireki && seireki <= 1263){
    gengou = "弘長";
  }
  else if(1264 <= seireki && seireki <= 1274){
    gengou = "文永";
  }
  else if(1275 <= seireki && seireki <= 1277){
    gengou = "建治";
  }
  else if(1278 <= seireki && seireki <= 1287){
    gengou = "弘安";
  }
  else if(1288 <= seireki && seireki <= 1292){
    gengou = "正応";
  }
  else if(1293 <= seireki && seireki <= 1298){
    gengou = "永仁";
  }
  else if(1299 <= seireki && seireki <= 1301){
    gengou = "正安";
  }
  else if(seireki == 1302){
    gengou = "乾元";
  }
  else if(1303 <= seireki && seireki <= 1306){
    gengou = "嘉元";
  }
  else if(seireki == 1307){
    gengou = "徳治";
  }
  else if(1308 <= seireki && seireki <= 1310){
    gengou = "延慶";
  }
  else if(seireki == 1311){
    gengou = "応長";
  }
  else if(1312 <= seireki && seireki <= 1316){
    gengou = "正和";
  }
  else if(1317 <= seireki && seireki <= 1318){
    gengou = "文保";
  }
  else if(1319 <= seireki && seireki <= 1320){
    gengou = "元応";
  }
  else if(1321 <= seireki && seireki <= 1323){
    gengou = "元享";
  }
  else if(1324 <= seireki && seireki <= 1325){
    gengou = "正中";
  }
  else if(1326 <= seireki && seireki <= 1328){
    gengou = "嘉暦";
  }
  else if(1329 <= seireki && seireki <= 1330){
    gengou = "元徳";
  }
  else if(seireki == 1331){
    gengou = "元徳/元弘";
  }
  else if(seireki == 1332){
    gengou = "正慶/元弘";
  }
  else if(seireki == 1333){
    gengou = "元弘";
  }
  else if(1334 <= seireki && seireki <= 1335){
    gengou = "建武";
  }
  else if(1336 <= seireki && seireki <= 1337){
    gengou = "建武/延元";
  }
  else if(1338 <= seireki && seireki <= 1339){
    gengou = "暦応/延元";
  }
  else if(1340 <= seireki && seireki <= 1341){
    gengou = "暦応/興国";
  }
  else if(1342 <= seireki && seireki <= 1344){
    gengou = "康永/興国";
  }
  else if(1345 <= seireki && seireki <= 1346){
    gengou = "貞和/興国";
  }
  else if(1347 <= seireki && seireki <= 1349){
    gengou = "貞和/正平";
  }
  else if(1350 <= seireki && seireki <= 1351){
    gengou = "観応/正平";
  }
  else if(1352 <= seireki && seireki <= 1355){
    gengou = "文和/正平";
  }
  else if(1356 <= seireki && seireki <= 1360){
    gengou = "延文/正平";
  }
  else if(seireki == 1361){
    gengou = "康安/正平";
  }
  else if(1362 <= seireki && seireki <= 1367){
    gengou = "貞治/正平";
  }
  else if(1368 <= seireki && seireki <= 1369){
    gengou = "応安/正平";
  }
  else if(1370 <= seireki && seireki <= 1371){
    gengou = "応安/建徳";
  }
  else if(1372 <= seireki && seireki <= 1374){
    gengou = "応安/文中";
  }
  else if(1375 <= seireki && seireki <= 1378){
    gengou = "永和/天授";
  }
  else if(1379 <= seireki && seireki <= 1380){
    gengou = "康暦/天授";
  }
  else if(1381 <= seireki && seireki <= 1383){
    gengou = "永徳/弘和";
  }
  else if(1384 <= seireki && seireki <=1386){
    gengou = "至徳/元中";
  }
  else if(1387 <= seireki && seireki <= 1388){
    gengou = "嘉慶/元中";
  }
  else if(seireki == 1389){
    gengou = "康応/元中";
  }
  else if(1390 <= seireki && seireki <= 1391){
    gengou = "明徳/元中";
  }
  else if(1392 <= seireki && seireki <= 1393){
    gengou = "明徳";
  }
  else if(1394 <= seireki && seireki <= 1427){
    gengou = "応永";
  }
  else if(seireki == 1428){
    gengou = "正長";
  }
  else if(1429 <= seireki && seireki <= 1440){
    gengou = "永享";
  }
  else if(1441 <= seireki && seireki <= 1443){
    gengou = "嘉吉";
  }
  else if(1444 <= seireki && seireki <= 1448){
    gengou = "文安";
  }
  else if(1449 <= seireki && seireki <= 1451){
    gengou = "宝徳";
  }
  else if(1452 <= seireki && seireki <= 1454){
    gengou = "享徳";
  }
  else if(1455 <= seireki && seireki <= 1456){
    gengou = "康正";
  }
  else if(1457 <= seireki && seireki <= 1460){
    gengou = "長禄";
  }
  else if(1461 <= seireki && seireki <= 1465){
    gengou = "寛正";
  }
  else if(seireki == 1466){
    gengou = "文正";
  }
  else if(1467 <= seireki && seireki <= 1468){
    gengou = "応仁";
  }
  else if(1469 <= seireki && seireki <= 1486){
    gengou = "文明";
  }
  else if(1487 <= seireki && seireki <= 1488){
    gengou = "長享";
  }
  else if(1489 <= seireki && seireki <= 1491){
    gengou = "延徳";
  }
  else if(1492 <= seireki && seireki <= 1500){
    gengou = "明応";
  }
  else if(1501 <= seireki && seireki <= 1503){
    gengou = "文亀";
  }
  else if(1504 <= seireki && seireki <= 1520){
    gengou = "永正";
  }
  else if(1521 <= seireki && seireki <= 1527){
    gengou = "大永";
  }
  else if(1528 <= seireki && seireki <= 1531){
    gengou = "享禄";
  }
  else if(1532 <= seireki && seireki <= 1554){
    gengou = "天文";
  }
  else if(1555 <= seireki && seireki <= 1557){
    gengou = "弘治";
  }
  else if(1558 <= seireki && seireki <= 1569){
    gengou = "永禄";
  }
  else if(1570 <= seireki && seireki <= 1572){
    gengou = "元亀";
  }
  else if(1573 <= seireki && seireki <= 1592){
    gengou = "天正";
  }
  else if(1593 <= seireki && seireki <= 1595){
    gengou = "文禄";
  }
  else if(1596 <= seireki && seireki <= 1614){
    gengou = "慶長";
  }
  else if(1615 <= seireki && seireki <= 1623){
    gengou = "元和";
  }
  else if(1624 <= seireki && seireki <= 1644){
    gengou = "寛永";
  }
  else if(1645 <= seireki && seireki <= 1647){
    gengou = "正保";
  }
  else if(1648 <= seireki && seireki <= 1651){
    gengou = "慶安";
  }
  else if(1652 <= seireki && seireki <= 1654){
    gengou = "承応";
  }
  else if(1655 <= seireki && seireki <= 1657){
    gengou = "明暦";
  }
  else if(1658 <= seireki && seireki <= 1660){
    gengou = "万治";
  }
  else if(1661 <= seireki && seireki <= 1672){
    gengou = "寛文";
  }
  else if(1673 <= seireki && seireki <= 1680){
    gengou = "延宝";
  }
  else if(1681 <= seireki && seireki <= 1683){
    gengou = "天和";
  }
  else if(1684 <= seireki && seireki <= 1687){
    gengou = "貞享";
  }
  else if(1688 <= seireki && seireki <= 1703){
    gengou = "元禄";
  }
  else if(1704 <= seireki && seireki <= 1710){
    gengou = "宝永";
  }
  else if(1711 <= seireki && seireki <= 1715){
    gengou = "正徳";
  }
  else if(1716 <= seireki && seireki <= 1735){
    gengou = "享保";
  }
  else if(1736 <= seireki && seireki <= 1740){
    gengou = "元文";
  }
  else if(1741 <= seireki && seireki <= 1743){
    gengou = "寛保";
  }
  else if(1744 <= seireki && seireki <= 1747){
    gengou = "延享";
  }
  else if(1748 <= seireki && seireki <= 1750){
    gengou = "寛延";
  }
  else if(1751 <= seireki && seireki <= 1763){
    gengou = "宝暦";
  }
  else if(1764 <= seireki && seireki <= 1771){
    gengou = "明和";
  }
  else if(1772 <= seireki && seireki <= 1780){
    gengou = "安永";
  }
  else if(1781 <= seireki && seireki <= 1788){
    gengou = "天明";
  }
  else if(1789 <= seireki && seireki <= 1800){
    gengou = "寛政";
  }
  else if(1801 <= seireki && seireki <= 1803){
    gengou = "享和";
  }
  else if(1804 <= seireki && seireki <= 1817){
    gengou = "文化";
  }
  else if(1818 <= seireki && seireki <= 1830){
    gengou = "文政";
  }
  else if(1831 <= seireki && seireki <= 1844){
    gengou = "天保";
  }
  else if(1845 <= seireki && seireki <= 1847){
    gengou = "弘化";
  }
  else if(1848 <= seireki && seireki <= 1854){
    gengou = "嘉永";
  }
  else if(1855 <= seireki && seireki <= 1859){
    gengou = "安政";
  }
  else if(seireki == 1860){
    gengou = "万延";
  }
  else if(1861 <= seireki && seireki <= 1863){
    gengou = "文久";
  }
  else if(seireki == 1864){
    gengou = "元治";
  }
  else if(1865 <= seireki && seireki <= 1867){
    gengou = "慶応";
  }
  else if(1868 <= seireki && seireki <= 1911){
    gengou = "明治";
  }
  else if(1912 <= seireki && seireki <= 1925){
    gengou = "大正";
  }
  else if(1926 <= seireki && seireki <= 1988){
    gengou = "昭和";
  }
  else if(1989 <= seireki && seireki <= 2018){
    gengou = "平成";
  }
  else if(2019 <= seireki){
    gengou = "令和";
  }

  else gengou = "";
    

  if(seireki == 0){
    printf("西暦0年は存在しません。\n");
  }
  else if(0 < seireki){
     printf("%d年は%s%s%s年です。\n",seireki,gengou,jikkan,junishi);
  }
  else if(seireki < 0){
    printf("西暦は1年から始まります。\n");
  }
  
  return 0;
}
    
