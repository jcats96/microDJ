var MyController = {};

MyController.init = function(id, debugging) {
    // Initialization code if needed
};

MyController.shutdown = function() {
    // Shutdown code if needed
};

// Function to handle the rotation of the encoder
MyController.rotaryTurn = function(channel, control, value, status, group) {
    // For relative control change, we need to interpret the value
    var newValue = (value < 64) ? value : value - 128;
    print(value);
    // Calculate the amount to seek
    var seekAmount = newValue * 0.005; // Adjust this multiplier to change sensitivity
    
    // Get the current playposition
    var currentPosition = engine.getValue("[Channel1]", "playposition");
    
    // Calculate the new position
    var newPosition = currentPosition + seekAmount;
    
    // Ensure the new position is within bounds (0 to 1)
    newPosition = Math.max(0, Math.min(1, newPosition));
    
    // Set the new playposition
    engine.setValue("[Channel1]", "playposition", newPosition);
};