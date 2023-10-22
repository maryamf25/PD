#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y);

void header();
int h1 = 15, h2 = 2;

int p = 30, q = 35;
void printpet();
void erasepet();
void movepet();
void printMenu();
void menubar();
void options(char option);
char option;

char requirement;
char back;
void about();

string pettype;
int service;
void services();
void service_header();
void serviceOptions(int service);
void overnightCare();
string medical();
string fitness;
void training();

int searching;
void dermatology();
void primarycare();
void rabbitcare();
void internalMed();
int vet();

main()
{

  system("cls");
  header();
  printpet();
  printMenu();
  int vet_search = vet();
  if (vet_search == 1)
  {
    dermatology();
  }
  if (vet_search == 2 && (pettype == "cat" || pettype == "dog"))
  {
    primarycare();
  }
  if (vet_search == 2 && pettype == "rabbit")
  {
    rabbitcare();
  }
  if (vet_search == 3)
  {
    internalMed();
  }

  gotoxy(63, 40);
  cout << "Press 0 for home or any option to continue.....";
  cin >> option;
  options(option);
}
void header()
{
  // cout << "  _________________________________________________________________________________________________________________________________________________________________  "   << endl;
  gotoxy(1, 1);
  cout << "  ***************************************************************************************************************************************************************** ";
  gotoxy(1, 2);
  cout << "  _________________________________________________________________________________________________________________________________________________________________  ";
  gotoxy(1, 4);
  cout << "                                             PPPPPP  EEEEE  TTTTTT       PPPPPP    A     LL                                " << endl;
  gotoxy(1, 5);
  cout << "                                             PP   P  EE       TT         PP   P   A  A   LL           (\\___/)             " << endl;
  gotoxy(1, 6);
  cout << "                                             PPPPPP  EEEEE    TT         PPPPPP  AAAAAA  LL           (_^-^ )__            " << endl;
  gotoxy(1, 7);
  cout << "                                             PP      EE       TT         PP      AA  AA  LL            /      _\\~~        " << endl;
  gotoxy(1, 8);
  cout << "                                             PP      EEEEE    TT         PP      AA  AA  LLLLLLL       \\/''\\/            " << endl
       << endl;
  gotoxy(1, 10);
  cout << "  _________________________________________________________________________________________________________________________________________________________________  " << endl
       << endl;
  gotoxy(1, 12);
  cout << "  *****************************************************************************************************************************************************************  " << endl
       << endl;

  gotoxy(1, 13); // cout << "  ------------------------------------------------------------------------------------------------------------------------------------------------------------------  "   << endl << endl;
  cout << "                                                          \"BECAUSE THE PETS DESERVE THE BEST!\"                                                                   " << endl;
}
void printpet()
{

  gotoxy(p, q);
  cout << "             ()_()   ";
  gotoxy(p, q + 1);
  cout << "             (^-^)   ";
  gotoxy(p, q + 2);
  cout << "         _____---    ";
  gotoxy(p, q + 3);
  cout << "       ~(     /  )   ";
  gotoxy(p, q + 4);
  cout << "         --------    ";
  gotoxy(p, q + 5);
  cout << "          \\/  \\/   ";
}
void erasepet()
{

  gotoxy(p, q);
  cout << "                     ";
  gotoxy(p, q + 1);
  cout << "                     ";
  gotoxy(p, q + 2);
  cout << "                     ";
  gotoxy(p, q + 3);
  cout << "                     ";
  gotoxy(p, q + 4);
  cout << "                     ";
  gotoxy(p, q + 5);
  cout << "                     ";
}
void movepet()
{

  erasepet();
  p = p + 1;
  if (p == 80)
  {
    p = 30;
  }
  printpet();
}

void printMenu()
{

  gotoxy(60, 15);
  cout << "_________________________________" << endl
       << endl;
  gotoxy(63, 17);
  cout << "1. About Us";
  gotoxy(63, 19);
  cout << "2. Services";
  gotoxy(63, 21);
  cout << "3. Find a Veterinarian";
  gotoxy(60, 23);
  cout << "_________________________________" << endl
       << endl;
  gotoxy(63, 25);
  cout << "Enter Your Requirement: ";
  ;

  cin >> requirement;
  if (requirement == '1')
  {
    about();
  }
  if (requirement == '2')
  {
    services();
  }

  if (requirement == '3')
  {
    vet();
  }
}
void menubar()
{

  gotoxy(30, 15);
  cout << "____________________________________________________________________________________________";
  gotoxy(45, 17);
  cout << "1. About Us";
  gotoxy(60, 17);
  cout << "2. Services";
  gotoxy(75, 17);
  cout << "3. Find a Veterinarian";

  gotoxy(30, 19);
  cout << "____________________________________________________________________________________________";
}
void options(char option)
{

  if (option == '0')
  {
    system("cls");
    header();
    printMenu();
  }
  if (option == '1')
  {

    about();
  }
  if (option == '2')
  {

    services();
  }
  if (option == '3')
  {

    vet();
  }
}
//  about section;
void about()
{

  system("cls");
  header();
  menubar();

  gotoxy(30, 21);
  cout << "Welcome to PetPal, where our passion for pets drives everything we do. Founded by a team of " << endl;
  gotoxy(30, 22);
  cout << "dedicated animal lovers, we understand that your furry, feathered, or scaly companions are " << endl;
  gotoxy(30, 23);
  cout << "more than just pets; they're family. With years of experience in providing top-notch pet care" << endl;
  gotoxy(30, 24);
  cout << "services, we are committed to ensuring the happiness, health, and well-being of your beloved" << endl;
  gotoxy(30, 25);
  cout << "animals.                                                                                    ";
  gotoxy(30, 26);
  cout << "                                                                                             ";
  gotoxy(30, 27);
  cout << "Our dedication to excellence extends beyond our services. We maintain a clean and safe environment,";
  gotoxy(30, 28);
  cout << "use the best products and techniques for grooming, and employ compassionate and certified staff ";
  gotoxy(30, 29);
  cout << "members who are passionate about animals. We prioritize open communication with our clients, ensuring ";
  gotoxy(30, 30);
  cout << "you are always informed and comfortable with the care your pet is receiving.";
  gotoxy(30, 32);
  cout << "Press 0 for home or any option to continue.....";
  cin >> option;
  options(option);
}

void services()
{

  system("cls");
  header();
  menubar();

  gotoxy(63, 23);
  cout << "1. Overnight Care";
  gotoxy(63, 25);
  cout << "2. Medical Checkup";
  gotoxy(63, 27);
  cout << "3. Pet Training";
  gotoxy(63, 29);
  cout << "____________________" << endl
       << endl;
  gotoxy(63, 31);
  cout << "Enter option to continue.....";
  cin >> service;
  serviceOptions(service);
}
void overnightCare()
{

  system("cls");
  header();
  menubar();

  gotoxy(63, 23);
  cout << "Enter Name of Your Pet: ";
  string name;
  cin >> name;

  gotoxy(63, 25);
  cout << "Enter type of Your Pet: ";
  string type;
  cin >> type;

  gotoxy(63, 27);
  cout << "Enter Sleeping Hours: ";
  int shours;
  cin >> shours;

  if (type == "dog")
  {

    system("cls");
    header();
    menubar();
    gotoxy(30, 21);
    cout << "1. Continue to feed your puppy a high-quality puppy formula or milk replacer specifically " << endl;
    gotoxy(30, 22);
    cout << "designed for puppies. " << endl;
    gotoxy(30, 24);
    cout << "2. Follow the manufacturer's instructions for feeding quantities and frequency." << endl;
    gotoxy(30, 26);
    cout << "3. Begin gentle socialization by exposing the puppy to different people, gentle handling, " << endl;
    gotoxy(30, 27);
    cout << "and safe, age-appropriate toys.";
    gotoxy(30, 29);
    cout << "4. Puppies are not able to regulate their body temperature well. Keep the environment warm  ";
    gotoxy(30, 30);
    cout << "(around 85-90 F or 29-32 C) using heating pads or a heat lamp. ";
    gotoxy(63, 40);
  }
  if (type == "rabbit")
  {
    system("cls");
    header();
    menubar();
    gotoxy(30, 21);
    cout << "1. Rabbits need a quiet, secure, and comfortable sleeping area. Ensure their hutch or enclosure    " << endl;
    gotoxy(30, 22);
    cout << "is clean and cozy,  with bedding or hay for them to rest on. " << endl;
    gotoxy(30, 24);
    cout << "2. Rabbits can see in low light, but you can provide a small, dim nightlight in their sleeping " << endl;
    gotoxy(30, 25);
    cout << " area to help them navigate if they need to move around at night." << endl;
    gotoxy(30, 27);
    cout << "3. Keep the noise level in your home to a minimum during the night to avoid disturbing your " << endl;
    gotoxy(30, 28);
    cout << "rabbit's rest.";
    gotoxy(30, 30);
    cout << "4. Leave a few safe and engaging toys or chewing items in your rabbit's enclosure to keep ";
    gotoxy(30, 31);
    cout << "them entertained during their active hours. ";
  }

  if (type == "cat")
  {
    system("cls");
    header();
    menubar();
    gotoxy(30, 21);
    cout << "1. Cats appreciate a quiet and comfortable sleeping area. Ensure your cat's bed or sleeping   " << endl;
    gotoxy(30, 22);
    cout << "spot is clean, cozy, and away from noisy or high-traffic areas.  " << endl;
    gotoxy(30, 24);
    cout << "2. Feed your cat its evening meal a few hours before bedtime. Interactive playtime is an   " << endl;
    gotoxy(30, 25);
    cout << "excellent way to engage your cat and burn off excess energy. " << endl;
    gotoxy(30, 27);
    cout << "3. If your cat seems active at night, consider engaging in a short play session before you  " << endl;
    gotoxy(30, 28);
    cout << "go to bed. This can help tire them out and encourage them to rest during the night.";
    gotoxy(30, 30);
    cout << "4. If your cat goes outdoors, ensure they are safely indoors during the night to protect   ";
    gotoxy(30, 31);
    cout << " them from nighttime dangers and predators. ";
    gotoxy(63, 40);
  }
  gotoxy(63, 40);
  cout << "Press 0 for home or any option to continue.....";
  cin >> option;
  options(option);
}
string medical()
{
  system("cls");
  header();
  menubar();

  gotoxy(30, 21);
  cout << "Provide us some information about your pet (YES/NO). ";

  gotoxy(63, 23);

  cout << "Is your pet vaccinated? ";
  string vac;
  cin >> vac;

  gotoxy(63, 25);
  cout << "Does your pet walk or play well? ";
  string play;
  cin >> play;

  gotoxy(63, 27);
  cout << "Do you bring your pet for monthly checkup? ";
  string chck;
  cin >> chck;

  gotoxy(63, 29);
  cout << "Does your pet eat well? ";
  string eat;
  cin >> eat;
  if (vac == "yes" && eat == "yes" && chck == "yes" && play == "yes")
  {

    gotoxy(63, 31);
    cout << "No need to worry! Your pet is medically fit. ";
  }
  else
  {
    gotoxy(63, 31);
    cout << "Your pet is not medically fit. Consult a Veterinarian!";
  }
  gotoxy(63, 40);
  cout << "Press 0 for home or any option to continue.....";
  cin >> option;
  options(option);
}
void training()
{
  system("cls");
  header();
  menubar();
  gotoxy(30, 21);
  cout << "Need assistance? Our pet trainers are just a few taps away on the app, ready ";
  gotoxy(30, 22);
  cout << "to lend a helping hand - or paw - whenever you need it, ensuring your pet's ";
  gotoxy(30, 23);
  cout << "continuous growth and well-being ";
  gotoxy(30, 25);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 26);
  cout << "|                                  TRAINING SCHEDULE                                       |";
  gotoxy(30, 27);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 28);
  cout << "|            AGE           |            WEEKLY             |            MONTHLY            |  ";
  gotoxy(30, 29);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 30);
  cout << "|       1-6 Months         |            20,000 Rs          |             50,000            |  ";
  gotoxy(30, 31);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 32);
  cout << "|       6-12 Months        |            15,000 Rs          |             40,000            |  ";
  gotoxy(30, 33);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 34);
  cout << "|   Elder than 1 Year      |            7 ,000 Rs          |             25,000            |  ";
  gotoxy(30, 35);
  cout << "--------------------------------------------------------------------------------------------";
  gotoxy(30, 37);
  cout << "We are providing 50% discount for fast learning pets!";

  gotoxy(63, 40);
  cout << "Press 0 for home or any option to continue.....";
  cin >> option;
  options(option);
}
void serviceOptions(int service)
{
  if (service == 1)
  {
    overnightCare();
  }
  if (service == 2)
  {
    medical();
  }
  if (service == 3)
  {
    training();
  }
}
int vet()
{

  system("cls");
  header();
  menubar();

  gotoxy(30, 21);
  cout << "Looking for a Veterinarian ? We have a  dedicated team of veterinarians, the heart and soul ";
  gotoxy(30, 22);
  cout << "of PetPal app. With years of experience and a deep love for animals, our veterinarians are ";
  gotoxy(30, 23);
  cout << "here to provide top-notch healthcare and guidance for your beloved furry companions. ";
  gotoxy(30, 27);
  cout << "What is your requirement? ";
  gotoxy(30, 29);
  cout << "                1. Dermatology   2. Primary Care   3.Internal Medicine     ";
  // gloabal variable;
  cin >> searching;
  gotoxy(30, 31);
  cout << "Enter type of your pet: ";

  cin >> pettype;
  gotoxy(30, 33);
  cout << "Enter your pet's age (in months): ";
  string petage;
  cin >> petage;
  gotoxy(30, 35);
  cout << "Enter your email: ";
  string email;
  cin >> email;
  gotoxy(30, 37);
  cout << "Enter your address: ";
  string address;
  cin >> address;
  return searching;
}
void dermatology()
{

  system("cls");
  header();
  menubar();

  gotoxy(30, 21);
  cout << "Dr. Brittany Caitlin";
  gotoxy(30, 23);
  cout << "ABOUT: Dr. Brittany has 1 year of Veterinary Experience. Graduated at University";
  gotoxy(30, 24);
  cout << "of the Philippines - Los Baños at 2022. Externship was done at Pet Wonders Veterinary";
  gotoxy(30, 24);
  cout << "Clinic which caters Dogs,Rabbits and Cats. Worked at The Cat Clinic which specializes in";
  gotoxy(30, 25);
  cout << "feline medicine.";
  gotoxy(30, 27);
  cout << "AVAILABILITY:";
  gotoxy(30, 28);
  cout << "Monday to Sunday ( 9:00 AM - 9:00PM)";
  gotoxy(30, 30);
  cout << "CONTACT:";
  gotoxy(30, 31);
  cout << "0213-3882916     dr.brittany@gmail.com";
}

void primarycare()
{

  system("cls");
  header();
  menubar();
  gotoxy(30, 21);
  cout << "Dr. Harlin David";
  gotoxy(30, 23);
  cout << "ABOUT: Dr. Harlin has been practicing as Veterinarian since 2014.  ";
  gotoxy(30, 24);
  cout << "He has extensive experience in Rabies Diagnostics and Gross Pathology.";
  gotoxy(30, 24);
  cout << "He now focuses on Companion Animal Medicine as Primary Care and Wellness ";
  gotoxy(30, 25);
  cout << "Veterinarian.";
  gotoxy(30, 27);
  cout << "AVAILABILITY:";
  gotoxy(30, 28);
  cout << "Monday to Friday ( 9:00 AM - 9:00PM)";
  gotoxy(30, 30);
  cout << "CONTACT:";
  gotoxy(30, 31);
  cout << "0346-2672910     david637@gmail.com";
}

void rabbitcare()
{

  system("cls");
  header();
  menubar();
  gotoxy(30, 21);
  cout << "Dr. Jonarel Mae Andres";
  gotoxy(30, 23);
  cout << "ABOUT:Graduated Doctor of Veterinary Medicine at University of Southern Mindanao   ";
  gotoxy(30, 24);
  cout << "with Academic Excellence Award from the College of Veterinary Medicine-USM.";
  gotoxy(30, 24);
  cout << "A licensed veterinarian since 2016. rs experience in Small Animal Practice with  ";
  gotoxy(30, 25);
  cout << "2 years experience in large ruminants.";
  gotoxy(30, 27);
  cout << "AVAILABILITY:";
  gotoxy(30, 28);
  cout << "Monday to Sunday ( 11:00 AM - 8:00PM)";
  gotoxy(30, 30);
  cout << "CONTACT:";
  gotoxy(30, 31);
  cout << "0262-4267392     mae@gmail.com";
}

void internalMed()
{

  system("cls");
  header();
  menubar();
  gotoxy(30, 21);
  cout << "Dr. Jessica Pandan";
  gotoxy(30, 23);
  cout << "ABOUT: An Alumna of Central Mindanao University (Center of Excellence in  ";
  gotoxy(30, 24);
  cout << "Veterinary Education). Bukidnon-Davao City based Licensed Veterinarian.";
  gotoxy(30, 24);
  cout << "who is practicing in companion animal medicine. ";

  gotoxy(30, 27);
  cout << "AVAILABILITY:";
  gotoxy(30, 28);
  cout << "Tuesday to Sunday ( 10:00 AM - 6:00PM)";
  gotoxy(30, 30);
  cout << "CONTACT:";
  gotoxy(30, 31);
  cout << "0823-7361893     dr.jessica@gmail.com";
}

//  gotoxy(63,40);
//  cout << "Press 0 for home or any option to continue.....";
//  cin>> option;
//  options(option);

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}