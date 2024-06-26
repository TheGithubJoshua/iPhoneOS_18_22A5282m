@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>

@property (weak) SRSensorWriter *writer;

+ (id)sensorWriterClientWithWriter:(id)a0;

- (void)setMonitoring:(BOOL)a0 withRequestedConfigurations:(id)a1;
- (void).cxx_destruct;
- (id)initWithWriter:(id)a0;
- (void)resetDatastoreFiles:(id)a0;

@end
