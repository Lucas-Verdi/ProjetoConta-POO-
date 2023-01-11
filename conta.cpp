#include "conta.h"
#include <iostream>
#include <string>

bool conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		Saldo = Saldo - Valor;
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void conta::Depositar(double Valor)
{
	Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com sucesso\n";
}

void conta::Transferir(conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente\n";
	}
	else
	{
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferencia Realizada com Sucesso\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";

	}
}

double conta::ConsultarSaldo()
{
	return Saldo;
}

std::string conta::GetBanco()
{
	return Banco;
}

int conta::GetAgencia()
{
	return Agencia;
}

std::string conta::GetTitular()
{
	return Titular;
}

int conta::GetNumConta()
{
	return NumConta;
}

void conta::SetBanco(std::string Banco)
{
	this->Banco = Banco;
}

void conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

void conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}



