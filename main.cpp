#include <iostream>
#include <vector>
#include <map>
#include <random>

#define PAIRS 3


//---BAGIAN TAHAP TRASNKRIPSI---
char check_gen_dna(char base){
    switch(base){
        case 'A' : return 'T';
        case 'T' : return 'A';
        case 'G' : return 'C';
        case 'C' : return 'G';
        default : return 'O';

    }
    
}

char check_gen_rna(char base){
    switch(base){
        case 'A' : return 'U';
        case 'U' : return 'A';
        case 'C' : return 'G';
        case 'G' : return 'C';
        default : return 'O';

    }
    
}
// ^^^^
//---TRANSKRIPSI END---


int main(){
    std::vector<char> dna = {'G', 'A', 'T', 'C', 'G', 'A', 'T', 'C'};
    std::vector<char> rna = {'G', 'U', 'U', 'C', 'G', 'A', 'U', 'C'};
       int count; 
       int ribs = dna.size();


    std::random_device rd;

       std::mt19937 gen(rd());
       size_t mdna = (size_t)dna.size();
       std::uniform_int_distribution<size_t> dis(0, mdna - 1);
        size_t mrna = (size_t)rna.size();
       std::uniform_int_distribution<size_t> dis_rna(0, mrna - 1);


       size_t random_index = dis(gen);
       char random_dna = dna[random_index];

        size_t random_index_rna = dis_rna(gen);
       char random_rna = dna[random_index_rna];

       for(int i = 0; i < ribs; i++){ 
           for(int j = 0 ; j < PAIRS; j++){
               std::cout <<random_dna<<" ";
               std::cout<<"this is dna: " <<check_gen_dna(random_dna)<<" ";
            std::cout <<random_rna<<" ";
               std::cout<<"this is rna: " <<check_gen_rna(random_rna)<<" ";
        }
            std::cout<<"\n";
       }


    return 0;
}