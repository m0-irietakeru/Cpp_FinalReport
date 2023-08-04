#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;;

//�N���X(Kurasushi)���`
class Kurasushi {
public:
    string name;
    int price;
    int kcal;//�ϐ��Ƃ��āAname(���i�̖��O),price(���i�̒l�i),kcal(���i�̃J�����[)���`

    Kurasushi(string name, int price, int kcal) : name(name), price(price), kcal(kcal) {}
};


// 1000�~�K�`���������֐�
void drawgacha() {
    vector<Kurasushi> Kurasushimenu;//������i�̃��j���[���i�[����vector���`
    
    //�ȉ��̃v���O������vector(Kurasushimenu)�Ƀ��j���[���i�[
    
    //�܂��� 0�`9
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���܂���", 115, 82));
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���Ђ��܂���", 115, 85));
    Kurasushimenu.push_back(Kurasushi("�ɂݒЂ��т񂿂傤", 115, 91));
    Kurasushimenu.push_back(Kurasushi("�ɂݏn�����Ƃ�", 180, 72));
    Kurasushimenu.push_back(Kurasushi("�ɂݏn�����Ԃ蒆�Ƃ�", 180, 72));
    Kurasushimenu.push_back(Kurasushi("���I��΂��܂���", 115, 44 ));
    Kurasushimenu.push_back(Kurasushi("���I�Ђ���΂��܂���", 115, 47));
    Kurasushimenu.push_back(Kurasushi("��؂肠�Ԃ�܂���", 115, 48));
    Kurasushimenu.push_back(Kurasushi("�r���g��", 115, 83));
    Kurasushimenu.push_back(Kurasushi("�˂��܂���ɂ���", 115, 99));

    //�T�[���� 10�`16
    Kurasushimenu.push_back(Kurasushi("�T�[����", 115, 93));
    Kurasushimenu.push_back(Kurasushi("�T�[�����}��", 120, 115));
    Kurasushimenu.push_back(Kurasushi("�I�j�I���T�[����", 120, 116));
    Kurasushimenu.push_back(Kurasushi("���Ԃ�`�[�Y�T�[����", 130, 120));
    Kurasushimenu.push_back(Kurasushi("��؂�䂸���T�[����", 115, 59));
    Kurasushimenu.push_back(Kurasushi("��؂�Ƃ�T�[����", 120, 70));
    Kurasushimenu.push_back(Kurasushi("��؂�Ă��͂炷", 115, 85));

    //���� 17�`18
    Kurasushimenu.push_back(Kurasushi("�䂸������������", 115, 89));
    Kurasushimenu.push_back(Kurasushi("�����Ԑg", 115, 91));

    //���� 19�`23
    Kurasushimenu.push_back(Kurasushi("�ق��邢�����Ђ�", 115, 71));
    Kurasushimenu.push_back(Kurasushi("��t�^����", 115, 75));
    Kurasushimenu.push_back(Kurasushi("�^�����䂸��", 115, 75));
    Kurasushimenu.push_back(Kurasushi("��肢��", 115, 73));
    Kurasushimenu.push_back(Kurasushi("�����V�ɂ���", 130, 201));

    //�Ԃ� 24�`26
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���Ђ��Ԃ�", 115, 108));
    Kurasushimenu.push_back(Kurasushi("�͂܂�", 120, 118));
    Kurasushimenu.push_back(Kurasushi("��؂�͂܂�", 180, 127));

    //���� 27�`37
    Kurasushimenu.push_back(Kurasushi("����", 115, 74));
    Kurasushimenu.push_back(Kurasushi("������", 115, 78));
    Kurasushimenu.push_back(Kurasushi("�˂���������", 115, 87));
    Kurasushimenu.push_back(Kurasushi("���уA�{�J�h", 120, 118));
    Kurasushimenu.push_back(Kurasushi("���Ԃ肦�у`�[�Y", 130, 97));
    Kurasushimenu.push_back(Kurasushi("���Ԃ肦�у}���O���^����", 130, 186));
    Kurasushimenu.push_back(Kurasushi("���ѓV�ɂ���", 130, 135));
    Kurasushimenu.push_back(Kurasushi("������Ԃ��тɂ���", 130, 85));
    Kurasushimenu.push_back(Kurasushi("�g�����Ă��у}���ɂ���", 130, 139));
    Kurasushimenu.push_back(Kurasushi("�Ԃ���", 165, 46));
    Kurasushimenu.push_back(Kurasushi("�Ԃ��т䂸��", 165, 46));

    //���� 38�`39
    Kurasushimenu.push_back(Kurasushi("�����Ƃ�Y����", 115, 151));
    Kurasushimenu.push_back(Kurasushi("�k�C�����P���΂̉�������", 130, 94));

    //���͂� 40
    Kurasushimenu.push_back(Kurasushi("���͂����ߓ�ɂ���", 115, 79));

    //���Ȃ� 41�`42
    Kurasushimenu.push_back(Kurasushi("���Ȃ�", 115, 94));
    Kurasushimenu.push_back(Kurasushi("����؂芈�Y���q", 230, 64));

    //�L�� 43�`47
    Kurasushimenu.push_back(Kurasushi("�吷��L���ɂ���", 115, 79));
    Kurasushimenu.push_back(Kurasushi("�ԊL", 115, 69));
    Kurasushimenu.push_back(Kurasushi("�ԊL", 115, 68));
    Kurasushimenu.push_back(Kurasushi("����тɂ���", 230, 78));
    Kurasushimenu.push_back(Kurasushi("�����ق���", 250, 52));

    //���ꂢ 48�`49
    Kurasushimenu.push_back(Kurasushi("���ꂢ���z���߂��񂪂�Y��", 115, 84));
    Kurasushimenu.push_back(Kurasushi("��t���񂩂�", 165, 94));

    //���܂��Ă� 50
    Kurasushimenu.push_back(Kurasushi("���܂��Ă�", 115, 114));

    //���� 51
    Kurasushimenu.push_back(Kurasushi("����", 165, 85));

    //���� 52�`54
    Kurasushimenu.push_back(Kurasushi("�^����", 165, 76));
    Kurasushimenu.push_back(Kurasushi("������", 165, 71));
    Kurasushimenu.push_back(Kurasushi("��t������", 165, 71));

    //���� 55�`59
    Kurasushimenu.push_back(Kurasushi("�C�x���R�؂̑�Ƃ�", 115, 115));
    Kurasushimenu.push_back(Kurasushi("�|���ꋍ�J���r", 115, 109));
    Kurasushimenu.push_back(Kurasushi("�n���o�[�O", 115, 111));
    Kurasushimenu.push_back(Kurasushi("���Ԃ�`�[�Y���J���r", 130, 146));
    Kurasushimenu.push_back(Kurasushi("���Ԃ�`�[�Y�r�[�t�J���[", 165, 135));

    //�� 60�`61
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���^��", 230, 88));
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���䂸�Ђ��^��", 230, 91));

    //�ӂ� 62
    Kurasushimenu.push_back(Kurasushi("�ɂݏn���ӂ�", 115, 39));

    //���Ȃ� 63�`64
    Kurasushimenu.push_back(Kurasushi("�t�肽�Ă��Ȃ�", 130, 74));
    Kurasushimenu.push_back(Kurasushi("����؂肤�Ȃ�", 230, 109));
    

    // �����_���Ȑ��l�𐶐����邽�߂̗����G���W��
    random_device rd;
    mt19937 gen(rd());

    // ���j���[���i�[����vector���V���b�t������
    shuffle(Kurasushimenu.begin(), Kurasushimenu.end(), gen);

    int totalPrice = 0;
    int totalKcal = 0;
    vector<Kurasushi> selectedSushi;//�S���j���[����I�΂ꂽ���j���[���i�[����vector���`

    for (const auto& Kurasushi : Kurasushimenu) {
        if (totalPrice + Kurasushi.price <= 1000) {
            selectedSushi.push_back(Kurasushi);
            totalPrice += Kurasushi.price;
            totalKcal += Kurasushi.kcal;
        }//���v���z��1000�~�ȉ��̏ꍇ�́Avector(selectedsushi)�ɑI�΂ꂽ���j���[���i�[
        
        if (totalPrice >= 900 && totalPrice <= 1000) {
            break;
        }//���v���z��900�`1000�~�ɂȂ�����i�[���I������
    }

    // 1000�~�K�`���̌��ʂ�\��
    cout << "1000�~�K�`���̌��ʁF" << endl;
    for (const auto& sushi : selectedSushi) {
        cout << sushi.name << " - ���i�F" << sushi.price << "�~ �J�����[�F" << sushi.kcal << "kcal" << endl;
    }

    cout << "���v���z:" << totalPrice << "�~" << endl;
    cout << "���v�J�����[:" << totalKcal << "kcal" << endl;
}


int main() {
    drawgacha();
    //1000�~�K�`�������s
}