
class EMM_mainMenu_CfgMenus {
    class VN {
        class menus {
            class MainMenu;
            class MultiplayerVN: MainMenu {
                items[] = {"sixtyonesofbattle", "ServerBrowser", "SOGPrairieFire", "MikeForce", "Exit"};

                class ServerBrowser;
                class sixtyonesofbattle: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join)));
                    text = CSTRING(SpotlightHeader);
                };
            };
        };
    };
};
