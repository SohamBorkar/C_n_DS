#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STATES 10
#define MAX_INPUTS 5

// A structure to represent a transition in the transition table
struct Transition {
  int next_state;
  char input;
};

// A structure to represent a state in the transition table
struct State {
  int id;
  int is_final;
  struct Transition transitions[MAX_INPUTS];
};

// A structure to represent the transition table
struct TransitionTable {
  int num_states;
  int num_inputs;
  char input_symbols[MAX_INPUTS];
  struct State states[MAX_STATES];
};

// Function prototypes
void create_transition_table(char* regex, struct TransitionTable* table);
int get_next_state(struct TransitionTable* table, int current_state, char input);

int main(int argc, char** argv) {
  // Check if a regular expression was provided as a command-line argument
  if (argc < 2) {
    printf("Error: No regular expression provided\n");
    return 1;
  }
  // argv[1] = "a*ba*b";

  // Create the transition table for the regular expression
  struct TransitionTable table;
  create_transition_table(argv[1], &table);

  // Print the transition table
  printf("Transition Table:\n");
  printf("  States: %d\n", table.num_states);
  printf("  Inputs: %d\n", table.num_inputs);
  printf("  Input Symbols: ");
  for (int i = 0; i < table.num_inputs; i++) {
    printf("%c ", table.input_symbols[i]);
  }
  printf("\n");
  for (int i = 0; i < table.num_states; i++) {
    struct State* state = &table.states[i];
    printf("  State %d (%s):\n", state->id, state->is_final ? "final" : "non-final");
    for (int j = 0; j < table.num_inputs; j++) {
      struct Transition* transition = &state->transitions[j];
      printf("    %c -> %d\n", transition->input, transition->next_state);
    }
  }

  return 0;
}

// Function to create the transition table for a regular expression
void create_transition_table(char* regex, struct TransitionTable* table) {
  // TODO: Implement this function
}

// Function to get the next state given the current state and input symbol
int get_next_state(struct TransitionTable* table, int current_state, char input) {
  // TODO: Implement this function
  return 0;
}