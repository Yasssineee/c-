#ifndef CLIENT_H
#define CLIENT_H

#include "connection.h"
#include <QString>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>

class client
{
private:
    int ID_CLIENT;
    QString NOM_CL;
    QString PRENOM_CL;
    int TEL_CL;
    QString ADRESSE_CL;
    QString GENDER;
    QString NATIONALITY;
    QString EMAIL;

public:
    client();
    client(int ID_CLIENT, QString NOM_CL, QString PRENOM_CL, int TEL_CL, QString ADRESSE_CL, QString GENDER, QString NATIONALITY, QString EMAIL)
    {
        this->ID_CLIENT = ID_CLIENT;
        this->NOM_CL = NOM_CL;
        this->PRENOM_CL = PRENOM_CL;
        this->TEL_CL = TEL_CL;
        this->ADRESSE_CL = ADRESSE_CL;
        this->GENDER = GENDER;
        this->NATIONALITY = NATIONALITY;
        this->EMAIL = EMAIL;
    }

    // Setters
    void setID_CLIENT(int id_client) { ID_CLIENT = id_client; }
    void setNom(QString nom) { NOM_CL = nom; }
    void setPrenom(QString prenom) { PRENOM_CL = prenom; }
    void setTel(int tel) { TEL_CL = tel; }
    void setAdresse(QString adresse) { ADRESSE_CL = adresse; }
    void setGender(QString gender) { GENDER = gender; }
    void setNationality(int nationality) { NATIONALITY = nationality; }
    void setEmail(QString email) { EMAIL = email; }

    // Getters
    int getID_CLIENT() { return ID_CLIENT; }
    QString getNom() { return NOM_CL; }
    QString getPrenom() { return PRENOM_CL; }
    int getTel() { return TEL_CL; }
    QString getAdresse() { return ADRESSE_CL; }
    QString getGender() { return GENDER; }
    QString getNationality() { return NATIONALITY; }
    QString getEmail() { return EMAIL; }

    bool Ajouterclient();
    QSqlQueryModel* Afficherclients();
    bool Modifierclient();
    bool Supprimerclient(const QString &ID_CLIENT);
    bool Supprimerclients();
    QSqlQueryModel *Rechercherclient(const QString &text);

};

#endif // CLIENT_H
