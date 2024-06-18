@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSString *_portType;
    NSDictionary *_noiseReductionAndSharpeningConfiguration;
}

- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (id)portType;
- (id)noiseReductionAndSharpeningConfigurationForType:(int)a0 gain:(float)a1;
- (id)description;
- (void)dealloc;

@end
