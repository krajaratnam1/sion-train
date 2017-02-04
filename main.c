#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if(argv[0][0] == '.') {
        system("cp Resources/Sion_Base_VO_audio.wpk '/Applications/League of Legends.app/contents/LoL/RADS/projects/lol_game_client_en_us/managedfiles/0.0.0.148/DATA/Sounds/Wwise/VO/en_US/characters/Sion/Skins/Base/Sion_Base_VO_audio.wpk'");
        printf("If cp reported no errors, you can now access your client and use the mod. Enjoy!\n");
    } else {
        char* str = strdup(argv[0]), buf[500];
        int len = strlen(str), i;
        for(i = len - 1;str[i] != '/'; i--) {
            str[i] = 0;
        }
        printf("Source Directory = %s\n",str);
        memset(buf,0,500);
        sprintf(buf,"cp '%sResources/Sion_Base_VO_audio.wpk' '/Applications/League of Legends.app/contents/LoL/RADS/projects/lol_game_client_en_us/managedfiles/0.0.0.148/DATA/Sounds/Wwise/VO/en_US/characters/Sion/Skins/Base/Sion_Base_VO_audio.wpk'",str);
        system(buf);
        printf("If cp reported no errors, you can now access your client and use the mod. Enjoy!\n\n\n");
    }
	return 0;
}
