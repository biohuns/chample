/**
 * Two-Phaseアルゴリズムのドライバー (C版)
 * http://kociemba.org/cube.htm
 * Version: 0.0.1
 *
 * 変更点(0.0.1):
 *     java1.4.4を移植しただけ
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "kttools.h"
#include "search.h"
#include "coordcube.h"
#include "cubiecube.h"
#include "scramble.h"

/**
 * メイン関数
 * コマンドライン引数(options):
 *   -n  スクランブルの数(1-10,000)
 *   -t  スクランブルの種類(0:通常 1:コーナーのみ 2:エッジのみ 3:パリティ有り 4:パリティ無し)
 *   -d  スクランブルの長さの最大値
 *   -l  タイムアウト値(秒)
 *   (-s  オプション有りで phase1/2 のセパレータ有り) 今のところ無し
 *   -v  オプション有りで 冗長出力
 *   -f  facelets文字列指定
 *   (-th スレッド数(1-4)) C版では無し
 *   -sd シード値(省略可)
 */
int main(int argc, char *argv[])
{
	char facelets[128];
	char sequence[256];
	scramble(facelets, sequence);

	printf("%s\n", facelets);
	printf("%s\n", sequence);
	return 0;
}
