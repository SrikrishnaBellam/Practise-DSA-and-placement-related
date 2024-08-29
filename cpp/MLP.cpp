#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

float sigmoid(float x) {
    return 1.0 / (1.0 + exp(-x));
}

float sigmoidDerivation(float x) {
    return x * (1.0 - x);
}

class MLP {
    public:
        vector<vector<float>> weights_inputs_hidden;
        vector<float> weights_output_hidden;
        vector<float> hidden_layer;
        float learning_rate;

        MLP(int inputSize, int hiddenSize, float learning_rate = 0.1) {
            weights_inputs_hidden.resize(inputSize, vector<float>(hiddenSize));
            weights_output_hidden.reserve(hiddenSize);
            hidden_layer.resize(hiddenSize);
            this -> learning_rate = learning_rate;

            for (int i = 0; i < inputSize; ++i) {
                for (int j = 0; j < hiddenSize; ++j) {
                    weights_inputs_hidden[i][j] = static_cast<float>(rand()) / RAND_MAX;
                }
            }

            for(int j = 0; j < hiddenSize; ++j) {
                weights_output_hidden[j] = static_cast<float>(rand()) / RAND_MAX;
            } 
        }

        float forward(vector<float>& x) {
            for (int j = 0; j < hidden_layer.size(); ++j) {
                hidden_layer[j] = 0.0;
                for (int i = 0; i < x.size(); ++i) {
                    hidden_layer[j] += x[i] * weights_inputs_hidden[i][j];
                }
                hidden_layer[j] = sigmoid(hidden_layer[j]);
            }

            float output = 0.0;
            for (int j = 0; j < hidden_layer.size(); ++j) {
                output += hidden_layer[j] * weights_output_hidden[j];
            }

            return sigmoid(output);
        }

        void backward(vector<float>& x,float target, float output) {
            float outputError = target - output;
            float outputDelta = outputError * sigmoidDerivation(output);

            for (int j = 0; j < hidden_layer.size(); ++j) {
                weights_output_hidden[j] += learning_rate * outputDelta * hidden_layer[j];
            }

            for (int j = 0; j < hidden_layer.size(); ++j){
                float hiddenError = outputDelta * weights_output_hidden[j];
                float hiddenDelta = hiddenError * sigmoidDerivation(hidden_layer[j]);

                for (int i = 0; i < x.size(); ++i) {
                    weights_inputs_hidden[i][j] += learning_rate * hiddenDelta * x[i];
                }
            }
        }

        void train(vector<vector<float>>& X, vector<float>& y, int epochs = 10000) {
            for (int epoch = 0; epoch < epochs; ++epoch) {
                for (size_t i = 0; i < X.size(); ++i) {
                    float output = forward(X[i]);
                    backward(X[i], y[i], output);
                }
            }
        }

        float predict(vector<float>& x) {
            return forward(x);
        }
};

int main() {
    vector<vector<float>> X = {
        {0,0},
        {0,1},
        {1,0},
        {1,1}
    };

    vector<float> y = {0, 1, 1, 0};

    MLP mlp(2,2);
    mlp.train(X,y);

    cout << "MLP Predictions for XOR: " << endl;

    for (auto& x : X) {
        cout << round(mlp.predict(x)) << " ";
    }
    cout << endl;
    return 0;
}