#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\##className##.paa); \
        class Noise { \
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa"; \
        }; \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(269676636,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(269676677,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(271859839,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(285905473,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(296841733,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(297308106,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(298480575,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(361616315,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(287796119,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(288887578,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(319048089,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(maxresdefault,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(269677107,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(272813407,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(275306051,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(283924597,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(371890417,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(400370807,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(254754921,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(273347491,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(275458856,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(286142395,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(298331323,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(356376886,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(S291207115895,61st Mechanized Infantry Battalion);
    };
};
