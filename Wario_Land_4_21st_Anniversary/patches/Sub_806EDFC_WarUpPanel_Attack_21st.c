// @Description Sub_806EDFC_WarUpPanel_Attack_21st
// @HookAddress 0x6EE00
// @HookString  024a 9646024a 10470000 0000 8fee0608 P
// Rewritten by blanchon
// Edited by beco

enum WAR_STAT_NORMAL {
	WALK,					//歩き
	TURN,					//振り返り
	STOP,					//止まり
	JUMPB,					//ジャンプ前
	JUMP,					//ジャンプ
	SQUAT,					//しゃがみ
	SSLIP,					//しゃがみすべり
	SWALK,					//しゃがみ歩き
	SJUMP,					//しゃがみジャンプ
	STURN,					//しゃがみ振り返り
	WKBRK,					//歩き止まり
	DSBRK,					//最速走り止まり
	SLIP,					//すべり始め（坂）
	ROLLB,					//転がり前
	ROLL,					//転がり
	RJUMP,					//転がりジャンプ
	RFLIP,					//転がり後の跳ね返り
	DOKANU,					//土管上
	DOKAND,					//土管下
	MISS,					//ダメージ
	MISS2,
	HAJIK,					//敵はじく
	ATTACK,					//アタック
	DATTACK,				//最速アタック
	AJUMP,					//アタックジャンプ
	DAJUMP,					//最速アタックジャンプ
	AFLIP,					//アタック後の跳ね返り
	HIP,					//ヒップアタック（空中）
	PHIP,					//パワーヒップアタック
	HIP2,					//ヒップアタック（地面）
	PHIP2,					//パワーヒップアタック（地面）
	FUMI,					//踏んづけ跳ね
	LIFT1,					//敵持ち上げ（軽い）
	LIFT2,					//敵持ち上げ（重い）
	THROW0,					//投げ準備
	TAME,					//投げ溜め
	THROW1,					//投げ（弱）
	THROW2,					//投げ（強）
	JTHROW,					//飛び投げ
	TAMCURN,				//溜め反転
	LDMOVE,					//はしご移動
	LDSTOP,					//はしご止まり
	LDDOWN,					//はしご飛び落り
	NETMOVEY,				//金網移動Ｙ
	NETMOVEX,				//金網移動Ｘ
	NETSTOP,				//金網止まり
	NETDOWN,				//金網飛び落り
	HANERU,					//敵地震
	AWATE,					//はしご・金網落ちる
	GATEIN,					//扉入る
	GATEOUT,				//扉出る
	UPFACE,					//上向く
	TSQUAT,					//積み木用しゃがみ
	ASERI,					//あせり
	WAIT0,					//待機ポーズ
	WAIT1,					//待機ポーズ
	BARBELL0,				//バーベル０
	BARBELL1,				//バーベル１
	ATWALK,					//オート歩き
	WAIT2,					//縄跳び
	CATCH,					//捕らえる
	JCLEAR,					//空中でボス戦クリア
	CLRWAIT,				//ボス戦クリア後
	CLRTURN,				//クリア後ターン
	CLRWALK,				//クリア後歩き
	CLRKIME,				//決めポーズ
	LSTWAIT,				//宝待ち（ラスボス）
	LSTKIME,				//決めポーズ（ラスボス）
	LSTAWATE,				//慌てる（ラスボス）

	SLEEP,					//眠り
	WAKEUP,					//目覚め
	JUMPA,					//着地
	DASH,					//最速走り
	DJUMP,					//最速ジャンプ
	JFLIP,					//跳ね返り
	CLASH,					//激突
	TAKARA,					//宝箱
	RPOUSE,					//構え
	GOWALK,					//ゴー
};

enum MAP_YAKUWARI {
	YNASHI,				//00:なし
	YDAMAGE,			//01:ダメージ
	YNTOBIRA,			//02:扉
	YNWARP,				//03:触れたらワープ
	YTUBE_UL,			//04:土管↑（左）
	YTUBE_UR,			//05:土管↑（右）
	YTUBE_DL,			//06:土管↓（左）
	YTUBE_DR,			//07:土管↓（右）
	YTOMAP,				//08:触れたらTo Map(BOSS STAGE)
	YGWARP,				//09:ワープ(隠しゲーム内用)
	YYOKIYUKA,			//0A:大ボス床壊れ
	YBLOCK_NA_1,		//0B:壊B（岩）（11）→00				//--- NOMAL BLOCK ---
	YBLOCK_NA_1C,		//0C:壊B（岩）（11）→00（C）
	YBLOCK_NA_2LU,		//0D:壊B（岩）（22左上）→00
	YBLOCK_NA_2LUC,		//0E:壊B（岩）（22左上）→00（C）
	YBLOCK_NA_2,		//0F:壊B（岩）（22他）→00
	YBLOCK_NB_1,		//10:壊B（草）（11）→00
	YBLOCK_NB_1C,		//11:壊B（草）（11）→00（C）
	YBLOCK_NB_2LU,		//12:壊B（草）（22左上）→00
	YBLOCK_NB_2LUC,		//13:壊B（草）（22左上）→00（C）
	YBLOCK_NB_2,		//14:壊B（草）（22他）→00
	YBLOCK_NC_1,		//15:壊B3（11）→00
	YBLOCK_NC_1C,		//16:壊B3（11）→00（C）
	YBLOCK_NC_2LU,		//17:壊B3（22左上）→00
	YBLOCK_NC_2LUC,		//18:壊B3（22左上）→00（C）
	YBLOCK_NC_2,		//19:壊B3（22他）→00
    YBLOCK_ND_1,		//1A:壊B4（11）→00
	YBLOCK_ND_1C,		//1B:壊B4（11）→00（C）
	YBLOCK_ND_2LU,		//1C:壊B4（22左上）→00
	YBLOCK_ND_2LUC,		//1D:壊B4（22左上）→00（C）
	YBLOCK_ND_2,		//1E:壊B4（22他）→00
	YBLOCK_HA_2LU,		//1F:堅い壊B(岩)(22左上)→00
	YBLOCK_HA_2LUC,		//20:堅い壊B(岩)(22左上)→00(C)			//--- HARD BLOCK ---
	YBLOCK_HA_2,		//21:堅い壊B(岩)(22他)→00
	YBLOCK_HB_2LU,		//22:堅い壊B(草)(22左上)→00
	YBLOCK_HB_2LUC,		//23:堅い壊B(草)(22左上)→00(C)
	YBLOCK_HB_2,		//24:堅い壊B(草)(22他)→00
	YBLOCK_HC_2LU,		//25:堅い壊B(鉄)(22左上)→00
	YBLOCK_HC_2LUC,		//26:堅い壊B(鉄)(22左上)→00(C)
	YBLOCK_HC_2,		//27:堅い壊B(鉄)(22他)→00
	YBLOCK_HD_2LU,		//28:堅い壊B(木)(22左上)→00
	YBLOCK_HD_2LUC,		//29:堅い壊B(木)(22左上)→00(C)
	YBLOCK_HD_2,		//2A:堅い壊B(木)(22他)→00
	YBLOCK_FA_1,		//2B:火壊B(11)							//--- FIRE BLOCK ---
	YBLOCK_FA_1C,		//2C:火壊B(11)(C)
	YBLOCK_FA_2LU,		//2D:火壊B(22左上)
	YBLOCK_FA_2LUC,		//2E:火壊B(11左上)(C)
	YBLOCK_FA_2,		//2F:火壊B(22他)
	YBLOCK_SA_2LU,		//30:雪だるま壊れ･弱(22左上)			//--- SNOW BLOCK ---
	YBLOCK_SA_2,        //31:雪だるま壊れ･弱(22左上)
	YBLOCK_SB_2LU,      //32:雪だるま壊れ･強(22左上)
	YBLOCK_SB_2,        //33:雪だるま壊れ･強(22左上)
	YBLOCK_RA_2LU,		//34:ゲート復活壊れブロック(22左上)		//--- RE BLOCK ---
	YBLOCK_RA_2,		//35:ゲート復活壊れブロック(22他)
	YBLOCK_TA_1,		//36:敵指定壊れブロック(パターンなし)	//--- TEKI BLOCK ---
		Yrese37,		//37:
	YSW1_TOBIRA_N,		//38:S1 OFF扉 ON なし
	YSW2_TOBIRA_N,		//39:S2 OFF扉 ON なし
	YSW3_TOBIRA_N,		//3A:S3 OFF扉 ON なし
	YSW4_TOBIRA_N,		//3B:S4 OFF扉 ON なし
	YSW1_N_TOBIRA,		//3C:S1 OFFなし ON 扉
	YSW2_N_TOBIRA,		//3D:S2 OFFなし ON 扉
	YSW3_N_TOBIRA,		//3E:S3 OFFなし ON 扉
	YSW4_N_TOBIRA,		//3F:S4 OFFなし ON 扉
	YSW1N,				//40:スイッチ1本体(初期OFF)
	YSW2N,				//41:スイッチ2本体(初期OFF)
	YSW3N,				//42:スイッチ3本体(初期OFF)
	YSW4N,				//43:スイッチ4本体(初期OFF)
		Yrese44,		//44
		Yrese45,		//45
		Yrese46,		//46
		Yrese47,		//47
	YSW1_N_COIN,		//48:S1 OFF透明コイン ONコイン
	YSW1_N_RCOIN,		//49:S1 OFF透明コイン ON赤コイン
	YSW4_N_COIN,		//4A:S4 OFF	 ONコイン
	YSW4_N_RCOIN,		//4B:S4 OFF	 ON赤コイン
	YSW4_MIZU_FR_NOR,	//4C:S4 OFF水流れ→(速) ON水
	YSW4_MIZU_FL_NOR,	//4D:S4 OFF水流れ←(速) ON水
	YSW4_MIZU_FU_NOR,	//4E:S4 OFF水流れ↑(速) ON水
	YSW4_MIZU_FD_NOR,	//4F:S4 OFF水流れ↓(速) ON水
	YMIZU_NOR,			//50:水
	YMIZU_SR,			//51:水流れ→
	YMIZU_SL,			//52:水流れ←
	YMIZU_SU,			//53:水流れ↑
	YMIZU_SD,			//54:水流れ↓
	YMIZU_FR,			//55:水流れ→（速い）
	YMIZU_FL,			//56:水流れ←（速い）
	YMIZU_FU,			//57:水流れ↑（速い）
	YMIZU_FD,			//58:水流れ↓（速い）
	YBLOCK_IA_1,		//59:滑る壊れ1×1						//--- ICE BLOCK ---
	YBLOCK_IA_1C,		//5A:滑る壊れ1×1(C)
	YBLOCK_IA_2LU,		//5B:滑る壊れ2×2(左上)
	YBLOCK_IA_2LUC,		//5C:滑る壊れ2×2(左上C)
	YBLOCK_IA_2,		//5D:滑る壊れ2×2(その他)
			//5E:
			//5F:
	YWASHIBA_RST =0x60,	//60:大滑車･右へ停止
	YWASHIBA_LST,		//61:大滑車･左へ停止
	YWASHIBA_RUP,		//62:大滑車･左水平/右斜め上
	YWASHIBA_RDW,		//63:大滑車･左水平/右斜め下
	YWASHIBA_LUP,		//64:大滑車･左斜め上/右水平
	YWASHIBA_LDW,		//65:大滑車･左斜め下/右水平
	YWASHIBA_RST2,		//66:大滑車･高得点/右へ停止
	YWASHIBA_LST2,		//67:大滑車･高得点/左へ停止
	YSLIP,				//68:滑る
	YFIRE,				//69:炎パネル
	YBELT_L,			//6A:ベルトコンベア←左
	YBELT_R,			//6B:ベルトコンベア→右
			//6C:
			//6D:
			//6E:
			//6F:
	YCOIN_NOR =0x70,	//70:コイン→00
			//71:
	YCOIN_RED =0x72,	//72:赤コイン→00
			//73:
	YKAIFUKU_A =0x74,	//74:ハート1
	YKAIFUKU_B,			//75:ハート3
	YKAIFUKU_C,			//76:ハート5
			//77:
			//78:
	YHASHIGO_M =0x79,	//79:はしご
	YHASHIGO_U,			//7A:はしご上
	YAMI,				//7B:アミ
	YHIKARI,			//7C:光り(ゾンビ用)
	YTUBUEND,			//7D:つぶれもどし
	YDAMAGE_L,			//7E:パネルの右から指定ﾄﾞｯﾄにダメージ
	YDAMAGE_R,			//7F:パネルの左から指定ﾄﾞｯﾄにダメージ
	YDAMAGE_U,			//80:パネルの下から指定ﾄﾞｯﾄにダメージ
	YDAMAGE_D,			//81:パネルの上から指定ﾄﾞｯﾄにダメージ
			//82:
			//83:
	YDOMINO_R4 =0x84,	//84:ドミノ右へ4パネル(40F		84:ドミノ右へ4パネル
	YDOMINO_L4,			//85:ドミノ左へ4パネル(40F		85:ドミノ左へ4パネル
	YDOMINO_R5D1,		//86:ドミノ右へ5,下へ1(50F		86:ドミノ右へ5,下へ1
	YDOMINO_L5D1,		//87:ドミノ左へ5,下へ1(50F		87:ドミノ左へ5,下へ1
	YDOMINO_R5U1,		//88:ドミノ右へ5,上へ1(50F		88:ドミノ右へ5,上へ1
	YDOMINO_L5U1,		//89:ドミノ左へ5,上へ1(50F		89:ドミノ左へ5,上へ1
	YDOMINO_R3D3,		//8A:ドミノ右へ3,下へ3(60F		8A:ドミノ左へ1,下へ3
	YDOMINO_L3D3,		//8B:ドミノ左へ3,下へ3(60F		8B:ドミノ右へ1,下へ3
	YDOMINO_R3U3,		//8C:ドミノ右へ3,上へ3(60F		8C:ドミノ左へ1,上へ3
	YDOMINO_L3U3,		//8D:ドミノ左へ3,上へ3(60F		8D:ドミノ右へ1,上へ3
	YDOMINO_STP ,		//8E:ドミノストップ				8E:ドミノストップ
			//8F:
	YSW1_DAMAGE_N=0x90,	//90:S1 OFFダメージONなし
	YSW2_DAMAGE_N,		//91:S2 OFFダメージONなし
	YSW3_DAMAGE_N,		//92:S3 OFFダメージONなし
	YSW4_DAMAGE_N,		//93:S4 OFFダメージONなし
	YSW1_N_DAMAGE,		//94:S1 OFFなしONダメージ
	YSW2_N_DAMAGE,		//95:S2 OFFなしONダメージ
	YSW3_N_DAMAGE,		//96:S3 OFFなしONダメージ
	YSW4_N_DAMAGE,		//97:S4 OFFなしONダメージ
	YSW1_HASHIGOM_N,	//98:S1 OFFはしご ON なし
	YSW1_HASHIGOU_N,	//99:S1 OFFはしご ON なし
	YSW1_N_HASHIGOM,	//9A:S1 OFFなし ON はしご
	YSW1_N_HASHIGOU,	//9B:S1 OFFなし ON はしご
	YSW2_DAMAGE_U_N,	//9C:S2 OFF下4ドットダメージONなし
			//9D:
			//9E:
			//9F:
	YSETUP_KEY_PRI0 = 0xA0,	//A0:SETUP役割	カギOBJ優先=0
};

#define CurrentTileset_EventIdTablePointer (*(volatile unsigned int*) 0x30031FC)
#define CurrentRoomHeader_TilesetId (*(volatile unsigned char*) 0x3000074)

#define CurrentRoomHeader_Layer0MappingType (*(volatile unsigned char*) 0x3000075)
#define CurrentRoomHeader_Layer1MappingType (*(volatile unsigned char*) 0x3000076)
#define CurrentRoomHeader_Layer2MappingType (*(volatile unsigned char*) 0x3000077)
#define CurrentRoomHeader_Layer3MappingType (*(volatile unsigned char*) 0x3000078)

#define CurrentRoomHeader_LayerPriorityALphaParam (*(volatile unsigned char*) 0x300008e)

#define Layer0_DecompressedDataPointer (*(volatile unsigned int*) 0x3000054)
#define Layer0_Width (*(volatile unsigned short*) 0x3000058)
#define Layer0_Height (*(volatile unsigned short*) 0x300005a)

#define Layer1_DecompressedDataPointer (*(volatile unsigned int*) 0x300005c)
#define Layer1_Width (*(volatile unsigned short*) 0x3000060)
#define Layer1_Height (*(volatile unsigned short*) 0x3000062)

#define Layer2_DecompressedDataPointer (*(volatile unsigned int*) 0x3000064)
#define Layer2_Width (*(volatile unsigned short*) 0x3000068)
#define Layer2_Height (*(volatile unsigned short*) 0x300006a)

#define MapSwitch1 (*(volatile unsigned char*) 0x300002f)
#define MapSwitch2 (*(volatile unsigned char*) 0x3000030)
#define MapSwitch3 (*(volatile unsigned char*) 0x3000031)
#define MapSwitch4 (*(volatile unsigned char*) 0x3000032) // frog blocks, etc (see WL4 RAM record)

#define PanelPartWork_Broken_Main ((int (*)(int)) 0x806EE99)
#define PanelPartWork_Switch_Main ((int (*)(int,int)) 0x806F425)
#define PanelPartWork_Broken_Destroy ((int (*)(int,int,int)) 0x806F059)

#define Sub_8001DA4_m4aSongNumStart ((void (*)(int)) 0x8001DA5)
#define Sub_801E328_EnemyChildSet ((void (*)(char, char, char, int, int)) 0x801E329)
#define Sub_806ACA0_BgShakingInit ((void (*)(unsigned char, char)) 0x806ACA1)
#define Sub_806F2AC_BgBrokenBlock_ObjSet ((void (*)(unsigned int*)) 0x806F2AD)
#define Sub_806FFB0_Panel_PutBG_Save ((int (*)(int,int,int)) 0x806FFB1)
#define Sub_8070098_Panel_PutBG_Only ((int (*)(int,int,int)) 0x8070099)
#define Sub_80766E8_TOptObjSet ((void (*)(int,int,unsigned char)) 0x80766E9)

#define ucGmScore_Tflg (*(volatile unsigned char*) 0x3000C02)
#define Wario_ucReact (*(volatile unsigned char*) 0x3001898)

#define WHit ((volatile struct WHitdef*) 0x3001918)

struct WHitdef {
short usMukiX;
short usMukiY;
char ucFront;
char ucBack;
short sDX;
char ucSide;
char ucHead;
char ucYuka;
char ucSPow;
char ucHPow;
char ucYPow;
char ucWSide;
char ucWHead;
char ucWYuka;
char ucPlace;
char ucSStop;
char ucHStop;
char ucYStop;
char unused_0;
char unused_1;
char unused_2;
};

struct BgBDdef { // found in /src/gmap/Wario_bg_atari.o (gigaleak)
short xp;
short yp;
short part;
char dir;
char coin;
char hit;
char obop;
char SE;
//char undefined;
};

int Sub_806EDFC_WarUpPanel_Attack_21st(unsigned short Ypos,unsigned short Xpos)
{
  char v2; // r0
  struct BgBDdef pDestroy;
  //unsigned int pDestroy; // [sp+0h] [bp-14h]
  // unsigned int v5; // [sp+2h] [bp-12h]
  // int v6; // [sp+4h] [bp-10h]
  // char v7; // [sp+6h] [bp-Eh]
  // char v8; // [sp+7h] [bp-Dh]
  // char v9; // [sp+8h] [bp-Ch]
  // char v10; // [sp+9h] [bp-Bh]
  // char v11; // [sp+Ah] [bp-Ah]

  pDestroy.xp = (Xpos << 16) >> 22;
  pDestroy.yp = (Ypos << 16) >> 22;
  pDestroy.part = *(unsigned short*)(2 * *(unsigned short*)(2 * (pDestroy.yp * Layer1_Width + pDestroy.xp) + Layer1_DecompressedDataPointer) \
		+ CurrentTileset_EventIdTablePointer);
  pDestroy.coin = 0;
  pDestroy.obop = 0;
  pDestroy.SE = 0;
  pDestroy.hit = WHit[0].ucHPow;
  pDestroy.dir = 3;
  if ( Wario_ucReact == SWALK )
    pDestroy.dir = 4;		// Custom Code
	switch (pDestroy.part)
	{
		// 10 coins block
		case 0xB0:
        Sub_801E328_EnemyChildSet(0x81, 0, 0, Ypos, Xpos);
				Sub_806FFB0_Panel_PutBG_Save(0x7, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(228);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1; // Prevents "corner-boost"
		// 50 coins block
		case 0xB1:
        Sub_801E328_EnemyChildSet(0x82, 0, 0, Ypos, Xpos);
				Sub_806FFB0_Panel_PutBG_Save(0x7, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(228);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1;
		// 100 coins block
		case 0xB2:
        Sub_801E328_EnemyChildSet(0x83, 0, 0, Ypos, Xpos);
				Sub_806FFB0_Panel_PutBG_Save(0x7, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(228);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1;
		// 500 coins block
		case 0xB3:
        Sub_801E328_EnemyChildSet(0x84, 0, 0, Ypos, Xpos);
				Sub_806FFB0_Panel_PutBG_Save(0x7, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(228);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1;
		// 21st Anniversary
		case 0xC0:
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(253);
				return 1;
		case 0xC1:
				--pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(253);
				return 1;
		case 0xC2:
				--pDestroy.xp;
				--pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				--pDestroy.yp;
				Sub_806F2AC_BgBrokenBlock_ObjSet(&pDestroy);
				Sub_806FFB0_Panel_PutBG_Save(0, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(253);
				return 1;
		case 0xC3:
        Sub_801E328_EnemyChildSet(0x85, 0, 0, Ypos-96, Xpos+8);
				--pDestroy.yp;
				Sub_806FFB0_Panel_PutBG_Save(0xB5, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806FFB0_Panel_PutBG_Save(0xB6, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806FFB0_Panel_PutBG_Save(0xBE, pDestroy.yp, pDestroy.xp);
				--pDestroy.xp;
				Sub_806FFB0_Panel_PutBG_Save(0xBD, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(229);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1;
		case 0xC4:
        Sub_801E328_EnemyChildSet(0x85, 0, 0, Ypos-96, Xpos-8);
				--pDestroy.yp;
				Sub_806FFB0_Panel_PutBG_Save(0xB6, pDestroy.yp, pDestroy.xp);
				--pDestroy.xp;
				Sub_806FFB0_Panel_PutBG_Save(0xB5, pDestroy.yp, pDestroy.xp);
				++pDestroy.yp;
				Sub_806FFB0_Panel_PutBG_Save(0xBD, pDestroy.yp, pDestroy.xp);
				++pDestroy.xp;
				Sub_806FFB0_Panel_PutBG_Save(0xBE, pDestroy.yp, pDestroy.xp);
				Sub_8001DA4_m4aSongNumStart(229);
				Sub_806ACA0_BgShakingInit(0x14,0);
				return 1;
		default:
				break;
	}
  v2 = PanelPartWork_Broken_Main(&pDestroy);
  if ( v2 == 1 )
    goto LABEL_11;
  if ( v2 == 2 )
    return 128;
  if ( PanelPartWork_Switch_Main(&pDestroy, 1u) )
LABEL_11:
    v2 = 1;
  else
    v2 = 0;
  return v2;
}
