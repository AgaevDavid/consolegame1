#include <iostream>




    int main() 
    {
        setlocale(LC_ALL, "RUS");
            
        int choice;
        
		std::cout << " Кольб и дракон " << std::endl;
        std::cout << std::endl;
		std::cout << " Книга приключений для" << std::endl;
		std::cout << " юных нордов" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << " Кольб был храбрым нордом - воином." << std::endl;
        std::cout << " Как - то раз вождь приказал ему убить злого дракона," << std::endl;
        std::cout << " который угрожал деревне." << std::endl;
        std::cout << " - Иди через горный перевал, Кольб, - сказал" << std::endl;
        std::cout << " вождь. - На той стороне ты найдешь дракона." << std::endl;
        std::cout << " Кольб взял свои любимые топор и щит и пошел к" << std::endl;
        std::cout << " горному перевалу. Там он увидел пещеру, где гулял" << std::endl;
        std::cout << "ветер, ледяную пещеру и узкую тропинку." << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        //std::cout << "" << std::endl;

        std::cout << "Выберите опцию:" << std::endl;
        std::cout << "1. Войти в ледяную пещеру" << std::endl;
        std::cout << "2. Войти в пещеру, где гулят ветер" << std::endl;
        std::cout << "3. Пойти по тропинке" << std::endl;
        std::cout << "Введите номер опции: ";
        std::cin >> choice;
        

        switch (choice) {
        case 1:
            system("cls");
            std::cout << " Кольб вошел в обледенелую пещеру, но он был нордом" << std::endl;
            std::cout << " поэтому не замерз. Перед ним был тоннель, из которого" << std::endl;
            std::cout << " чем - то воняло, а в тоннеле слева от него завывал" << std::endl;
            std::cout << " ветер. И еще рядом была лестница" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "Выберите опцию:" << std::endl;
            std::cout << "1. Пойти по вонючему тоннелю" << std::endl;
            std::cout << "2. Пойти по ветреному тоннелю" << std::endl;
            std::cout << "3. Поднятся по лестнице наверх" << std::endl;
            std::cout << "Введите номер опции: ";
            std::cin >> choice;


			//Путь по вонючему тоннелю
			switch (choice) { 
            case 1:
                system("cls");
                std::cout << " Кольб шел по запаху и наткнулся на" << std::endl;
                std::cout << " грязного вонючего орка! Орк зарычал" << std::endl;
                std::cout << "  и занес над героем свою шипастую дубину" << std::endl;

                std::cout << std::endl;
                std::cout << std::endl;

                std::cout << "Выберите опцию:" << std::endl;
                std::cout << "1. Поднять щит" << std::endl;
                std::cout << "2. Замахнутся топором" << std::endl;
                std::cout << "Введите номер опции: ";
                std::cin >> choice;

                switch (choice) {
				case 1:
                    system("cls");
                    std::cout << " Орк противно захихикал когда его дубина" << std::endl;
                    std::cout << " расщепила щит Кольба и врезалась ему прямо " << std::endl;
                    std::cout << " в лицо. Кольб умер, и орк сварил себе " << std::endl;
					std::cout << " похлебку и его костей" << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << " ВЫ ТАК ТУПО УМЕРЛИ " << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "можете закрывать окно";
                    std::cin >> choice;

                    switch (choice) {
                    default:

                        break;
                    }
				case 2:
                    system("cls");
					std::cout << " Кольб широко размахнулся топором и не успел" << std::endl;
                    std::cout << " орк его ударить, его голова  дубина покатились" << std::endl;
                    std::cout << " по полу. Они ему больше не понадобятся." << std::endl;
					std::cout << std::endl;
                    std::cout << " Кольб поднялся на каменистый холм. Он увидел внизу" << std::endl;
                    std::cout << " спящего дракона, а у дороги неподалеку он " << std::endl;
                    std::cout << " увидел таверну." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;

                    std::cout << "Выберите опцию:" << std::endl;
                    std::cout << "1. Спустится вниз" << std::endl;
                    std::cout << "2. Заглянуть в таверну" << std::endl;
                    std::cout << "Введите номер опции: ";
                    std::cin >> choice;

                    switch (choice) {
                    case 1:
                        system("cls");
                        std::cout << " Кольб обнаружил логово, где спал дракон." << std::endl;
                        std::cout << " Клубы дыма вырывались из его ноздрей, а " << std::endl;
                        std::cout << " а воздух в пещере резал глаза. Кольб едва не " << std::endl;
                        std::cout << " подскользнулся на человеческих костях, но " << std::endl;
                        std::cout << " которых не оставалось ни кусочка мяса. Чудовище" << std::endl;
                        std::cout << " лежало на боку, открыв для удара брюхо и глотку" << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;

                        std::cout << "Выберите опцию:" << std::endl;
                        std::cout << "1. Нанести удар по шее" << std::endl;
                        std::cout << "2. Нанести удар в брюхо" << std::endl;
                        std::cout << "Введите номер опции: ";
                        std::cin >> choice;

                        switch (choice) {
                        case 1:
                            system("cls");
                            std::cout << " Топор застрял в могучей чешуйчатой шее" << std::endl;
                            std::cout << " чудовища. Оно взвыло и забило хвостом, но " << std::endl;
                            std::cout << " Кольб не сдавался и в конце концов, орудуя" << std::endl;
                            std::cout << " топором как пилой, отделил голову дракона от" << std::endl;
                            std::cout << " тела. Кольб вернулся домой с победой, и его" << std::endl;
                            std::cout << " деревне драконы больше никогда не угрожали." << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " ВЫ ОДОЛЕЛИ ДРАКОНА И ВЕРНУЛИСЬ ГЕРОЕМ! " << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }

                            break;
						case 2:
							system("cls");
                            std::cout << " Кольб начал подбиратся к брюху чудовища, но " << std::endl;
                            std::cout << " как только он выпустил из виду голову дракона," << std::endl;
                            std::cout << " тот распахнул пасть и проглотил Кольба целиком," << std::endl;
                            std::cout << " прямо с топором и всем прочим" << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " ВЫ УМЕРЛИ НО БЫЛИ ОЧЕНЬ БЛИЗКИ К ПОБЕДЕ " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        }
                        break;
                    case 2:
						system("cls");
                        std::cout << " Кольб решил остановится в таверне, что бы отдохнуть " << std::endl;
                        std::cout << " перед боем с драконом. Но таверной управляли высокие" << std::endl;
                        std::cout << " эльфы, и они отравили его мед, что б забрать его " << std::endl;
                        std::cout << " золото себе." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " ВЫ ТУПО УМЕРЛИ " << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    }

				default:
                    std::cout << "Неверный ввод" << std::endl;
					break;
                }
                break;
            case 2:
                // путь по ветренному тоннелю
                system("cls");
                std::cout << " Сильный порыв ветра загасил факел Кольба и" << std::endl;
                std::cout << " столкнул его в яму. Кольб свернул шею и умер." << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << " БЕСПОЛЕЗНАЯ СМЕРТЬ " << std::endl;

                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << "можете закрывать окно";
                std::cin >> choice;

                switch (choice) {
                default:

                    break;
                }
             
                break;
            case 3:
                // поднятся по лестнице наверх
                system("cls");
                std::cout << " Поднявшись наверх, Кольб обнаружил лагерь. Там " << std::endl;
                std::cout << " он встретил мудреца, который разделил с ним " << std::endl;
                std::cout << " трапезу и показал два пути, ведущие в логово дракона" << std::endl;
                std::cout << " Первый вел через холмы, а второй через болото" << std::endl;

                std::cout << "Выберите опцию:" << std::endl;
                std::cout << "1. Отправится на холмы" << std::endl;
                std::cout << "2. Отправится на болото" << std::endl;
                std::cout << "Введите номер опции: ";
                std::cin >> choice;

                //еще один холм
                switch (choice) {
                case 1:
                    system("cls");
                    std::cout << " Кольб поднялся на каменистый холм. Он увидел внизу" << std::endl;
                    std::cout << " спящего дракона, а у дороги неподалеку он " << std::endl;
                    std::cout << " увидел таверну." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;

                    std::cout << "Выберите опцию:" << std::endl;
                    std::cout << "1. Спустится вниз" << std::endl;
                    std::cout << "2. Заглянуть в таверну" << std::endl;
                    std::cout << "Введите номер опции: ";
                    std::cin >> choice;

                    switch (choice) {
                    case 1:
                        system("cls");
                        std::cout << " Кольб обнаружил логово, где спал дракон." << std::endl;
                        std::cout << " Клубы дыма вырывались из его ноздрей, а " << std::endl;
                        std::cout << " а воздух в пещере резал глаза. Кольб едва не " << std::endl;
                        std::cout << " подскользнулся на человеческих костях, но " << std::endl;
                        std::cout << " которых не оставалось ни кусочка мяса. Чудовище" << std::endl;
                        std::cout << " лежало на боку, открыв для удара брюхо и глотку" << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;

                        std::cout << "Выберите опцию:" << std::endl;
                        std::cout << "1. Нанести удар по шее" << std::endl;
                        std::cout << "2. Нанести удар в брюхо" << std::endl;
                        std::cout << "Введите номер опции: ";
                        std::cin >> choice;

                        switch (choice) {
                        case 1:
                            system("cls");
                            std::cout << " Топор застрял в могучей чешуйчатой шее" << std::endl;
                            std::cout << " чудовища. Оно взвыло и забило хвостом, но " << std::endl;
                            std::cout << " Кольб не сдавался и в конце концов, орудуя" << std::endl;
                            std::cout << " топором как пилой, отделил голову дракона от" << std::endl;
                            std::cout << " тела. Кольб вернулся домой с победой, и его" << std::endl;
                            std::cout << " деревне драконы больше никогда не угрожали." << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " ВСТРЕЧАЙТЕ ГЕРОЯ!! " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            std::cout << " Кольб начал подбиратся к брюху чудовища, но " << std::endl;
                            std::cout << " как только он выпустил из виду голову дракона," << std::endl;
                            std::cout << " тот распахнул пасть и проглотил Кольба целиком," << std::endl;
                            std::cout << " прямо с топором и всем прочим" << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " ЕСЛИ ВИДИШЬ ШЕЮ ТО НЕ БЕГИ К ПУЗУ, ПОПЫТАЕШЬ ВНОВЬ УДАЧУ В СЛЕДУЮЩЕЙ ЖИЗНИ! " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        std::cout << " Кольб решил остановится в таверне, что бы отдохнуть " << std::endl;
                        std::cout << " перед боем с драконом. Но таверной управляли высокие" << std::endl;
                        std::cout << " эльфы, и они отравили его мед, что б забрать его " << std::endl;
                        std::cout << " золото себе." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " ВОТ НАДО БЫЛО ТЕБЕ ИДТИ ОТДЫХАТЬ КОГДА ДРАКОН ВОТ ОН ЛЕЖИТ И МАНИТ ТЕБЯ?! " << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    }
                    break;
                case 2:
                    system("cls");
                    std::cout << " Осторожно ступая по болоту, Кольб увидел, что" << std::endl;
                    std::cout << " путь ему преградил скорбно воющий призрак." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Выберите опцию:" << std::endl;
                    std::cout << "1. Напасть на призрака" << std::endl;
                    std::cout << "2. Дать призраку золото" << std::endl;
                    std::cout << "Введите номер опции: ";
                    std::cin >> choice;

                    switch (choice) {
                    case 1:
                        system("cls");

                        std::cout << " Кольб замахнулся топором изо всей силы, но призрак" << std::endl;
                        std::cout << " этого будто бы даже не заметил. Он приблизился" << std::endl;
                        std::cout << " к Кольбу, и тот погрузился в глубокий сон и никогда " << std::endl;
                        std::cout << " больше не проснулся." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " У ТЕБЯ ИНТЕЛЕКТ - 3? ПРИЗРАКА ТОПОРОМ ПЫТАТСЯ УБИТЬ?!" << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        std::cout << " Кольб вспомнил, что рассказывала ему бабушка, и " << std::endl;
                        std::cout << " протянул два золотых призраку. Тот растворился в " << std::endl;
                        std::cout << " в воздухе, открыв Кольбу путь." << std::endl;
                        std::cout << "" << std::endl;
                        std::cout << " Оставив болото позади, Кольб увидел неподалеку" << std::endl;
                        std::cout << " логово дракона, а также небольшую уютную таверну." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;

                        std::cout << "Выберите опцию:" << std::endl;
                        std::cout << "1. Отправиться в логово дракона" << std::endl;
                        std::cout << "2. Отправиться в таверну" << std::endl;
                        std::cout << "Введите номер опции: ";
                        std::cin >> choice;

                        switch (choice) {
                        case 1:
                            system("cls");
                            std::cout << " Кольб обнаружил логово, где спал дракон." << std::endl;
                            std::cout << " Клубы дыма вырывались из его ноздрей, а " << std::endl;
                            std::cout << " а воздух в пещере резал глаза. Кольб едва не " << std::endl;
                            std::cout << " подскользнулся на человеческих костях, но " << std::endl;
                            std::cout << " которых не оставалось ни кусочка мяса. Чудовище" << std::endl;
                            std::cout << " лежало на боку, открыв для удара брюхо и глотку" << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;

                            std::cout << "Выберите опцию:" << std::endl;
                            std::cout << "1. Нанести удар по шее" << std::endl;
                            std::cout << "2. Нанести удар в брюхо" << std::endl;
                            std::cout << "Введите номер опции: ";
                            std::cin >> choice;

                            switch (choice) {
                            case 1:
                                system("cls");
                                std::cout << " Топор застрял в могучей чешуйчатой шее" << std::endl;
                                std::cout << " чудовища. Оно взвыло и забило хвостом, но " << std::endl;
                                std::cout << " Кольб не сдавался и в конце концов, орудуя" << std::endl;
                                std::cout << " топором как пилой, отделил голову дракона от" << std::endl;
                                std::cout << " тела. Кольб вернулся домой с победой, и его" << std::endl;
                                std::cout << " деревне драконы больше никогда не угрожали." << std::endl;
                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << " ДА БУДЕТ ПИР НА ВЕСЬ МИР " << std::endl;

                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << "можете закрывать окно";
                                std::cin >> choice;

                                switch (choice) {
                                default:

                                    break;
                                }
                                break;
                            case 2:
                                system("cls");
                                std::cout << " Кольб начал подбиратся к брюху чудовища, но " << std::endl;
                                std::cout << " как только он выпустил из виду голову дракона," << std::endl;
                                std::cout << " тот распахнул пасть и проглотил Кольба целиком," << std::endl;
                                std::cout << " прямо с топором и всем прочим" << std::endl;
                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << " НАДО БЫЛО КИНУТЬ ТОПОР В ПУЗО А НЕ ИДТИ К НЕМУ, ПО ИТОГУ ТЫ РАЗБУДИЛ ДРАКОНА! " << std::endl;

                                std::cout << std::endl;
                                std::cout << std::endl;
                                std::cout << "можете закрывать окно";
                                std::cin >> choice;

                                switch (choice) {
                                default:

                                    break;
                                }
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            std::cout << " Кольб решил остановится в таверне, что бы отдохнуть " << std::endl;
                            std::cout << " перед боем с драконом. Но таверной управляли высокие" << std::endl;
                            std::cout << " эльфы, и они отравили его мед, что б забрать его " << std::endl;
                            std::cout << " золото себе." << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " ТЫ ЧТО, НЕ ВИДЕЛ КТО ХОЗЯЕВА? МОГ БЫ ПОСЛЕ ДРАКОНА И ИХ ГОЛОВЫ ПРИНЕСТИ ЧТО Б НЕ ПОВАДНО БЫЛО! " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        }
                        break;


                    default:
                        std::cout << "Неверный ввод" << std::endl;
                    }

                    break;
                default:
                    std::cout << "Неверный ввод" << std::endl;
                }
                break;
             break;
             }  
             break;
        case 2:
            system("cls");
			std::cout << " Сильный порыв ветра загасил факел Кольба и" << std::endl;
			std::cout << " столкнул его в яму. Кольб свернул шею и умер." << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << " БЕРЕГИСЬ ТАМ ВЕТРЕНО! " << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "можете закрывать окно";
            std::cin >> choice;

            switch (choice) {
            default:

                break;
            }
            break;

        case 3:
            system("cls");
            std::cout << " Поднявшись наверх, Кольб обнаружил лагерь. Там " << std::endl;
            std::cout << " он встретил мудреца, который разделил с ним " << std::endl;
            std::cout << " трапезу и показал два пути, ведущие в логово дракона" << std::endl;
            std::cout << " Первый вел через холмы, а второй через болото" << std::endl;

            std::cout << "Выберите опцию:" << std::endl;
            std::cout << "1. Отправится на холмы" << std::endl;
            std::cout << "2. Отправится на болото" << std::endl;
            std::cout << "Введите номер опции: ";
            std::cin >> choice;

            //еще один холм
            switch (choice) {
            case 1:
                system("cls");
                std::cout << " Кольб поднялся на каменистый холм. Он увидел внизу" << std::endl;
                std::cout << " спящего дракона, а у дороги неподалеку он " << std::endl;
                std::cout << " увидел таверну." << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;

                std::cout << "Выберите опцию:" << std::endl;
                std::cout << "1. Спустится вниз" << std::endl;
                std::cout << "2. Заглянуть в таверну" << std::endl;
                std::cout << "Введите номер опции: ";
                std::cin >> choice;

                switch (choice) {
                case 1:
                    system("cls");
                    std::cout << " Кольб обнаружил логово, где спал дракон." << std::endl;
                    std::cout << " Клубы дыма вырывались из его ноздрей, а " << std::endl;
                    std::cout << " а воздух в пещере резал глаза. Кольб едва не " << std::endl;
                    std::cout << " подскользнулся на человеческих костях, но " << std::endl;
                    std::cout << " которых не оставалось ни кусочка мяса. Чудовище" << std::endl;
                    std::cout << " лежало на боку, открыв для удара брюхо и глотку" << std::endl;

                    std::cout << std::endl;
                    std::cout << std::endl;

                    std::cout << "Выберите опцию:" << std::endl;
                    std::cout << "1. Нанести удар по шее" << std::endl;
                    std::cout << "2. Нанести удар в брюхо" << std::endl;
                    std::cout << "Введите номер опции: ";
                    std::cin >> choice;

                    switch (choice) {
                    case 1:
                        system("cls");
                        std::cout << " Топор застрял в могучей чешуйчатой шее" << std::endl;
                        std::cout << " чудовища. Оно взвыло и забило хвостом, но " << std::endl;
                        std::cout << " Кольб не сдавался и в конце концов, орудуя" << std::endl;
                        std::cout << " топором как пилой, отделил голову дракона от" << std::endl;
                        std::cout << " тела. Кольб вернулся домой с победой, и его" << std::endl;
                        std::cout << " деревне драконы больше никогда не угрожали." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " ПОБЕДИТЕЛЬ В ПРАВОМ УГЛУ РИНГА... " << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        std::cout << " Кольб начал подбиратся к брюху чудовища, но " << std::endl;
                        std::cout << " как только он выпустил из виду голову дракона," << std::endl;
                        std::cout << " тот распахнул пасть и проглотил Кольба целиком," << std::endl;
                        std::cout << " прямо с топором и всем прочим" << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " ПОПРОБУЕШЬ В СЛЕДУЮЩЕЙ ЖИЗНИ! " << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    }
                    break;
                case 2:
                    system("cls");
                    std::cout << " Кольб решил остановится в таверне, что бы отдохнуть " << std::endl;
                    std::cout << " перед боем с драконом. Но таверной управляли высокие" << std::endl;
                    std::cout << " эльфы, и они отравили его мед, что б забрать его " << std::endl;
                    std::cout << " золото себе." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << " НЕ ДОВЕРЯЙ ВЫСШИМ ЭЛЬФАМ! " << std::endl;

                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "можете закрывать окно";
                    std::cin >> choice;

                    switch (choice) {
                    default:

                        break;
                    }
                    break;
                }
                break;
            case 2:
                system("cls");
                std::cout << " Осторожно ступая по болоту, Кольб увидел, что" << std::endl;
                std::cout << " путь ему преградил скорбно воющий призрак." << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << "Выберите опцию:" << std::endl;
                std::cout << "1. Напасть на призрака" << std::endl;
                std::cout << "2. Дать призраку золото" << std::endl;
                std::cout << "Введите номер опции: ";
                std::cin >> choice;

                switch (choice) {
                case 1:
                    system("cls");

					std::cout << " Кольб замахнулся топором изо всей силы, но призрак" << std::endl;
                    std::cout << " этого будто бы даже не заметил. Он приблизился" << std::endl;
                    std::cout << " к Кольбу, и тот погрузился в глубокий сон и никогда " << std::endl;
                    std::cout << " больше не проснулся." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << " ТЕБЯ БАБУШКА НИЧЕМУ НЕ УЧИЛА ЧТО ЛИ?! " << std::endl;

                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "можете закрывать окно";
                    std::cin >> choice;

                    switch (choice) {
                    default:

                        break;
                    }
                    break;
                case 2:
                    system("cls");
					std::cout << " Кольб вспомнил, что рассказывала ему бабушка, и " << std::endl;
                    std::cout << " протянул два золотых призраку. Тот растворился в " << std::endl;
                    std::cout << " в воздухе, открыв Кольбу путь." << std::endl;
                    std::cout << "" << std::endl;
                    std::cout << " Оставив болото позади, Кольб увидел неподалеку" << std::endl;
                    std::cout << " логово дракона, а также небольшую уютную таверну." << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;

                    std::cout << "Выберите опцию:" << std::endl;
                    std::cout << "1. Отправиться в логово дракона" << std::endl;
                    std::cout << "2. Отправиться в таверну" << std::endl;
                    std::cout << "Введите номер опции: ";
                    std::cin >> choice;

                    switch (choice) {
                    case 1:
                        system("cls");
                        std::cout << " Кольб обнаружил логово, где спал дракон." << std::endl;
                        std::cout << " Клубы дыма вырывались из его ноздрей, а " << std::endl;
                        std::cout << " а воздух в пещере резал глаза. Кольб едва не " << std::endl;
                        std::cout << " подскользнулся на человеческих костях, но " << std::endl;
                        std::cout << " которых не оставалось ни кусочка мяса. Чудовище" << std::endl;
                        std::cout << " лежало на боку, открыв для удара брюхо и глотку" << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;

                        std::cout << "Выберите опцию:" << std::endl;
                        std::cout << "1. Нанести удар по шее" << std::endl;
                        std::cout << "2. Нанести удар в брюхо" << std::endl;
                        std::cout << "Введите номер опции: ";
                        std::cin >> choice;

                        switch (choice) {
                        case 1:
                            system("cls");
                            std::cout << " Топор застрял в могучей чешуйчатой шее" << std::endl;
                            std::cout << " чудовища. Оно взвыло и забило хвостом, но " << std::endl;
                            std::cout << " Кольб не сдавался и в конце концов, орудуя" << std::endl;
                            std::cout << " топором как пилой, отделил голову дракона от" << std::endl;
                            std::cout << " тела. Кольб вернулся домой с победой, и его" << std::endl;
                            std::cout << " деревне драконы больше никогда не угрожали." << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " И ПОБЕДИТЕЛЬСМЕЛЫЙ И ОТВАЖНЫЙ НОРД! " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            std::cout << " Кольб начал подбиратся к брюху чудовища, но " << std::endl;
                            std::cout << " как только он выпустил из виду голову дракона," << std::endl;
                            std::cout << " тот распахнул пасть и проглотил Кольба целиком," << std::endl;
                            std::cout << " прямо с топором и всем прочим" << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << " И ПОБЕДИТЕЛЬ ХИТРЫЙ ДРАКОН ПРИТВОРИВШИЙСЯ СПЯЩИМ! " << std::endl;

                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "можете закрывать окно";
                            std::cin >> choice;

                            switch (choice) {
                            default:

                                break;
                            }
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        std::cout << " Кольб решил остановится в таверне, что бы отдохнуть " << std::endl;
                        std::cout << " перед боем с драконом. Но таверной управляли высокие" << std::endl;
                        std::cout << " эльфы, и они отравили его мед, что б забрать его " << std::endl;
                        std::cout << " золото себе." << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << " ЛУЧШЕ В ТЫ В ЛЕСУ ОТДОХНУЛ " << std::endl;

                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << "можете закрывать окно";
                        std::cin >> choice;

                        switch (choice) {
                        default:

                            break;
                        }
                        break;
                    }
                    break;
                    

                default:
                    std::cout << "Неверный ввод" << std::endl;
                }

                break;
            default:
                std::cout << "Неверный ввод" << std::endl;
			}

        default:
            std::cout << "Неверный выбор" << std::endl;

        }
        return 0;
    }
  