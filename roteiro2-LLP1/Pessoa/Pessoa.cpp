#include "Pessoa.h"

Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome){
    this->nome = nome; 
}
Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}
string Pessoa::getNome(){
    return nome;
}
string Pessoa::getTelefone(){
    return telefone;
}
string Pessoa::getEndereco(){
   return endereco.toString();
}
void Pessoa::setNome(string n){
    nome = n;
}
void Pessoa::setTelefone(string t){
    telefone = t;
}
void Pessoa::setEndereco(Endereco e){
    endereco = endereco;
}
