#pragma once
#include "blocking_overlay.h"
#include "../../hardware/hardware_manager.h"
#include "../../controllers/grind_controller.h"

class UIOperations {
public:
    // Unified tare operation for any screen
    static void execute_tare(HardwareManager* hw_manager, OperationCallback completion = nullptr);
    
    // Unified calibration operation
    static void execute_calibration(HardwareManager* hw_manager, float cal_weight, 
                                   OperationCallback completion = nullptr);
    
    // Grind controller tare (uses grind controller's method)
    static void execute_grind_tare(GrindController* grind_controller, OperationCallback completion = nullptr);
    
    // Custom operation with custom message
    static void execute_custom_operation(const char* message, 
                                        OperationCallback operation,
                                        OperationCallback completion = nullptr);
};
