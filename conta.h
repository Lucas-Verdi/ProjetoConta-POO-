#pragma once
#include <iostream>
#include <string>

class conta
{
private:

	std::string Banco;
	int Agencia{ 0 };
	int NumConta{ 0 };
	std::string Titular;
	double Saldo{ 0.0 };

public:

	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	std::string GetTitular();
	int GetNumConta();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);
};