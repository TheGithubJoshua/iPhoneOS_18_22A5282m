@class JDJasperModuleCalibrationData, JDCameraCalibrationData;

@interface JDDepthProcessor : NSObject {
    JDJasperModuleCalibrationData *_moduleCalib;
    JDCameraCalibrationData *_cameraCalib;
    struct JasperAlgo { struct unique_ptr<JasperAlgo::Impl, std::default_delete<JasperAlgo::Impl>> { struct __compressed_pair<JasperAlgo::Impl *, std::default_delete<JasperAlgo::Impl>> { struct Impl *__value_; } __ptr_; } _impl; } _algo;
    struct __CVDataBufferPool { } *_dataBufferPool;
    struct BridgeProvider { void /* function */ **x0; id x1; int x2; } *_bridgeProvider;
}

@property (readonly) unsigned long long requiredStorageBytesForGeneratedPointClouds;
@property BOOL outputAdditionalEchos;
@property BOOL producePointCloudsWithCalibration;

+ (struct JDFrameConfigOverrides { float x0; })defaultFrameConfigOverrides;
+ (int)resolvePreset:(int)a0;

- (void)setInternalState:(id)a0;
- (void)setDelegate:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (id)generatePointCloudFromRawFrame:(id)a0;
- (id)initWithSystemCalibrationData:(id)a0;
- (void)setGmoDebugMode;
- (id)generateFrameConfigsForPreset:(int)a0 withOptions:(id)a1;
- (id)getInternalState;
- (BOOL)prepareForJasperPreset:(int)a0;
- (BOOL)reportSessionStatistics;
- (BOOL)setDataBufferPool:(struct __CVDataBufferPool { } *)a0;
- (void)setGmoFlowBitmap:(unsigned int)a0;
- (void)startNewStatisticsSession;
- (BOOL)prepareDataPool;
- (void)setGmoProvider:(id)a0;
- (id)generateFrameConfigsForPreset:(int)a0 overrides:(struct FrameConfigOverrides { float x0; double x1; BOOL x2; BOOL x3; BOOL x4; int x5; int x6; } *)a1;
- (id)generateFrameConfigsForPreset:(int)a0 withOverrides:(struct JDFrameConfigOverrides { float x0; } *)a1;
- (id)generatePointCloudFromRawFrame:(id)a0 usingDataBuffer:(struct __CVBuffer { } *)a1;

@end
