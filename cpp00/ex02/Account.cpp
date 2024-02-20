// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Sat Dec 23 19:43:15 2023                      //
//                                                                            //
//                Made by : fgras-ca                                          //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

// Initialisation des variables statiques
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructeur : Initialise un compte avec un dépôt initial et met à jour les informations globales
Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++; // Assignation d'un index unique au compte et incrémentation du nombre total de comptes
	_totalAmount += _amount;       // Mise à jour du montant total détenu par tous les comptes
	_displayTimestamp();           // Affichage de l'horodatage de la création du compte
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n"; // Enregistrement de la création du compte
}

// Destructeur : Met à jour les informations globales lors de la fermeture d'un compte
Account::~Account()
{
	_nbAccounts--;                // Décrémentation du nombre total de comptes
	_totalAmount -= _amount;      // Mise à jour du montant total détenu par tous les comptes
	_displayTimestamp();          // Affichage de l'horodatage de la fermeture du compte
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n"; // Enregistrement de la fermeture du compte
}

// Dépôts : Ajoute un montant au compte et met à jour les informations globales
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();          // Affichage de l'horodatage de l'opération
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;           // Mise à jour du montant dans le compte
	_nbDeposits++;                // Incrémentation du nombre de dépôts pour ce compte
	_totalAmount += deposit;      // Mise à jour du montant total détenu par tous les comptes
	_totalNbDeposits++;           // Incrémentation du nombre total de dépôts effectués sur tous les comptes
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n"; // Enregistrement de l'opération de dépôt
}

// Retraits : Diminue le montant du compte si possible et met à jour les informations globales
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();          // Affichage de l'horodatage de l'opération
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{   // Vérification si le retrait est possible (fonds suffisants)
		std::cout << "refused\n"; // Enregistrement d'un retrait refusé
		return (false);
	}
	_amount -= withdrawal;        // Mise à jour du montant dans le compte
	_nbWithdrawals++;             // Incrémentation du nombre de retraits pour ce compte
	_totalAmount -= withdrawal;   // Mise à jour du montant total détenu par tous les comptes
	_totalNbWithdrawals++;        // Incrémentation du nombre total de retraits effectués sur tous les comptes
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n"; // Enregistrement de l'opération de retrait
	return (true);
}

// Vérifier le montant : Retourne le montant actuel du compte
int	Account::checkAmount() const
{
	return (_amount);
}

// Afficher le statut du compte : Affiche les informations détaillées sur le compte
void Account::displayStatus() const
{
	_displayTimestamp();          // Affichage de l'horodatage de l'opération
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n"; // Enregistrement de l'état actuel du compte
}

// Retourner le nombre total de comptes
int	Account::getNbAccounts() { return _nbAccounts; }

// Retourner le montant total détenu par tous les comptes
int	Account::getTotalAmount() { return _totalAmount; }

// Retourner le nombre total de dépôts effectués sur tous les comptes
int	Account::getNbDeposits() { return _totalNbDeposits; }

// Retourner le nombre total de retraits effectués sur tous les comptes
int	Account::getNbWithdrawals() { return _totalNbWithdrawals; }

// Afficher les informations globales de tous les comptes
void	Account::displayAccountsInfos()
{
	_displayTimestamp();          // Affichage de l'horodatage de l'opération
	std::cout	<< "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n"; // Enregistrement des informations globales
}

void Account::_displayTimestamp()
{
// Obtenir l'heure et la date actuelles
	std::time_t now = std::time(nullptr);
	std::tm *ltm = std::localtime(&now);

	std::cout	<< "["
				<< 1900 + ltm->tm_year // Ajouter 1900 pour obtenir l'année complète
				<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon // Mois (0-11 donc +1 pour 1-12)
				<< std::setw(2) << std::setfill('0') << ltm->tm_mday // Jour (1-31)
				<< "_"
				<< std::setw(2) << std::setfill('0') << ltm->tm_hour // Heures (0-23)
				<< std::setw(2) << std::setfill('0') << ltm->tm_min  // Minutes (0-59)
				<< std::setw(2) << std::setfill('0') << ltm->tm_sec  // Secondes (0-59)
				<< "] ";
}
