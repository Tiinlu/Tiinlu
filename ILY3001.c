#include <stdio.h>
#include <unistd.h> 

void myh() {
    const char* art2[] = {
        "\n",
        "               /)/)                                             (\\(\\\n",
        "              ( . .)               HAPPY 3RD BB!               (. . )\n",
        "              ( >  )>                                         <(  < )\n",
        "\n"
    };

    for (int i = 0; i < sizeof(art2) / sizeof(art2[0]); i++) {
        printf("%s", art2[i]);
        fflush(stdout);
        usleep(100000);
    }
}

void lovelet()
{
    char msg[] =                
                "Hi bb hwhausaha triny ko magprint ng 3000 na I love you kaso ang haba masyado mauumay ka na siguro whaha\n"
                "kaya virtual flowers na lang muna sorry I cant take you out on dates especially when theres things\n"
                "to celebrate. Congrats sa exams na natapos mo na and goodluck rin sa mga susunod. Sorry hanggang code\n"
                "lang yung love letter ko sayo babawiin ko talaga lahat ng oras na hindi kita nakasama. Thanks for having\n"
                "me for this past 3 months sana hindi ka pa napapagod sakin hehehe sorry lagi kitang inaaway cute mo\n"
                "kasi naiimagine ko tampo mo pag nagsesend ka nung mga emoji na galit whahahaha I miss you soooooo\n"
                "much sorry kung sa chat grabe ako mag express ng feelings ko pero sa personal iba huhuhu I already\n"
                "told you this na im the type of person who thinks a lot hindi ako matalino whahahha pero sadyang\n"
                "overthinker lang kaya if most of the time I fail to show you how much I love you just know na ikaw\n"
                "lang lagi iniisip ko whahshah copium lang tlga toh kasi every date with you kinakabahan parin ako\n"
                "HUHUHUHU labas na secret ko nyhahahah ewan kahit matagal na naman tayo magkasama everytime I meet\n"
                "you personally I still feel yung kaba exactly like the first time I met you on our first date pero\n"
                "alam mo yun kahit gaano ako ka-nervous I know na hindi ako mapapabackout likeee tbh mabilis ako\n"
                "magbackout pagka-nahihiya ako pero when it comes to you g na g ako kahit ano pang cringey shi or\n"
                "cheesy jokes ang ibato ko sa langit para lang matamaan ka hwahhasha excited na ako to experience\n"
                "more things with you kahit gaano pa katagal ang sunod natin na pagkikita sure naman ako worth it\n"
                "ka siyempre ikaw yan ih muwahahhaahaha miss na kita sobra also I lied I dont really love you 3000.\n"
                "I love you 3001 talaga dapat hehehehe sorry medyo cringe refference ko jsyk kay iron man tlga yung\n"
                "quoute na yun copy paste ko lang kasi his type of love is my most favorite one. Ive met people\n"
                "with different definitions of what love is and sa kanya yung favorite ko hehehe yung tipong kaya\n"
                "niyang mamatay para sa isang tao kaya ito lamangan ko si iron man kahit hindi on how smart he is\n"
                "or how rich he is but on how much I love kasi lowkey yun lang meron ako whahsahha I love you <B";

    for (int j = 0; msg[j] != '\0'; j++)
    {
        printf ("%c", msg[j]);
        fflush(stdout);
        usleep(1);
    }
    printf("\n");
}

void flwr()
{
    const char* art[] = {
        "                                             ,~.",
        "                                            {;@;}",
        "                                      ,~.  ..`~' . *  ,~.",
        "                                     {;@;}  . ,~. ** {;@;}",
        "                                   *..`~'  * {;@;} .  `~'",
        "                                 ,~.   .. **  `~'  ** . ,~.",
        "                                {;@;} * ,~.   * ... *  {;@;}",
        "                                 `~' ..{;@;} **  ,~. .. `~'",
        "                                  ,~. . `~'. .. {;@;}   *..  *",
        "                                 {;@;}  .. ,~. ..`~' **   ,~.",
        "                                  `~'. ** {;@;}  **   ** {;@;}",
        "                                    .. * . `~'  ** ,~. ...`~'",
        "                                     * ~~  ** ... {;@;} .",
        "                                   .____  ~ *  ~   `~'.~____.",
        "                                    \\ \\ \\\\  | ||| |  / / / /",
        "                                ____ \\___\\\\ || | || /,/___/ ____",
        "                              ./___ \\_____\\\\| |||||//______/ ___\\.",
        "                               \\____/  ,___. | | | .___,   \\____/",
        "                                      /     \\,--. /`__/ \\",
        "                                     |     \\_\\   /_      |",
        "                                      \\ ,--, /`_'\\ \\    /",
        "                                       `____/  /  \\____'",
        "                                           /  /|\\  \\",
        "                                          (  (|||\\  \\ \\",
        "                                          /\\  \\||\\\\  \\ \\",
        "                                          //\\  \\|\\\\)  )",
        "                                             )  ) \'`'",
        "                                            `'`'"
    };

    for (int i = 0; i < sizeof(art) / sizeof(art[0]); i++) {
        printf("%s\n", art[i]);
        fflush(stdout);
        usleep(10000);
    }
}

void last()
{
    char msg2[] = "habol ko na rin hehehe tinanong mo ako kung pagod nako sayo... Opo pagod nako mapalayo sayo nyhahaha I love youu mwaaa";
    for (int j = 0; msg2[j] != '\0'; j++) 
    {
        printf("%c", msg2[j]);
        fflush(stdout);
        usleep(10000);
    }
}

int main() 
{
    myh();
    lovelet();
    flwr();
    last();
    return 0;
}

