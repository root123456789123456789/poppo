#include <windows.h>

int main(){
    HWND findwindow = FindWindowA("mrmain",NULL);
    if(findwindow != NULL){
        return true;
    }
    else{
        MessageBox(NULL,"ERROR","LFERDA",MB_OK | MB_ICONERROR);
    }
    return 0;
}
