
#include <iostream>


int main()
{
    double Dhp, Shp, Sdamage, AllDamageFS, QSpearmen;
    int Ddamage;


    std::cout << "Dragon HP and damage: ";
    std::cin >> Dhp >> Ddamage;
    std::cout << "Spearman HP, damage and quantity: ";
    std::cin >> Shp >> Sdamage >> QSpearmen;


    do
    {
        AllDamageFS = ceil(QSpearmen) * Sdamage;
        Dhp -= AllDamageFS;
        std::cout << "\nSpearmen attack (damage " << AllDamageFS << ") - the dragon has " << Dhp << " health points left.\n";
        

        if (QSpearmen - (int)QSpearmen == 0)
        {
            int illS = QSpearmen - ((QSpearmen * Shp) - Ddamage) / Shp;
            QSpearmen = ((QSpearmen * Shp) - Ddamage) / Shp;


            if (QSpearmen < 1)
            {
                std::cout << "Dragon attacks and win!";
                return 0;
            }


            std::cout << "The dragon attacks (damage " << Ddamage << ") - " << ceil(QSpearmen) << " spearmen left, one of which is wounded(" << illS << " health points left).\n";
        }
        else
        {
            QSpearmen = ((QSpearmen * Shp) - Ddamage) / Shp;


            if (QSpearmen < 1)
            {
                std::cout << "Dragon attacks and win!";
                return 0;
            }


            std::cout << "The dragon attacks (damage " << Ddamage << ") - " << QSpearmen << " spearmen left.\n";
        }


    } while (Dhp > 0);


    std::cout << "Spearmen win!";
}
