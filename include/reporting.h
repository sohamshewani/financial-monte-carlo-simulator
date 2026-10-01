```cpp
#ifndef REPORTING_H
#define REPORTING_H

#include <memory>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <iostream>

namespace financial_simulator {

using Report = std::vector<double>;
using ReportCollection = std::vector<Report>;

class Reporting {
public:
    Reporting() = default;
    virtual ~Reporting() = default;

    virtual void compile_reports(const std::shared_ptr<OpportunityCollection>& opportunities, const std::string& file_path) {
        if (!opportunities) {
            throw std::runtime_error("Opportunities are null");
        }
        std::ofstream file(file_path);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
        for (const auto& opportunity : *opportunities) {
            for (const auto& value : opportunity) {
                file << value << ' ';
            }
            file << std::endl;
        }
    }

protected:
    Reporting(const Reporting&) = delete;
    Reporting& operator=(const Reporting&) = delete;
};

} // namespace financial_simulator

#endif // REPORTING_H
```