#ifndef HTMLMANAGER_HPP
#define HTMLMANAGER_HPP

#include <QFile>
#include <QTextStream>

#include "Config.hpp"
#include "Economy/Ticket.hpp"
#include "Economy/PaymentDistribution.hpp"
class HtmlManager
{
private:
    Config *config;

    Ticket *ticket;
    QFile file;
    QTextStream output;

    void head();
    void startTable();
    void listOfExpenses();
    void totalCost();
    void individualExpenses();
    void payers();
    void paymentDistribution();
    void closeTable();
    void footer();

    bool thereArePayers();

public:
    HtmlManager(Ticket *ticket, QString fullPath, Config *config);

    bool exportToHtml();
};

#endif // HTMLMANAGER_HPP
