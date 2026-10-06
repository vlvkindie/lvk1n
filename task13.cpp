#include <iostream>
#include <string>
int main(){
    std::string hundreds[] = {"","сто","двести","триста","четыреста","пятьсот","шестьсот","семьсот","восемьсот","девятьсот"};
    std::string teens[] = {"десять","одиннадцать","двенадцать","тринадцать","четырнадцать","пятнадцать","шестнадцать","семнадцать","восемнадцать","девятнадцать"};
    std::string tens[] = {"","","двадцать","трмдцать","сорок","пятьдесят","шестьдесят","семьдесят","восемьдесят","девяносто"};
    std::string units[] = {"","один","два","три","четыре","пять","шесть","семь","восемь","девять"};

    int n;
    std::cin >> n;

    int h = n / 100;
    int last2= n % 100;

    std::string result = hundreds[h];

    if (last2 >= 10 && last2 < 20){
        result += " " + teens[last2-10];
    } else{
        int t = last2 / 10;
        int u = last2 % 10;
        if (!tens[t].empty()) result += " " + tens[t];
        if (!units[u].empty()) result += " " + units[u];
    }
    std::cout << result;
    return 0;
}