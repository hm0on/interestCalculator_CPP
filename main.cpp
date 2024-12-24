#include <iostream>

using namespace  std;

int main()
{
    // Считаем процент от числа

    setlocale(LC_ALL, "Russian");

    short count_videos_in_playlist;
    short viewed_videos;

    // Пока что я только учусь программированию на C++, так что данный код может иметь ошибки, извините, пожалуйста!)

    cout << "Приветствую тебя, уважаемый пользователь! Эта программа создана с целью легкого и быстрого подсчёта процента видео, просмотренных из курса по С++. Вы можете ее использовать ее и для других целей! :D";

    cout << "Сколько всего видео в плейлисте? Введи: ";
    cin >> count_videos_in_playlist;

    cout << "\nА сколько ты просмотрел? Введи: ";
    cin >> viewed_videos;

    cout << "Просмотрено: " << viewed_videos/(count_videos_in_playlist/100) << "%\n\n";
    system("pause");
    return 0;
}