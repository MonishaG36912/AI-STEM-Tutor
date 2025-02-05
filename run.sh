#!/bin/bash

# Activate the Python virtual environment
echo "Activating virtual environment..."
source python_ai/venv/bin/activate

# Install dependencies (if they haven't been installed already)
echo "Installing Python dependencies..."
pip install -r requirements.txt

# Run the Python backend (Flask API)
echo "Starting the Python backend (Flask API)..."
python3 python_ai/api.py &  # Run Python backend in the background

# Optional: Compile and run the C++ application
# Uncomment if you need to compile and run C++ code as well
# echo "Compiling C++ code..."
# g++ -o tutor src/main.cpp src/tutor.cpp src/ai_connector.cpp -Iinclude
# ./tutor

echo "Setup complete. Your application is running."
