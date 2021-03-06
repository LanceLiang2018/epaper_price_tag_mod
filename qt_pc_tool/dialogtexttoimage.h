#ifndef DIALOGTEXTTOIMAGE_H
#define DIALOGTEXTTOIMAGE_H

#include <QDialog>

#include <QImage>

namespace Ui {
class DialogTextToImage;
}

class DialogTextToImage : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTextToImage(QWidget *parent = nullptr);
    ~DialogTextToImage();

private slots:
    void on_pushButtonPreview_clicked();

    void on_pushButtonSaveBin_clicked();

    void on_pushButtonBatchGen_clicked();

private:
  //  void saveBin(QString &fileName);
    void processBatchTaskFile(const QString &taskFileName);
    void generateBinFromTaskLine(const QString &parentPath, const QString &line);

private:
    Ui::DialogTextToImage *ui;
    QImage preViewImage;
};

#endif // DIALOGTEXTTOIMAGE_H
