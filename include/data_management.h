```cpp
#ifndef DATA_MANAGEMENT_H
#define DATA_MANAGEMENT_H

#include <vector>
#include <string>
#include <memory>
#include <stdexcept>

namespace financial_simulator {

using Data = std::vector<double>;
using DataCollection = std::vector<Data>;

class DataManagement {
public:
    DataManagement() = default;
    virtual ~DataManagement() = default;

    virtual std::shared_ptr<DataCollection> load_data(const std::string& file_path) = 0;

    virtual void validate_data(const std::shared_ptr<DataCollection>& data) {
        if (!data) {
            throw std::runtime_error("Data is null");
        }
    }

protected:
    DataManagement(const DataManagement&) = delete;
    DataManagement& operator=(const DataManagement&) = delete;
};

} // namespace financial_simulator

#endif // DATA_MANAGEMENT_H
```