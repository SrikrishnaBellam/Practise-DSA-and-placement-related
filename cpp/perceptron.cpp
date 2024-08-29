#include <iostream>
#include <vector>

using namespace std;

class Perceptron {
    public:
        vector<float> weights;
        float learning_rate;
        int epochs;

        Perceptron(int inputSize, float learning_rate = 0.1, int epochs = 1000) {
            this -> weights.resize(inputSize + 1, 0.0f);
            this -> learning_rate = learning_rate;
            this -> epochs = epochs;
        }

        int activationFunction(float x) {
            return (x >= 0) ? 1 : 0;
        }

        int predict(vector<float> & x) {
            float sum = weights[0];
            for (size_t i = 0; i < x.size(); ++i) {
                sum += x[i] * weights[i + 1];
            }
            return activationFunction(sum);
        }

        void train(vector<vector<float>> & X, vector<int> & y) {
            for (int epoch = 0; epoch < epochs; ++epoch) {
                for (size_t i = 0; i < X.size(); ++i) {
                    int prediction = predict(X[i]);
                    int error = y[i] - prediction;

                    weights[0] += learning_rate * error;
                    for (size_t j = 0; j < X[i].size(); ++j) {
                        weights[j+1] += learning_rate * error * X[i][j];
                    }
                }
            }
        }
};

int main() {
    vector<vector<float>> X = {
        {0,0},
        {0,1},
        {1,0},
        {1,1}
    };

    vector<int> y = {0, 1, 1, 0};

    Perceptron perceptron(2);
    perceptron.train(X, y);

    cout << "SLP Prediction for XOR: " << endl;
    for (auto& x: X){
        cout << perceptron.predict(x) << " ";
    }

    cout << endl;

    return 0;
}