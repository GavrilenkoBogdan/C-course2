#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;
class gym {
public:
    void create(string id,string name) {
        mas[i].id = id;
        mas[i].name = name;
        mas[i].pass = 0;
        i++;
        res += "Member "+id+" : "+name+", subsciption for 0 monts\n";
    }
    void del(string id) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].id.clear();
                mas[g].name.clear();
                mas[g].pass = 0;
            }
        }
    }
    void extend(string id, int count) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].pass += count;
                j = g;
            }
        }
        res += ("Member " + id + " : " + mas[j].name + ", subsciption for " + to_string(mas[j].pass) + " monts\n");
    }
    void cancel(string id) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].pass = 0;
            }
        }
    }
    string res;
private:
    struct xx {
        string id, name;
        int pass;
    };
    
    xx mas[10] = {};
    int i = 0, j;
};

int main() {
    string name, id;
    int n,i;
    gym obj;
    string command = "";

    do { 
        command.clear();
        getline(cin, command);
        name.clear();
        id.clear();
        i = 0;

      

        if (command.find("create") != string::npos) {
            command.erase(0, 7);

            while (true)
            {
                if (isdigit(command[i]) == 0) {
                    break;
                }

                id += command[i];
                i++;
         
            }
            command.erase(0, i+1);
            name = command;
            obj.create(id, name);
        }
        else if (command.find("cancel") != string::npos) {
            command.erase(0, 7);
            n = stoi(command);
            obj.cancel(id);
        }
        else if (command.find("extend") != string::npos) {
            command.erase(0, 7);

            while (true)
            {
                if (isdigit(command[i]) == 0) {
                    break;
                }

                id += command[i];
                i++;

            }
            command.erase(0, i + 1);
            n = stoi(command);
            obj.extend(id, n);
            }
        else if (command.find("delete") != string::npos) {
            command.erase(0,7);
            id = command;
            obj.del(id);
        }
    }while(command != "quit");
    cout << obj.res;
    return 0;
}