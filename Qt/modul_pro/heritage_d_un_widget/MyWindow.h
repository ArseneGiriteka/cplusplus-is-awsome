#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
#include <QMessageBox>
#include <QInputDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>


class MyWindow :public QWidget
{
    Q_OBJECT

public:
    MyWindow();
    MyWindow(int larg,int longu);
    ~MyWindow();
public slots:
    void changerLargeur(int largeur);
    void changerHauteur(int hauteur);
    void ouvrirDialogue();
    void ouvrirBoiteDialogue();
    void vaAfficherLePseudo(const QString &pseudo);
    void fontChosing();
    void colourChosing();
    void selectrDossier();
    void openingFile();
    void savingFile();

signals:
    void agrandissementMax();
    QString pseudoCree(const QString &nom);

private:
    QPushButton *m_button;
    QLCDNumber *m_lcd;
    QSlider *m_slider;
   QProgressBar *m_progressBar;
   QPushButton *m_reseterButton;
   QSlider *m_sizerSlider;
   QSlider *m_hsizerSlider;
   QPushButton *m_ouvrirDialogue;
   QPushButton *m_dilogBoxButton;
   QPushButton *m_afficheurPseudo;
   QPushButton *m_setColourBut;
   QPushButton *m_selectFile;
   QPushButton *m_openigFile;
   QPushButton *m_saveingFile;
};
#endif // MYWINDOW_H
