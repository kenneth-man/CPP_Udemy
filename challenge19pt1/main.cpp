// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

struct City {
    string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

void renderHorizontalLine(int totalWidth, char lineChar) {
	for(int i = 0; i < totalWidth; ++i) {
		cout << lineChar;
		if (i == totalWidth - 1) cout << endl;
	}
}

void renderTitle(int totalWidth, const Tours &tours) { 
	const int centeredTitleJustifyRight {(totalWidth/2) + (totalWidth/4)};

	renderHorizontalLine(totalWidth, '=');

    cout << setw(centeredTitleJustifyRight) << tours.title << endl;

	renderHorizontalLine(totalWidth, '=');

	cout << endl;
}

void renderColumns(int totalWidth, const vector<string> &columns, int columnWidth) {
	int columnIndex {0};

	for(string column:columns) {
		cout << left << setw(columnWidth) << column;
		
		if (columnIndex == static_cast<int>(columns.size() - 1)) cout << endl;

		columnIndex++;
	}

	renderHorizontalLine(totalWidth, '-');
}

void renderRows(int columnWidth, const Tours &tours) {
	for(auto country:tours.countries) {
		int rowIndex {0};
        cout << left << setw(columnWidth) << country.name;

        for(auto city:country.cities) {
			if(rowIndex != 0) cout << setw(columnWidth) << ' ';

            cout
            << left << setw(columnWidth) << city.name 
            << left << setw(columnWidth) << city.population 
            << left << setw(columnWidth) << city.cost 
            << endl;

			// add space between each countrie's cities
			if (rowIndex == static_cast<int>(country.cities.size() - 1)) cout << endl;

			rowIndex++;
        }
    }
}

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
	const int totalWidth {70};
	const vector<string> columns {"Country", "City", "Population", "Price"};
	const int columnWidth {static_cast<int>(
		round(static_cast<double>(
			totalWidth/columns.size()
		))
	)};
	
	renderTitle(totalWidth, tours);
	renderColumns(totalWidth, columns, columnWidth);
	renderRows(columnWidth, tours);

    return 0;
}