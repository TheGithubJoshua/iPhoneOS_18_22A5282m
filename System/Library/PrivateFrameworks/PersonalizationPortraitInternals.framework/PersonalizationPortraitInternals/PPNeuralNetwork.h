@class NSData;

@interface PPNeuralNetwork : NSObject {
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *_layers;
}

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long outputSize;

- (id)init;
- (void)forInputs:(const float *)a0 computeOutputLayer:(float *)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (double)predictWithDoubles:(const double *)a0;
- (double)predictWithFloats:(const float *)a0;

@end
