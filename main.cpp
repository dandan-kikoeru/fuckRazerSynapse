#include <windows.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
  ShowWindow(GetConsoleWindow(), SW_HIDE);
  string processes[] = {
      "GameManagerService.exe",
      "Razer Central.exe",
      "Razer Synapse 3.exe",
      "Razer Synapse Service Process.exe",
      "Razer Synapse Service.exe",
      "RazerCentralService.exe",
      "RzAppManager",
      "RzChromaStreamServer.exe",
      "RzDiagnostic",
      "RzIoTDeviceManager",
      "RzSDKServer.exe",
      "RzSDKService.exe",
      "RzSmartlightingDeviceManager",
  };
  for (string process : processes)
  {
    string command = "taskkill /f /im \"" + process + "\"";
    system(command.c_str());
  }
  return 0;
}