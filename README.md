# TheoryOfComputation 📘 (C++ Only)

A curated set of C++ implementations for core concepts in the **Theory of Computation** — from DFA/NFA to Turing Machines and grammar parsing.  
Developed and maintained by **Sakiba Belal**, a Software Engineering student at NSTU.

---

## 🧭 Table of Contents

- [Overview](#overview)  
- [Folder Structure](#folder-structure)  
- [Setup & Compilation](#setup--compilation)  
- [Usage Examples](#usage-examples)  
- [Implemented Topics](#implemented-topics)  
- [Contributing](#contributing)  
- [Author](#author)  
- [License](#license)  

---

## Overview

This repository is designed to help students understand the implementation of automata, grammar, and computability concepts using **C++ only**. Topics are written in a way that combines code clarity with theoretical understanding.

---

## Folder Structure

```text
/
├─ dfa_nfa/           ← DFA, NFA, and ε-NFA implementations
├─ regex/             ← Regex to NFA/DFA (Thompson's construction)
├─ grammar/           ← CFG parser and simplifier
├─ tm/                ← Basic Turing Machine simulator
├─ complexity/        ← Time & space complexity theory (notes/code)
└─ README.md
Setup & Compilation
You’ll need:

A C++ compiler (e.g. g++, clang++)

A terminal or IDE like Code::Blocks / VS Code with g++ support

To compile any file:

g++ filename.cpp -o output
./output
Example:

g++ dfa_nfa/dfa_simulator.cpp -o dfa
./dfa
Usage Examples
Simulate a DFA:

g++ dfa_nfa/dfa_simulator.cpp -o dfa
./dfa
Convert Regex to NFA:


g++ regex/regex_to_nfa.cpp -o regex
./regex
Run Turing Machine:

g++ tm/tm_simulator.cpp -o tm
./tm
Implemented Topics
Topic	File/Folder	Description
DFA/NFA Simulator	dfa_nfa/dfa_simulator.cpp	Simulate deterministic & non-deterministic automata
Regex → NFA	regex/regex_to_nfa.cpp	Thompson’s construction method
CFG Parser	grammar/cfg_parser.cpp	Parse and validate input strings with CFG
Turing Machine	tm/tm_simulator.cpp	Simulate basic TM read-write operations
Time/Space Complexity: complexity/	Examples and notes on theoretical bounds

Contributing
Feel free to contribute!
Please make sure:

Your code is in C++

It's related to the Theory of Computation

Well-documented with comments or usage instructions
