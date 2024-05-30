//
//  Manipulateurs.cpp
//  TP05-GL
//
//  Created by Abdoullatif Omarjee on 30/05/2024.
//

#include "Manipulateurs.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<typename T>
void affiche_vecteur(vector<T> vec){
    for(int i=0;i<vec.size();++i){
        cout << vec[i] << " " ;
    }
    cout << endl;
}

void affiche(vector<int>const vecc){
    if(vecc.size()!=0){
        for(int i=0;i<vecc.size();++i){
            cout << vecc[i] << " "  ;
        }
    }
    else{
        cout << " ton vecteur est vide ohhhh" << endl;
    }
    cout << endl;
}
void affiche(list<double>const listt){
    for(const auto& elem : listt){
        cout << elem << " " ;
    }
    cout << endl;
}

template<typename T>
void affiche_liste(list<T> liste){
    for(const auto& elem : liste){
        cout << elem << " " ;
    }
    cout << endl;
}

void efface(vector<int>& vecc, int i){
    auto a=find(vecc.begin(),vecc.end(),i);
    if(a!=vecc.end()){
        vecc.erase(a);
    }
}
template<typename T>
void efface_vector(vector<T>& vec, T elem){
    T a=find(vec.begin(),vec.end(),elem);
    if(a!=vec.end()){
        vec.erase(a);
    }
    
}

void efface(list<double>& listt, double a){
    auto it=listt.begin();
    while(it!=listt.end()){
        if(*it==a){ it=listt.erase(it);}
        else{++it;}
    }
    ++it;
}

template <typename T>
void efface_liste(list<T>& liste , T elem){
    auto a = liste.begin();
    while(a!=liste.end()){
        if(*a==elem){ a=liste.erase(a);}
        ++a;
    }
    ++a;
}

bool est_pair(int b){
    if(b%2==0){ return true;}
    else{return false;}
}
void effacepairs(vector<int>& vecc){
}

template <typename conteneur>
void affiche_gen(conteneur& cont){
    auto a=cont.begin();
    while(a!=cont.end()){
        cout << *a << " " ;
        ++a;
    }
    cout << endl;
}

template<typename conteneur ,typename T>
void efface_gen(conteneur& cont, T elem){
    auto a=cont.begin();
    while(a!=cont.end()){
        if(a==elem){cont.erase(a);}
        ++a;
    }
}
