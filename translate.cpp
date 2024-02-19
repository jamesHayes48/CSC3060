#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, string> instructionDict = {
	{'0', "halt"},
	{'1', "nop"},
	{'2', "rrmovq"},
	{'3', "irmovq"},
	{'4', "rmovq"},
	{'5', "mrmovq"},
	{'6', "OPq"},
	{'7', "jxx"},
	{'8', "call"},
	{'9', "ret"},
	{'a', "pushq"},
	{'b', "popq"},
	{'c', "iOPq"},
	{'f', "brk"}
};

unordered_map<char, string> OPDict = {
	{'0', "addq"},
	{'1', "subq"},
	{'2', "andq"},
	{'3', "xorq"}
};

unordered_map<char, string> iOPDict = {
	{'0', "iaddq"},
	{'1', "isubq"},
	{'2', "iandq"},
	{'3', "ixorq"}
};

unordered_map<char, string> JDict = {
	{'0', "jmp"},
	{'1', "jle"},
	{'2', "jl"},
	{'3', "je"},
	{'4', "jne"},
	{'5', "jge"},
	{'6', "jg"}
};

unordered_map<char, string> regDict = {
	{'0', "%rax"},
	{'1', "%rcx"},
	{'2', "%rdx"},
	{'3', "%rbx"},
	{'4', "%rsp"},
	{'5', "%rbp"},
	{'6', "%rsi"},
	{'7', "%rdi"},
	{'8', "%r8"},
	{'9', "%r9"},
	{'a', "%r10"},
	{'b', "%r11"},
	{'c', "%r12"},
	{'d', "%r13"},
	{'e', "%r14"}
};

string findInstruction(char op[]);
string findRegister(char regs[], int index);
string findDestOrImm(string find);

int main() {
	cout << "Enter hexadecimal and translate it into y86 code :3:" << endl;
	int i = 0;
	char hexCode[800];
	cin.getline(hexCode, 800);
	while (i < strlen(hexCode)) {
			// Grab opcode and registers
			char opCode[2] = {hexCode[i], hexCode[i+1]};
			char reg[2] = { hexCode[i+2], hexCode[i+3] };

			// Grab either displacement or immediate value
			char dissImm[16] = { hexCode[i + 4], hexCode[i + 5], hexCode[i + 6], hexCode[i + 7],
					  hexCode[i + 8], hexCode[i + 9], hexCode[i + 10], hexCode[i + 11],
					  hexCode[i + 12], hexCode[i + 13], hexCode[i + 14], hexCode[i + 15],
					  hexCode[i + 16], hexCode[i + 17], hexCode[i + 18], hexCode[i + 19] };
			// Turn it into a string
			string disImmStr(dissImm, 16);

			// Grab destination
			char destination[16] = { hexCode[i + 2], hexCode[i + 3], hexCode[i + 4], hexCode[i + 5],
					  hexCode[i + 6], hexCode[i + 7], hexCode[i + 11], hexCode[i + 12],
					  hexCode[i + 13], hexCode[i + 14], hexCode[i + 15], hexCode[i + 16],
					  hexCode[i + 17] };
			// Turn destination into string;
			string destStr(destination, 16);

			// Find instruction
			string instruction = findInstruction(opCode);
			if (instruction == "pushq" || instruction == "popq") {
				cout << instruction << " " << findRegister(reg, 0);
					i += 4;
			}
			else if (instruction == "addq" || instruction == "subq" || instruction == "andq" || 
				instruction == "xorq" || instruction == "rrmovq") {
				cout << instruction << " " << findRegister(reg, 0) << ", " << findRegister(reg, 1);
				i += 4;
			}
			else if (instruction == "iaddq" || instruction == "isubq" || instruction == "iandq" 
				|| instruction == "ixorq" || instruction == "irmovq") {
				disImmStr = findDestOrImm(disImmStr);
				cout << instruction << " $0x" << disImmStr << ", " << findRegister(reg, 1);
				i += 20;
			}
			else if (instruction == "mrmovq") {
				disImmStr = findDestOrImm(disImmStr);
				cout << instruction << " $0x" << disImmStr << "(" << findRegister(reg, 0) << "), " << findRegister(reg, 1);
				i += 20;
			}
			else if (instruction == "rmmovq") {
				disImmStr = findDestOrImm(disImmStr);
				cout << instruction << " " << findRegister(reg, 0) << ", 0x" << disImmStr << "(" << findRegister(reg, 1) << ")";
				i += 20;
			}
			else if (instruction == "jmp" || instruction == "jle" || instruction == "jl" ||
				instruction == "je" || instruction == "jne" || instruction == "jge" || 
				instruction == "jg" || instruction == "call") {
				destStr = findDestOrImm(destStr);
				cout << instruction << " 0x" << destStr;
				i += 18;
			}
			else if (instruction == "halt" || instruction == "nop" || instruction == "ret") {
				cout << instruction;
				i += 2;
			}
			else {
				cout << "Invalid instruction entered :[";
			}
			puts("");
	}
	
	return 0;
}

string findInstruction(char op[]) {
	char function = op[0];
	char type = op[1];
	string instruction;
	auto it = instructionDict.find(function);
	switch (function) {
	case '6':
		it = OPDict.find(type);
		switch (type) {
		default:
			instruction = it->second;
			break;
		}
		break;
	case '7':
		it = JDict.find(type);
		switch (type) {
		default:
			instruction = it->second;
			break;
		}
		break;
	case 'c':
		it = iOPDict.find(type);
		switch (type) {
		default:
			instruction = it->second;
			break;
		}
		break;
	default:
		instruction = it->second;
		break;
	}
	return instruction;
}

string findRegister(char regs[], int index) {
	char reg = regs[index];
	auto it = regDict.find(reg);
	if (it != regDict.end()) {
		// Register found, return its value
		return it->second;
	}
	else {
		// Register not found
		return "Unknown register";
	}
}

string findDestOrImm(string find) {
	string dest;
	for (int i = 16; i > 0; i -= 2) {
		string temp = find.substr(i-2, 2);
		dest += temp;
	}
	return dest;
}