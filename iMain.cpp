#include <iostream>
#include<stdlib.h>
#include<string>
#include "include/iGraphics.h"
#include<ctime>
using namespace std;
bool music = true;
int m2 = 0,sco=0;
int live = 5,li=0;
int k = 1, k2 = 1, b = 0,b2=0;
int comment = 10;
char s[10] = {0,1,2,3,4,5,6,7,8,9};
char standl[30][20] = { "music\\1101.bmp", "music\\1102.bmp", "music\\1103.bmp", "music\\1104.bmp", "music\\1105.bmp", "music\\1106.bmp", "music\\1107.bmp", "music\\1108.bmp", "music\\1109.bmp", "music\\1110.bmp", "music\\1111.bmp", "music\\1112.bmp", "music\\1113.bmp", "music\\1114.bmp", "music\\1115.bmp", "music\\1116.bmp", "music\\1117.bmp", "music\\1118.bmp", "music\\1119.bmp", "music\\1120.bmp", "music\\1121.bmp", "music\\1122.bmp", "music\\1123.bmp", "music\\1124.bmp", "music\\1125.bmp", "music\\1126.bmp", "music\\1127.bmp", "music\\1128.bmp", "music\\1129.bmp", "music\\1130.bmp" };
char standr[30][20] = { "music\\1201.bmp", "music\\1202.bmp", "music\\1203.bmp", "music\\1204.bmp", "music\\1205.bmp", "music\\1206.bmp", "music\\1207.bmp", "music\\1208.bmp", "music\\1209.bmp", "music\\1210.bmp", "music\\1211.bmp", "music\\1212.bmp", "music\\1213.bmp", "music\\1214.bmp", "music\\1215.bmp", "music\\1216.bmp", "music\\1217.bmp", "music\\1218.bmp", "music\\1219.bmp", "music\\1220.bmp", "music\\1221.bmp", "music\\1222.bmp", "music\\1223.bmp", "music\\1224.bmp", "music\\1225.bmp", "music\\1226.bmp", "music\\1227.bmp", "music\\1228.bmp", "music\\1229.bmp", "music\\1230.bmp" };
char fire[4][20] = { "music\\201.bmp", "music\\202.bmp", "music\\203.bmp", "music\\204.bmp" };
char fire2[4][20] = { "music\\301.bmp", "music\\302.bmp", "music\\303.bmp", "music\\304.bmp" };
char run1[11][20] = { "music\\901.bmp", "music\\902.bmp", "music\\903.bmp", "music\\904.bmp", "music\\905.bmp", "music\\906.bmp", "music\\907.bmp", "music\\908.bmp", "music\\909.bmp", "music\\910.bmp", "music\\911.bmp" };

char run2[11][20] = { "music\\1001.bmp", "music\\1002.bmp", "music\\1003.bmp", "music\\1004.bmp", "music\\1005.bmp", "music\\1006.bmp", "music\\1007.bmp", "music\\1008.bmp", "music\\1009.bmp", "music\\1010.bmp", "music\\1011.bmp" };
char ene1[6][20] = { "music\\e1.bmp", "music\\e2.bmp", "music\\e3.bmp", "music\\e4.bmp", "music\\e5.bmp","music\\e6.bmp"  };
char ene1i[6][20] = { "music\\e1i.bmp", "music\\e2i.bmp", "music\\e3i.bmp", "music\\e4i.bmp", "music\\e5i.bmp", "music\\e6i.bmp" };
char ene2i[6][20] = { "music\\e21.bmp", "music\\e22.bmp", "music\\e23.bmp", "music\\e24.bmp", "music\\e25.bmp", "music\\e26.bmp" };
char ene2v[6][20] = { "music\\e21i.bmp", "music\\e22i.bmp", "music\\e23i.bmp", "music\\e24i.bmp", "music\\e25i.bmp", "music\\e26i.bmp" };


char standlv[30][20] = { "music\\v1101.bmp", "music\\v1102.bmp", "music\\v1103.bmp", "music\\v1104.bmp", "music\\v1105.bmp", "music\\v1106.bmp", "music\\v1107.bmp", "music\\v1108.bmp", "music\\v1109.bmp", "music\\v1110.bmp", "music\\v1111.bmp", "music\\v1112.bmp", "music\\v1113.bmp", "music\\v1114.bmp", "music\\v1115.bmp", "music\\v1116.bmp", "music\\v1117.bmp", "music\\v1118.bmp", "music\\v1119.bmp", "music\\v1120.bmp", "music\\v1121.bmp", "music\\v1122.bmp", "music\\v1123.bmp", "music\\v1124.bmp", "music\\v1125.bmp", "music\\v1126.bmp", "music\\v1127.bmp", "music\\v1128.bmp", "music\\v1129.bmp", "music\\v1130.bmp" };
char standrv[30][20] = { "music\\v1201.bmp", "music\\v1202.bmp", "music\\v1203.bmp", "music\\v1204.bmp", "music\\v1205.bmp", "music\\v1206.bmp", "music\\v1207.bmp", "music\\v1208.bmp", "music\\v1209.bmp", "music\\v1210.bmp", "music\\v1211.bmp", "music\\v1212.bmp", "music\\v1213.bmp", "music\\v1214.bmp", "music\\v1215.bmp", "music\\v1216.bmp", "music\\v1217.bmp", "music\\v1218.bmp", "music\\v1219.bmp", "music\\v1220.bmp", "music\\v1221.bmp", "music\\v1222.bmp", "music\\v1223.bmp", "music\\v1224.bmp", "music\\v1225.bmp", "music\\v1226.bmp", "music\\v1227.bmp", "music\\v1228.bmp", "music\\v1229.bmp", "music\\v1230.bmp" };
char firev[4][20] = { "music\\v201.bmp", "music\\v202.bmp", "music\\v203.bmp", "music\\v204.bmp" };
char fire2v[4][20] = { "music\\v301.bmp", "music\\v302.bmp", "music\\v303.bmp", "music\\v304.bmp" };
char run1v[11][20] = { "music\\v901.bmp", "music\\v902.bmp", "music\\v903.bmp", "music\\v904.bmp", "music\\v905.bmp", "music\\v906.bmp", "music\\v907.bmp", "music\\v908.bmp", "music\\v909.bmp", "music\\v910.bmp", "music\\v911.bmp" };

char run2v[11][20] = { "music\\v1001.bmp", "music\\v1002.bmp", "music\\v1003.bmp", "music\\v1004.bmp", "music\\v1005.bmp", "music\\v1006.bmp", "music\\v1007.bmp", "music\\v1008.bmp", "music\\v1009.bmp", "music\\v1010.bmp", "music\\v1011.bmp" };
char ene1v[6][20] = { "music\\ve1.bmp", "music\\ve2.bmp", "music\\ve3.bmp", "music\\ve4.bmp", "music\\ve5.bmp", "music\\ve6.bmp" };
char ene1vi[6][20] = { "music\\ve1i.bmp", "music\\ve2i.bmp", "music\\ve3i.bmp", "music\\ve4i.bmp", "music\\ve5i.bmp", "music\\ve6i.bmp" };
char ene2vi[6][20] = { "music\\e21v.bmp", "music\\e22v.bmp", "music\\e23v.bmp", "music\\e24v.bmp", "music\\e25v.bmp", "music\\e26v.bmp", };
char ene2[6][20] = { "music\\e21iv.bmp", "music\\e22iv.bmp", "music\\e23iv.bmp", "music\\e24iv.bmp", "music\\e25iv.bmp", "music\\e26iv.bmp", };

char enelive[2][20] = { "music\\elive1.bmp", "music\\elive2.bmp" };
char enelive2[2][20] = { "music\\elive1.bmp", "music\\elive2.bmp" };

char hdiel[22][20] = { "music\\1401.bmp", "music\\1402.bmp", "music\\1403.bmp", "music\\1404.bmp", "music\\1405.bmp", "music\\1406.bmp", "music\\1407.bmp", "music\\1408.bmp", "music\\1409.bmp", "music\\1410.bmp", "music\\1411.bmp", "music\\1412.bmp", "music\\1413.bmp", "music\\1414.bmp", "music\\1415.bmp", "music\\1416.bmp", "music\\1417.bmp", "music\\1418.bmp", "music\\1419.bmp", "music\\1420.bmp", "music\\1421.bmp", "music\\1422.bmp" };

char hdielv[22][20] = { "music\\v1401.bmp", "music\\v1402.bmp", "music\\v1403.bmp", "music\\v1404.bmp", "music\\v1405.bmp", "music\\v1406.bmp", "music\\v1407.bmp", "music\\v1408.bmp", "music\\1409.bmp", "music\\v1410.bmp", "music\\v1411.bmp", "music\\v1412.bmp", "music\\v1413.bmp", "music\\v1414.bmp", "music\\v1415.bmp", "music\\v1416.bmp", "music\\v1417.bmp", "music\\v1418.bmp", "music\\v1419.bmp", "music\\v1420.bmp", "music\\v1421.bmp", "music\\v1422.bmp" };



char hdier[22][20] = { "music\\1501.bmp", "music\\1502.bmp", "music\\1503.bmp", "music\\1504.bmp", "music\\1505.bmp", "music\\1506.bmp", "music\\1507.bmp", "music\\1508.bmp", "music\\1509.bmp", "music\\1510.bmp", "music\\1511.bmp", "music\\1512.bmp", "music\\1513.bmp", "music\\1514.bmp", "music\\1515.bmp", "music\\1516.bmp", "music\\1517.bmp", "music\\1518.bmp", "music\\1519.bmp", "music\\1520.bmp", "music\\1521.bmp", "music\\1522.bmp" };
char hdierv[22][20] = { "music\\v1501.bmp", "music\\v1502.bmp", "music\\v1503.bmp", "music\\v1504.bmp", "music\\v1505.bmp", "music\\v1506.bmp", "music\\v1507.bmp", "music\\v1508.bmp", "music\\v1509.bmp", "music\\v1510.bmp", "music\\v1511.bmp", "music\\v1512.bmp", "music\\v1513.bmp", "music\\v1514.bmp", "music\\v1515.bmp", "music\\v1516.bmp", "music\\v1517.bmp", "music\\v1518.bmp", "music\\v1519.bmp", "music\\v1520.bmp", "music\\v1521.bmp", "music\\v1522.bmp" };

char scorecard[10][20] = { "music\\score0.bmp", "music\\score1.bmp", "music\\score2.bmp", "music\\score3.bmp", "music\\score4.bmp", "music\\score5.bmp", "music\\score6.bmp", "music\\score7.bmp", "music\\score8.bmp", "music\\score9.bmp", };

char hunterlife = 3;


char blust[19][20] = { "music\\1301.bmp", "music\\1302.bmp", "music\\1303.bmp", "music\\1304.bmp", "music\\1305.bmp", "music\\1306.bmp", "music\\1307.bmp", "music\\1308.bmp", "music\\1309.bmp", "music\\1310.bmp", "music\\1311.bmp", "music\\1312.bmp", "music\\1313.bmp", "music\\1314.bmp", "music\\1315.bmp", "music\\1316.bmp", "music\\1317.bmp", "music\\1318.bmp", "music\\1319.bmp" };


int eneliveno1 = 0;
int eneliveno2 = 0;
int x = 550, y = 310;
int x1[4] = { 0, 900, 0, 900 }, y1_[4] = { 350,350,170,170 };
int x2[4] = { 900, 0, 900, 0 }, y2_[4] = { 350, 170, 170, 350 };
int xv = 0, yv = 140;

int i = 0,j=0;
int a;
int action=0;

int screen = 0,type=0;
void iDraw()
{
	iClear();

	if (screen == 0){

		iShowBMP(0, 0, "image\\ship 2.bmp");
		iShowBMP2(0, 0, "music\\extra2.bmp",255);
		iShowBMP2(600,390, "image\\new 1.bmp",0);
		iShowBMP2(650, 250, "image\\credit.bmp", 0);
		//iShowBMP2(650, 300, "image\\.bmp", 0);

		iShowBMP2(685, 100, "image\\quit.bmp", 0);

		iShowBMP2(250, 585, "image\\pirate 3.bmp", 0);
		iShowBMP2(485, 585, "image\\of 1.bmp", 0);
		iShowBMP2(600, 575, "image\\of 2.bmp", 0);
		 music = true;
		 m2 = 0;
		 live = 5;
		 k = 1, k2 = 1, b = 0;
		 comment = 10;
		 li = 0;
		 sco = 0;


		hunterlife = 3;
		 eneliveno1 = 0;
		 eneliveno2 = 0;
		 x = 550, y = 310;
		 x1[0] = 0;
		 x1[1] = 900; x1[2] = 0;
		 x1[3] = 900;
		 y1_[4] =  350;
		 y1_[4] = 350;
		 y1_[4] = 170;
			 y1_[4] = 170;
			 x2[0] = 900; x2[1] = 0; x2[2] = 900; x2[3] = 0;
	 y2_[0] =  350; y2_[1] = 350; y2_[2] = 170; y2_[3] = 170;
		 xv = 0, yv = 140;

		 i = 0, j = 0;


	}
	else if (screen == 1 && comment == 0){
		iShowBMP(0, 0, "music\\home.bmp");
		iShowBMP2(0, 0, "music\\extra2.bmp", 255);
		//iShowBMP2(300, 200, "music\\comm1.bmp", 255);
	}
	else if (screen == 1 && comment == 1){
		iShowBMP(0, 0, "image\\moon 2.bmp");
		iShowBMP2(0, 0, "music\\extra2.bmp", 255);
		//iShowBMP2(300, 200, "music\\comm2.bmp", 255);
	}
	else if (screen == 1 && comment == 2){
		iShowBMP(0, 0, "image\\moon 4.bmp");
		iShowBMP2(0, 0, "music\\extra2.bmp", 255);
		//iShowBMP2(300, 100, "image\\loading 2.bmp", 255);
	}

	else if (screen == 1 && comment == 3){


			iShowBMP(0, 0, "image\\.k.bmp");
			iShowBMP2(0, 650, "music\\back.bmp", 255);
			iShowBMP2(410, 610, scorecard[sco / 100], 255);
			iShowBMP2(450, 610, scorecard[sco / 10], 255);
			iShowBMP2(490, 610, scorecard[sco % 10], 255);

			if (hunterlife > 0){
				iShowBMP2(955, 650, "music\\152.bmp", 0);
			}
			if (hunterlife > 1){
				iShowBMP2(930, 650, "music\\152.bmp", 0);
			}
			if (hunterlife > 2){
				iShowBMP2(905, 650, "music\\152.bmp", 0);
			}
			iShowBMP2(550, 450, "image\\toli1.bmp", 255);
			iShowBMP2(550, 155, "image\\toli1.bmp", 255);
			/////
			if (k == 1){
				if (eneliveno1 != 3 && eneliveno1 != 2){
					iShowBMP2(x1[0], y1_[0], ene1i[j], 255);
					if (x1[0] + 150 == 480 ){
						hunterlife--;
						if (hunterlife >= 0){
							PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
						}
					iShowBMP2(x1[0] + 50, y1_[0] + 156, enelive[eneliveno1 ], 255);
				}
				 if (eneliveno1 ==2){
					 if (b < 19){
						 iShowBMP2(x1[0], y1_[0], blust[b], 255);
						 if (b== 18){
							 sco++;
						 }
					 }
					 else{

						eneliveno1 = 3;

					}
				}
			}
			else if (k == 2){
				if (eneliveno1 != 2 && eneliveno1 != 3){
					iShowBMP2(x1[1], y1_[1], ene1[j], 255);
					if (x1[1] == 580 ){
						hunterlife--;
						if (hunterlife >= 0){
							PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
					}
					iShowBMP2(x1[1] + 50, y1_[1] + 156, enelive[eneliveno1 ], 255);
				}
				else if (eneliveno1 == 2){
					if (b < 19){
						iShowBMP2(x1[1], y1_[1], blust[b], 255);
						if (b == 18){
							sco++;
						}

					}
					else {

						eneliveno1 = 3;
					}
				}
			}
			else if (k == 3){

				if (eneliveno1 != 2 && eneliveno1 !=3){
					iShowBMP2(x1[2], y1_[2], ene1vi[j], 255);
					if (x1[2] + 150 == 480 ){
						hunterlife--;
						if (hunterlife >= 0){
							PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
					}
					iShowBMP2(x1[2] + 50, y1_[2], enelive[eneliveno1], 255);
				}
				else if (eneliveno1 == 2){
					if (b < 19){
						iShowBMP2(x1[2], y1_[2], blust[b], 255);
						if (b == 18){
							sco++;
						}

					}
					else {

						eneliveno1 = 3;
					}
				}
			}
			else if (k == 4){
				if (eneliveno1 != 3 && eneliveno1 != 2){
					iShowBMP2(x1[3], y1_[3], ene1v[j], 255);
					if (x1[3] == 580 ){
						hunterlife--;
						if (hunterlife >= 0){
							PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}

					}
					iShowBMP2(x1[3] + 50, y1_[3], enelive[eneliveno1 ], 255);
				}
				else if (eneliveno1 == 2) {
					if (b < 19){
						iShowBMP2(x1[3], y1_[3], blust[b], 255);
						if (b == 18){
							sco++;
						}

					}
					else {

						eneliveno1 = 3;
					}
				}

			}
			//////
			if (hunterlife < 0){
				hunterlife = 0;
			}
			/////
			if (k2 == 1){
				if (eneliveno2 != 3 && eneliveno2 != 2){
					iShowBMP2(x2[0], y2_[0], ene2i[j], 255);
					if (x2[0] == 580 ){
						hunterlife--;
						if (hunterlife >= 0){
							PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
					}
					iShowBMP2(x2[0] + 50, y2_[0] + 156, enelive2[eneliveno2], 255);
				}
				if (eneliveno2 == 2){
					if (b2 < 19){
						iShowBMP2(x2[0], y2_[0], blust[b2], 255);
						if (b2 == 18){
							sco++;
						}
					}
					else{

						eneliveno2 = 3;

					}
				}
			}
			else if (k2 == 2){
				if (eneliveno2 != 2 && eneliveno2 != 3){
					iShowBMP2(x2[1], y2_[1], ene2[j], 255);
					if (x2[1] + 150 == 480 ){
						hunterlife--;
						if (hunterlife >= 0){
							//PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
					}
					iShowBMP2(x2[1] + 50, y2_[1] , enelive2[eneliveno2], 255);
				}
				else if (eneliveno2 == 2){
					if (b2 < 19){
						iShowBMP2(x2[1], y2_[1], blust[b2], 255);
						if (b2 == 18){
							sco++;
						}

					}
					else {

						eneliveno2 = 3;
					}
				}
			}
			else if (k2 == 3){

				if (eneliveno2 != 2 && eneliveno2 != 3){
					iShowBMP2(x2[2], y2_[2], ene2vi[j], 255);
					if (x2[2] == 580 ){
						hunterlife--;
						if (hunterlife >= 0){
							//PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}
					}
					iShowBMP2(x2[2] + 50, y2_[2], enelive2[eneliveno2], 255);
				}
				else if (eneliveno2 == 2){
					if (b2< 19){
						iShowBMP2(x2[2], y2_[2], blust[b2], 255);
						if (b2 == 18){
							sco++;
						}

					}
					else {

						eneliveno2 = 3;
					}
				}
			}
			else if (k2 == 4){
				if (eneliveno2 != 3 && eneliveno2 != 2){
					iShowBMP2(x2[3], y2_[3], ene2v[j], 255);
					if (x2[3] + 150 == 480 ){
						hunterlife--;
						if (hunterlife >= 0){
							//PlaySound("music\\die1.wav", NULL, SND_ASYNC);
						}

					}
					iShowBMP2(x2[3] + 50, y2_[3]+156, enelive2[eneliveno2], 255);
				}
				else if (eneliveno2 == 2) {
					if (b2 < 19){
						iShowBMP2(x2[3], y2_[3], blust[b2], 255);
						if (b2 == 18){
							sco++;
						}

					}
					else {

						eneliveno2 = 3;
					}
				}

			}
			////

















			if (hunterlife == 0){
				if (action == 0 || action == 5){
					iShowBMP2(x, y, hdiel[li], 255);
				}
				if (action == 3 || action == 6){
					iShowBMP2(x, y, hdier[li], 255);
				}
				if (action == 7 || action == 11){
					iShowBMP2(xv, yv, hdielv[li], 255);
				}
				if (action == 9 || action == 12){
					iShowBMP2(xv, yv, hdierv[li], 255);
				}
			}
			else	if (action == 0){
				iShowBMP2(x, y, standl[i], 255);
			}
			else if (action == 1) {

				iShowBMP2(x - 20, y, fire[i], 255);
			}
			else if(action == 3){
				iShowBMP2(x, y, standr[i], 255);
			}
			else	if (action == 4) {

				iShowBMP2(x + 20, y, fire2[i], 255);
			}
			else	if (action == 5) {

				iShowBMP2(x, y, run1[i], 255);
			}
			else	if (action == 6) {

				iShowBMP2(x, y, run2[i], 255);
			}



			else	if (action == 7){
				iShowBMP2(xv, yv, standlv[i], 255);
			}
			else	if (action == 8) {

				iShowBMP2(xv - 20, yv, firev[i], 255);
			}
			else	if (action == 9){
				iShowBMP2(xv, yv, standrv[i], 255);
			}
			else	if (action == 10) {

				iShowBMP2(xv + 20, yv, fire2v[i], 255);
			}
			else	if (action == 11) {

				iShowBMP2(xv, yv, run1v[i], 255);
			}
			else	if (action == 12) {

				iShowBMP2(xv, yv, run2v[i], 255);
			}
			if (hunterlife==0){
				iShowBMP2(400, 400, "image\\game 1.bmp", 255);
				iShowBMP2(450, 300, "image\\game 2.bmp", 255);
				iShowBMP2(410, 610, scorecard[sco / 100], 255);
				iShowBMP2(450, 200, scorecard[sco/10], 255);
				iShowBMP2(490, 200, scorecard[sco % 10], 255);
				iShowBMP2(50, 50, "image\\game 3.bmp", 255);

				//iText(400, 200, s[0], GLUT_BITMAP_TIMES_ROMAN_24);

			}

		}





	else if (screen == 2){

		iShowBMP(0, 0, "music\\6_1.bmp");
		iShowBMP2(0, 650, "music\\back.bmp", 255);
		iShowBMP2(50, 100, "music\\s3.bmp", 255);
		if (m2 == 0){
			iShowBMP2(500, 100, "music\\s1.bmp", 255);
		}
		if (m2 == 1){
			iShowBMP2(100, 500, "music\\s2.bmp", 255);
		}
	}
	else if (screen == 3){
		iShowBMP(0, 0, "image\\credit2.bmp");
		iShowBMP(50, 300, "image\\moshiur.bmp");
		iShowBMP(360, 300, "image\\tusar..bmp");
		iShowBMP(670, 300, "image\\hemel.bmp");
		//iShowBMP2(200, 600, "image\\team 2.bmp", 255);
		iSetColor(255, 255, 255);
		iText(50, 260, "Md. Moshiur Rahman", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(50, 230, "Roll: 190117", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(50, 200, "email: ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(50, 170, "moshiurmoon94", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(50, 140, "@gmail.com", GLUT_BITMAP_TIMES_ROMAN_24);

		iText(360, 260, "Md.Tusar imran", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360, 230, "Roll: 190118", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360, 200, "email:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360, 170, "tusharimran124472", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360, 140, "@gmail.com", GLUT_BITMAP_TIMES_ROMAN_24);


		iText(670, 260, "Md.Anwarul Islam (Hemel)", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(670, 230, "Roll: 190116", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(670, 200, "email:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(670, 170, "himelhim31@gmail.com", GLUT_BITMAP_TIMES_ROMAN_24);


		iText(300, 50, "dept: Computer Science and Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(280, 20, "Pabna University Of Science and Technology", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP2(0, 650, "music\\back.bmp", 255);
	}
	else if (screen == 4){
		exit(1);
	}
}



void iMouseMove(int mx, int my)
{


}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 0 && mx <= 50 && my >= 650 && my <= 700){
			screen = 0;
		}
	}
	if (screen == 0){
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (mx >= 600 && mx <= 983 && my >= 430 && my <= 530){
				screen = 1;
				comment = 0;
			}
			if (mx >= 650 && mx <= 882 && my >= 340 && my <= 420){
				screen = 2;
			}
			if (mx >= 650 && mx <= 890 && my >= 220 && my <= 300){
				screen = 3;
			}
			if (mx >= 650 && mx <= 814 && my >= 100 && my <= 180){
				screen = 4;
			}


		}
		if (screen == 1){
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 0 && mx <= 50 && my >= 650 && my <= 700){
					screen = 0;
				}

			}
		}
		if (screen == 2){
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 0 && mx <= 50 && my >= 650 && my <= 700){
					screen = 0;
				}
			}
		}
		if (screen == 3){
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (mx >= 0 && mx <= 50 && my >= 650 && my <= 700){
					screen = 0;
				}
			}
		}
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}




void iKeyboard(unsigned char key)
{
	 if (key == 's')
	{
		if (music){
			music = false;
			PlaySound(0, 0, 0);
		}
		else {
			music = true;
			PlaySound("music\\kung.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
if(screen == 0){
	if (key == 'w')
	{

	}

	else if (key == 'd')
	{

	}

	else if (key == 'a')
	{

	}
	else if (key == 's')
	{

	}
	else if (key == 'r')
	{

	}
	else if (key == 'g')
	{

	}
	else if (key == 'b')
	{

	}
}
if (screen == 1){
	if (key == 'p')
	{
		screen--;

	}

	else if (key == 'q')
	{

		if (action == 0){
			xv = x;
			action = 7;
		}
		else if (action == 7){
			x = xv;
			action = 0;
		}
		else if (action == 1){
			xv = x;
			action = 8;
		}
		else if (action == 8){
			x = xv;
			action = 1;
		}
		else if (action == 3){
			xv = x;
			action = 9;
		}
		else if (action == 9){
			x = xv;
			action = 3;
		}
		else if (action == 4){
			xv = x;
			action = 10;
		}
		else if (action == 10){
			x = xv;
			action = 4;
		}
		else if (action == 5){
			xv = x;
			action = 11;
		}
		else if (action == 11){
			x = xv;
			action = 5;

		}
		else if (action == 6){
			xv = x;
			action = 12;
		}
		else if (action == 12){
			x = xv;
			action = 6;
		}

	}

	else if (key == ' ')
	{
		i = 0;
		if (action == 0 || action ==5 ){
			action = 1;
			PlaySound("music\\123.wav", NULL,  SND_ASYNC);
			if (x >= x1[k - 1] && y1_[k - 1] == 350){
				eneliveno1++;

			}
			if (eneliveno1 >= 2){

				eneliveno1 = 2;

			}
			//

			/*if (x <= x2[k2 - 1] && y2_[k2 - 1] == 350){
				eneliveno2++;

			}
			if (eneliveno2 >= 2){

				eneliveno2 = 2;

			}*/
			if (x >= x2[k2 - 1] && y2_[k2 - 1] == 350){
				eneliveno2++;

			}
			if (eneliveno2 >= 2){

				eneliveno2 = 2;

			}


		}





		 if (action == 3|| action==6){
			action = 4;
			PlaySound("music\\123.wav", NULL, SND_ASYNC);

			if (x <= x1[k - 1] && y1_[k - 1] == 350){
				eneliveno1++;


			}
			if (eneliveno1 >= 2){

				eneliveno1 = 2;

			}
			//
			/*if (x >= x2[k2 - 1] && y2_[k2 - 1] == 170){
				eneliveno2++;


			}
			if (eneliveno2 >= 2){

				eneliveno2 = 2;

			}*/
			if (x <= x2[k2 - 1] && y2_[k2 - 1] == 350){
				eneliveno2++;

			}
			if (eneliveno2 >= 2){

				eneliveno2 = 2;

			}

		}


		 if (action == 7 || action == 11){
			 action = 8;
			 PlaySound("music\\123.wav", NULL, SND_ASYNC);
			 if (x >= x1[k-1] && y1_[k-1] == 170){
				 eneliveno1++;


			 }
			 if (eneliveno1 >= 2){

				 eneliveno1 = 2;

			 }
			 //
			/* if (x <= x2[k2 - 1] && y2_[k2 - 1] == 170){
				 eneliveno2++;


			 }
			 if (eneliveno2 >= 2){

				 eneliveno2 = 2;

			 }*/
			 if (x >= x2[k2 - 1] && y2_[k2 - 1] == 170){
				 eneliveno2++;


			 }
			 if (eneliveno2 >= 2){

				 eneliveno2 = 2;

			 }

		 }
		 if (action == 9|| action==12){
			 action = 10;
			 PlaySound("music\\123.wav", NULL, SND_ASYNC);
			 if (x <= x1[k-1] && y1_[k-1] == 170){
				 eneliveno1++;

			 }
			 if (eneliveno1 >= 2){

				 eneliveno1 = 2;

			 }

			 //
			 /*if (x >= x2[k2 - 1] && y2_[k2 - 1] == 350){
				 eneliveno2++;

			 }
			 if (eneliveno2 >= 2){

				 eneliveno2 = 2;

			 }*/
			 if (x <= x2[k2 - 1] && y2_[k2 - 1] == 170){
				 eneliveno2++;


			 }
			 if (eneliveno2 >= 2){

				 eneliveno2 = 2;

			 }

		 }








	}


}
if (screen == 2){
	if (key == 'q')
	{
		screen = 0;
	}
}
if (screen == 3){
	if (key == 'q')
	{
		screen = 0;
	}
}
}


void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_UP)
	{
		if (action == 7){
			x = xv;
			action = 0;
		}

		else if (action == 8){
			x = xv;
			action = 1;
		}

		else if (action == 9){
			x = xv;
			action = 3;
		}

		else if (action == 10){
			x = xv;
			action = 4;
		}

		else if (action == 11){
			x = xv;
			action = 5;

		}

		else if (action == 12){
			x = xv;
			action = 6;
		}












	}

	else if (key == GLUT_KEY_LEFT)
	{
		i = 0;
		if (action == 0){
			action = 5;

		}

		if (action == 3){
			action = 0;
		}


		if (action == 7){
			action = 11;

		}

		if (action == 9){
			action = 7;
		}
	}

	else if (key == GLUT_KEY_RIGHT)
	{
		i = 0;
		if (action == 0){
			action = 3;
		}

		else if (action == 3){
			action = 6;

		}

		if (action == 7){
			action = 9;
		}

		else if (action == 9){
			action = 12;

		}
	}
	else if (key == GLUT_KEY_DOWN)
	{



		if (action == 0){
			xv = x;
			action = 7;
		}

		else if (action == 1){
			xv = x;
			action = 8;
		}

		else if (action == 3){
			xv = x;
			action = 9;
		}

		else if (action == 4){
			xv = x;
			action = 10;
		}

		else if (action == 5){
			xv = x;
			action = 11;
		}

		else if (action == 6){
			xv = x;
			action = 12;
		}

	}



}

void change(void){



	if (screen == 1 && comment==3){
		if (eneliveno1 == 2){
			b++;
			if (b >= 19){
				b = 19;
			}
		}

		//

		if (eneliveno2 == 2){
			b2++;
			if (b2 >= 19){
				b2 = 19;
			}
		}
		//
		j++;
		if (j >= 6){
			j = 0;
		}
		/*x2[0] -= 2;
		if (x2[0] <= 5){
			x2[0] = 900;
		}*/


		if (k == 1){
			x1[0]+=2;

		}
		else if (k == 2){
			x1[1] -= 2;

		}
		else if (k == 3){
			x1[2] += 2;
		}
		else if (k == 4){
			x1[3] -= 2;
		}
		/////

		if (k2 == 1){
			x2[0] -= 2;

		}
		else if (k2 == 2){
			x2[1] += 2;

		}
		else if (k2 == 3){
			x2[2] -= 2;
		}
		else if (k2 == 4){
			x2[3] += 2;
		}
		////
		if (hunterlife == 0){
			li++;
			if (li == 22){
				li= 21;
			}
		}
		else	if (action == 1){
					i++;
					if (i == 4){
						action = 0;
						i = 0;
					}
				}
				else	if (action == 4){
					i++;
					if (i == 4){
						action = 3;
						i = 0;
					}
				}
				else	if (action == 5){
					if (x > 5){
						x -= 4;
					}
					i++;
					if (i == 11){
						action = 0;
						i = 0;
					}
				}
				else	if (action == 0){
					i++;
					if (i == 30){
						action = 0;
						i = 0;
					}
				}
				if (action == 3){
					i++;
					if (i == 30){
						action = 3;
						i = 0;
					}
				}
				else	if (action == 6){
					if (x <= 800){
						x += 4;
					}
					i++;
					if (i == 11){
						action = 3;
						i = 0;
					}
				}



				else	if (action == 8){
					i++;
					if (i == 4){
						action = 7;
						i = 0;
					}
				}
				else	if (action == 10){
					i++;
					if (i == 4){
						action = 9;
						i = 0;
					}
				}
				else	if (action == 11){
					if (xv > 5){
						xv -= 4;
					}
					i++;
					if (i == 11){
						action = 7;
						i = 0;
					}
				}
				else	if (action == 7){
					i++;
					if (i == 30){
						action = 7;
						i = 0;
					}
				}
				else	if (action == 9){
					i++;
					if (i == 30){
						action = 9;
						i = 0;
					}
				}
				else	if (action == 12){
					if (xv <= 800){
						xv += 4;
					}
					i++;
					if (i == 11){
						action = 9;
						i = 0;
					}
				}

			}
		}
void change1(){
	if (screen == 1 && comment == 3){

		k = 1 + rand() % 4;
		x1[0] = 0;
		x1[1] = 900;
		x1[2] = 0;
		x1[3] = 900;
		y1_[0] = 350;
		y1_[1] = 350;
		y1_[2] = 170;
		y1_[3] = 170;
		eneliveno1 = 0;

		b = 0;
		b2 = 0;

		k2 = 1 + rand() % 4;
		x2[0] = 900;
		x2[1] = 0;
		x2[2] = 900;
		x2[3] = 0;
		y2_[0] = 350;
		y2_[1] = 170;
		y2_[2] = 170;
		y2_[3] = 350;
		eneliveno2 = 0;

	}

	}




void change2(void){
	if (comment != 10){
		comment++;
		if (comment >= 3) comment = 3;
	}
}
int main()
{

		iSetTimer(20, change);
		iSetTimer(2000, change2);
		iSetTimer(15000, change1);
	iInitialize(1050, 700, "Pirate of Bangal");
	if (music)
		PlaySound("music\\kung.wav", NULL, SND_LOOP | SND_ASYNC);

	//iStart()
	return 0;
}
