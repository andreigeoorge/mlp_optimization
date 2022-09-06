#ifndef PARAMETERS_H
#define PARAMETERS_H


#define NONE    0x00
#define AVX512  0x01
#define AVX2    0x02

#define OPTIMIZATION    NONE

typedef struct {
    int n_hidden;
    int* hidden_layers_size;
    int* hidden_activation_functions;
    double learning_rate;
    int n_iterations_max;
    int momentum;
    int output_layer_size;
    int output_activation_function;
    double** data_train;
    double** data_test;
    int feature_size;
    int train_sample_size;
    int test_sample_size;
    double*** weight;
} parameters;

#endif