#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "";
    idade = 0;
    telefone = 0;
}
Pessoa::Pessoa(string nom){
    nome = nom;
}
Pessoa::Pessoa(string nom, int id, int tel){
    nome = nom;
    idade = id;
    telefone = tel;
}
void Pessoa::setNome(string nom){
    nome = nom;
}
void Pessoa::setIdade(int id){
    idade = id;
}
void Pessoa::setTelefone(int tel){
    telefone = tel;
}
string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
int Pessoa::getTelefone(){
    return telefone;
}
