#include "findStrings.hpp"

/**********************************************************************************
 * PROBLEM: FIND SUBSTRINGS, DIFFICULTY: EXPERT
 * Description: Find all exclusive substrings of all the words contained in
 * vector<strings>.
 *
 * ********************************************************************************
 * REASONING:
 *
 *
 **********************************************************************************/

// for less typing:
using namespace std;

vector<string> findStrings(vector<string> w, vector<int> q) {
  // Result vector:
  vector<string> result;
  /********************************************************************************
   * START OF CODE BODY.
   ********************************************************************************/
  // Extract properties of original vector<strings>: its size & its longest word
  int w_size = w.size();
  int longest_w = 0;
  for (auto i : w) {
    if (longest_w < i.size()) longest_w = i.size();
  }
  // Extract the alphabet or unique letters:
  vector<char> alphabet;

  /********************************************************************************
   * END OF CODE BODY.
   ********************************************************************************/
  return result;
}