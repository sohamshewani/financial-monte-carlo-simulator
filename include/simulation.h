```cpp
#ifndef SIMULATION_H
#define SIMULATION_H

#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

namespace financial_simulator {

using Scenario = std::vector<double>;
using ScenarioCollection = std::vector<Scenario>;

class Simulation {
public:
    Simulation() = default;
    virtual ~Simulation() = default;

    virtual std::shared_ptr<ScenarioCollection> generate_scenarios(const std::shared_ptr<DataManagement>& data_management, size_t num_scenarios) = 0;

protected:
    Simulation(const Simulation&) = delete;
    Simulation& operator=(const Simulation&) = delete;
};

} // namespace financial_simulator

#endif // SIMULATION_H
```