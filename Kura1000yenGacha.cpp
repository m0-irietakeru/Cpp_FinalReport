#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;;

//クラス(Kurasushi)を定義
class Kurasushi {
public:
    string name;
    int price;
    int kcal;//変数として、name(寿司の名前),price(寿司の値段),kcal(寿司のカロリー)を定義

    Kurasushi(string name, int price, int kcal) : name(name), price(price), kcal(kcal) {}
};


// 1000円ガチャを引く関数
void drawgacha() {
    vector<Kurasushi> Kurasushimenu;//くら寿司のメニューを格納するvectorを定義
    
    //以下のプログラムでvector(Kurasushimenu)にメニューを格納
    
    //まぐろ 0～9
    Kurasushimenu.push_back(Kurasushi("極み熟成まぐろ", 115, 82));
    Kurasushimenu.push_back(Kurasushi("極み熟成漬けまぐろ", 115, 85));
    Kurasushimenu.push_back(Kurasushi("極み漬けびんちょう", 115, 91));
    Kurasushimenu.push_back(Kurasushi("極み熟成中とろ", 180, 72));
    Kurasushimenu.push_back(Kurasushi("極み熟成あぶり中とろ", 180, 72));
    Kurasushimenu.push_back(Kurasushi("特選大ばちまぐろ", 115, 44 ));
    Kurasushimenu.push_back(Kurasushi("特選漬け大ばちまぐろ", 115, 47));
    Kurasushimenu.push_back(Kurasushi("大切りあぶりまぐろ", 115, 48));
    Kurasushimenu.push_back(Kurasushi("ビントロ", 115, 83));
    Kurasushimenu.push_back(Kurasushi("ねぎまぐろにぎり", 115, 99));

    //サーモン 10～16
    Kurasushimenu.push_back(Kurasushi("サーモン", 115, 93));
    Kurasushimenu.push_back(Kurasushi("サーモンマヨ", 120, 115));
    Kurasushimenu.push_back(Kurasushi("オニオンサーモン", 120, 116));
    Kurasushimenu.push_back(Kurasushi("あぶりチーズサーモン", 130, 120));
    Kurasushimenu.push_back(Kurasushi("大切りゆず塩サーモン", 115, 59));
    Kurasushimenu.push_back(Kurasushi("大切りとろサーモン", 120, 70));
    Kurasushimenu.push_back(Kurasushi("大切り焼きはらす", 115, 85));

    //かつお 17～18
    Kurasushimenu.push_back(Kurasushi("ゆず塩かつおたたき", 115, 89));
    Kurasushimenu.push_back(Kurasushi("かつお赤身", 115, 91));

    //いか 19～23
    Kurasushimenu.push_back(Kurasushi("ほたるいか沖漬け", 115, 71));
    Kurasushimenu.push_back(Kurasushi("大葉真いか", 115, 75));
    Kurasushimenu.push_back(Kurasushi("真いかゆず塩", 115, 75));
    Kurasushimenu.push_back(Kurasushi("やりいか", 115, 73));
    Kurasushimenu.push_back(Kurasushi("いか天にぎり", 130, 201));

    //ぶり 24～26
    Kurasushimenu.push_back(Kurasushi("極み熟成漬けぶり", 115, 108));
    Kurasushimenu.push_back(Kurasushi("はまち", 120, 118));
    Kurasushimenu.push_back(Kurasushi("大切りはまち", 180, 127));

    //えび 27～37
    Kurasushimenu.push_back(Kurasushi("えび", 115, 74));
    Kurasushimenu.push_back(Kurasushi("生えび", 115, 78));
    Kurasushimenu.push_back(Kurasushi("ねぎ塩生えび", 115, 87));
    Kurasushimenu.push_back(Kurasushi("えびアボカド", 120, 118));
    Kurasushimenu.push_back(Kurasushi("あぶりえびチーズ", 130, 97));
    Kurasushimenu.push_back(Kurasushi("あぶりえびマヨグラタン風", 130, 186));
    Kurasushimenu.push_back(Kurasushi("えび天にぎり", 130, 135));
    Kurasushimenu.push_back(Kurasushi("塩だれ赤えびにぎり", 130, 85));
    Kurasushimenu.push_back(Kurasushi("揚げたてえびマヨにぎり", 130, 139));
    Kurasushimenu.push_back(Kurasushi("赤えび", 165, 46));
    Kurasushimenu.push_back(Kurasushi("赤えびゆず塩", 165, 46));

    //さば 38～39
    Kurasushimenu.push_back(Kurasushi("肉厚とろ〆さば", 115, 151));
    Kurasushimenu.push_back(Kurasushi("北海道羅臼さばの塩たたき", 130, 94));

    //こはだ 40
    Kurasushimenu.push_back(Kurasushi("こはだしめ縄にぎり", 115, 79));

    //あなご 41～42
    Kurasushimenu.push_back(Kurasushi("あなご", 115, 94));
    Kurasushimenu.push_back(Kurasushi("特大切り活〆穴子", 230, 64));

    //貝類 43～47
    Kurasushimenu.push_back(Kurasushi("大盛り貝柱にぎり", 115, 79));
    Kurasushimenu.push_back(Kurasushi("つぶ貝", 115, 69));
    Kurasushimenu.push_back(Kurasushi("赤貝", 115, 68));
    Kurasushimenu.push_back(Kurasushi("あわびにぎり", 230, 78));
    Kurasushimenu.push_back(Kurasushi("肉厚ほたて", 250, 52));

    //かれい 48～49
    Kurasushimenu.push_back(Kurasushi("かれい昆布締めえんがわ添え", 115, 84));
    Kurasushimenu.push_back(Kurasushi("大葉えんかわ", 165, 94));

    //たまご焼き 50
    Kurasushimenu.push_back(Kurasushi("たまご焼き", 115, 114));

    //あじ 51
    Kurasushimenu.push_back(Kurasushi("あじ", 165, 85));

    //たこ 52～54
    Kurasushimenu.push_back(Kurasushi("真たこ", 165, 76));
    Kurasushimenu.push_back(Kurasushi("生たこ", 165, 71));
    Kurasushimenu.push_back(Kurasushi("大葉生たこ", 165, 71));

    //肉類 55～59
    Kurasushimenu.push_back(Kurasushi("イベリコ豚の大とろ", 115, 115));
    Kurasushimenu.push_back(Kurasushi("旨だれ牛カルビ", 115, 109));
    Kurasushimenu.push_back(Kurasushi("ハンバーグ", 115, 111));
    Kurasushimenu.push_back(Kurasushi("あぶりチーズ牛カルビ", 130, 146));
    Kurasushimenu.push_back(Kurasushi("あぶりチーズビーフカレー", 165, 135));

    //鯛 60～61
    Kurasushimenu.push_back(Kurasushi("極み熟成真鯛", 230, 88));
    Kurasushimenu.push_back(Kurasushi("極み熟成ゆず漬け真鯛", 230, 91));

    //ふぐ 62
    Kurasushimenu.push_back(Kurasushi("極み熟成ふぐ", 115, 39));

    //うなぎ 63～64
    Kurasushimenu.push_back(Kurasushi("炙りたてうなぎ", 130, 74));
    Kurasushimenu.push_back(Kurasushi("特大切りうなぎ", 230, 109));
    

    // ランダムな数値を生成するための乱数エンジン
    random_device rd;
    mt19937 gen(rd());

    // メニューを格納したvectorをシャッフルする
    shuffle(Kurasushimenu.begin(), Kurasushimenu.end(), gen);

    int totalPrice = 0;
    int totalKcal = 0;
    vector<Kurasushi> selectedSushi;//全メニューから選ばれたメニューを格納するvectorを定義

    for (const auto& Kurasushi : Kurasushimenu) {
        if (totalPrice + Kurasushi.price <= 1000) {
            selectedSushi.push_back(Kurasushi);
            totalPrice += Kurasushi.price;
            totalKcal += Kurasushi.kcal;
        }//合計金額が1000円以下の場合は、vector(selectedsushi)に選ばれたメニューを格納
        
        if (totalPrice >= 900 && totalPrice <= 1000) {
            break;
        }//合計金額が900～1000円になったら格納を終了する
    }

    // 1000円ガチャの結果を表示
    cout << "1000円ガチャの結果：" << endl;
    for (const auto& sushi : selectedSushi) {
        cout << sushi.name << " - 価格：" << sushi.price << "円 カロリー：" << sushi.kcal << "kcal" << endl;
    }

    cout << "合計金額:" << totalPrice << "円" << endl;
    cout << "合計カロリー:" << totalKcal << "kcal" << endl;
}


int main() {
    drawgacha();
    //1000円ガチャを実行
}