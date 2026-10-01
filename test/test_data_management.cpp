```cpp
#include <gtest/gtest.h>
#include "data_management.h"

TEST(DataManagementTest, LoadData) {
    // Test case to check if data can be loaded
    // Dummy implementation for testing
    auto data_management = std::make_shared<DataManagement>();
    auto data_collection = data_management->load_data("dummy_path.txt");
    ASSERT_TRUE(data_collection != nullptr);
}

```