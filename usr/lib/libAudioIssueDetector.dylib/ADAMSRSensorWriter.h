@class SRSensorWriter;

@interface ADAMSRSensorWriter : NSObject {
    SRSensorWriter *_writer;
}

@property (readonly, nonatomic) BOOL isValidSRSensorWriterPresent;
@property (readonly, nonatomic) BOOL isMonitoring;

- (void).cxx_destruct;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSensorType:(int)a0;

@end
