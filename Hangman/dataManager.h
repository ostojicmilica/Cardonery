#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QMainWindow>

#include <vector>

class DataManager
{
public:
    DataManager(QString dictionary);

    void charAdd(const QChar& input, bool b = true);
    void fillWordList(QString fileName);
    void getNewWord();
    QString getAttemptedLetters();
    int getNumAttempts();
    int getAttemptsLeft();
    void updateAttemptsLeft(QChar input);
    QString getWord();
    QString getDisplayWord();
    void giveUp();
    bool hasGivenUp();
    void reset();
    void getHint();
    bool hasBeenGuessed(const QChar& input);

    void resetNumAttempted();

private:
    int numAttempts, numAttemptsLeft;
    bool showWord;
    std::vector<QString> wordList;
    std::vector<QChar> attemptedChars;
    QString word;

};

#endif // DATAMANAGER_H
