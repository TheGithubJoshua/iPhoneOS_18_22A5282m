@class NSString, ASDAudioDeviceDSPDatabase, ASDAudioDeviceDSPConfiguration, ASDAudioDevice;

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    NSString *_resourcePath;
}

@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly, nonatomic) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dspItemsInConfiguration:(id)a0 notInConfiguration:(id)a1;

- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (void)setSamplingRate:(double)a0;
- (id)modelName;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)outputLatency;
- (id)samplingRates;
- (id)manufacturerName;
- (id)modelUID;
- (unsigned int)inputLatency;
- (unsigned int)clockAlgorithm;
- (id)deviceName;
- (double)samplingRate;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (unsigned int)transportType;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)clockIsStable;
- (BOOL)updateDeviceDSPConfiguration;
- (BOOL)canBeDefaultOutputDevice;
- (id)driverClassName;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)isHidden;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (int)startIOForClient:(unsigned int)a0;
- (void).cxx_destruct;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (unsigned int)outputSafetyOffset;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (void)addInputStream:(id)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (BOOL)canBeDefaultSystemDevice;
- (BOOL)canBeDefaultDevice;
- (id /* block */)willDoReadInputBlock;
- (BOOL)changeSamplingRate:(double)a0;
- (void)removeOutputStream:(id)a0;
- (id /* block */)willDoWriteMixBlock;
- (unsigned int)inputSafetyOffset;
- (void)addOutputStream:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)removeInputStream:(id)a0;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (unsigned int)timestampPeriod;

@end
