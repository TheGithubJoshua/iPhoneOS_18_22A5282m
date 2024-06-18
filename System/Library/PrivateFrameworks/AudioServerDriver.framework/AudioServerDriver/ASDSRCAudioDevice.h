@class NSString, NSArray, NSObject, ASDAudioDevice;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct { unsigned char valid; double sampleTime; unsigned long long hostTime; unsigned long long seed; } _lastTimestamp;
}

@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (void)setSamplingRate:(double)a0;
- (id)modelName;
- (id /* block */)getZeroTimestampBlock;
- (id)samplingRates;
- (id)manufacturerName;
- (id)modelUID;
- (int)performStopIO;
- (unsigned int)clockAlgorithm;
- (id)deviceName;
- (double)samplingRate;
- (double)sampleRateRatio;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (unsigned int)transportType;
- (BOOL)clockIsStable;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)isHidden;
- (int)startIOForClient:(unsigned int)a0;
- (void).cxx_destruct;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (unsigned int)outputSafetyOffset;
- (void)setSamplingRates:(id)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (BOOL)canBeDefaultSystemDevice;
- (BOOL)canBeDefaultDevice;
- (id /* block */)willDoReadInputBlock;
- (BOOL)changeSamplingRate:(double)a0;
- (id /* block */)willDoWriteMixBlock;
- (unsigned int)inputSafetyOffset;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (unsigned int)timestampPeriod;

@end
