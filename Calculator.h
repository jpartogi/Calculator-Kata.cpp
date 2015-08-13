#include <string>

using namespace std;

namespace CalculatorKata {
	class Calculator {
	public:
		virtual ~Calculator() {};
		virtual int add(const std::string& text);
	};
}