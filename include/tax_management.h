```cpp
#ifndef TAX_MANAGEMENT_H
#define TAX_MANAGEMENT_H

#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

namespace financial_simulator {

using HarvestOpportunity = std::vector<double>;
using OpportunityCollection = std::vector<HarvestOpportunity>;

class TaxManagement {
public:
    TaxManagement() = default;
    virtual ~TaxManagement() = default;

    virtual std::shared_ptr<OpportunityCollection> analyze_for_tax_loss_harvesting(const std::shared_ptr<Simulation>& simulation) = 0;

protected:
    TaxManagement(const TaxManagement&) = delete;
    TaxManagement& operator=(const TaxManagement&) = delete;
};

} // namespace financial_simulator

#endif // TAX_MANAGEMENT_H
```