#ifndef REGISTRATIONDIALOG_H
#define REGISTRATIONDIALOG_H

#include "DialogIncludes.h"
#include "MainIncludes.h"

class RegistrationDialog : public QDialog
{
    Q_OBJECT

    QPointer<QLineEdit> loginEdit;
    QPointer<QLineEdit> passwordEdit;
    QPointer<QLineEdit> passwordRepeatEdit;
    QPointer<QLineEdit> firstNameEdit;
    QPointer<QLineEdit> middleNameEdit;
    QPointer<QLineEdit> lastNameEdit;
    QPointer<QLineEdit> seriesEdit;
    QPointer<QLineEdit> numberEdit;
    QPointer<QTextEdit> organizeEdit;
    QPointer<QTextEdit> registrationEdit;

public:
    explicit RegistrationDialog(QPointer<QWidget> parent = nullptr);

private:
    void init();
    bool isEmptyFields();
    bool isEqualPasswords();

private slots:
    void slotAccept();
};

#endif // REGISTRATIONDIALOG_H
