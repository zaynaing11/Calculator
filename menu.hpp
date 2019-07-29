#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <vector>
#include <string>
#include "command.hpp"

using namespace std;

class Menu {
	private:
		int history_index;	// Indexes which command was last executed, accounting for undo and redo functions
		vector<Command*> history; // Holds all the commands that have been executed

	public:
		Menu(){ // Constructor which initializes the internal memebrs
			history_index = 0;
		}

		string execute(){ // Returns the string converted evaluations of the current command
			//str = to_string(history.at(history_index));
			//return str->execute()
			Command* comm = get_command();
                        return  to_string(comm->execute());
		}
		string stringify(){ // Returns the stringified version of the current command
			Command* comm = get_command();
			return comm->stringify();
		}
		bool initialized(){// Returns if the history has an InitialCommand, which is necessary to start the calculation
			return history.size();
		}
		void add_command(Command* cmd){
			// Adds a command to the history (does not execute it), this may require removal of some other commands depending on where history_index is
			vector <Command*>::iterator it = history.begin();
			int count = history_index + 1;
			
			if(history.empty()){
				history.push_back(NULL);
				history.push_back(cmd);
				history_index++;
			}else{
				if(history_index == history.size() - 1){
					history.push_back(cmd);
					history_index++;
				}else{
					while(count != 0){
						it++;
						count--;
					}
					history.at(history_index + 1) = cmd;
					history_index++;
				}
			}
		}
		Command* get_command(){ // Returns the command that the history_index is currently referring to
			return history.at(history_index);
		}
		void undo(){ // Move back one command (does not execute it) if there is a command to undo
			//if(initialized() == true){
			//	history_index--;
			//}
			if(history_index == 1){
				return;
			}
			history_index--;
		}
		void redo(){ // Moves forward one command (does not execute it) if there is a command to redo
			if(history_index == history.size() - 1){
				return;
			}
			history_index++;
		}

};
#endif
