class RscPicture;
class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
#define DISPLAY_LOADING_ADD_BG(displayClass) \
    class displayClass: RscStandardDisplay { \
        class controls { \
            class LoadingStart: RscControlsGroup { \
                class VScrollbar {\
                    width = 0; \
                }; \
                class HScrollbar {\
                    width = 0; \
                }; \
                class controls { \
                    class GVAR(background): RscPictureKeepAspect { \
                        idc = IDC_LOADINGSTART_CUSTOM_BG; \
                        x = 0; \
                        y = "-(0.5 * safeZoneH)"; \
                        w = "safeZoneW"; \
                        h = "2 * safeZoneH"; \
                    }; \
                    class Noise: RscPicture { \
                        text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa"; \
                    }; \
                    class GVAR(lines): Noise {}; \
                    class Logo: RscPictureKeepAspect { \
                        y = "-safeZoneH"; \
                    }; \
                    class GVAR(logo): Logo { \
                        idc = -1; \
                        y = "0 * safeZoneH"; \
                    }; \
                }; \
            }; \
        }; \
    }

DISPLAY_LOADING_ADD_BG(RscDisplayStart);
DISPLAY_LOADING_ADD_BG(RscDisplayLoadMission);
DISPLAY_LOADING_ADD_BG(RscDisplayNotFreeze);
