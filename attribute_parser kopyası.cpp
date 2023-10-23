#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

/**
 * @brief Main function that processes XML-like input data and responds to queries.
 *
 * This program reads XML-like data, extracts attribute values, and allows users to query
 * attribute values based on tag names and attribute names.
 */
int main() {
    int n, q;
    string curr = "", attr_name;
    map<string, string> m;
    cin >> n >> q;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);

        while (getline(ss, extract, ' ')) {
            if (extract[0] == '<') {
                if (extract[1] != '/') {
                    // Opening tag
                    tag = extract.substr(1);
                    if (tag[tag.length() - 1] == '>') {
                        tag.pop_back();
                    }
                    if (curr.size() > 0) {
                        curr += "." + tag;
                    }
                    else {
                        curr = tag;
                    }
                }
                else {
                    // Closing tag
                    tag = extract.substr(2, (extract.find('>') - 2));
                    size_t pos = curr.find("." + tag);
                    if (pos != string::npos) {
                        curr = curr.substr(0, pos);
                    }
                    else {
                        curr = "";
                    }
                }
            }
            else if (extract[0] == '"') {
                // Attribute value
                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos - 1);
                m[attr_name] = attr_value;
            }
            else {
                if (extract != "=") {
                    // Attribute name
                    attr_name = curr + "~" + extract;
                }
            }
        }
    }

    string query; // Query input
    for (int i = 0; i < q; i++) {
        getline(cin, query);

        // Search for the query in the attribute map
        map<string, string>::iterator itr = m.find(query);
        if (itr != m.end()) {
            cout << itr->second << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}

