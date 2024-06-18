@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARMLImageProcessingTechnique : ARImageBasedTechnique <ARTechniqueBusyState> {
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prepLock;
    double _espressoInputBufferTimestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _espressoInputBufferLock;
    void *_espressoContext;
    void *_espressoPlan;
    struct { void *plan; int network_index; } _espressoNetwork;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } _espressoOutputTensors;
    struct vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> { struct __CVPixelBufferPool **__begin_; struct __CVPixelBufferPool **__end_; struct __compressed_pair<__CVPixelBufferPool **, std::allocator<__CVPixelBufferPool *>> { struct __CVPixelBufferPool **__value_; } __end_cap_; } _espressoOutputBufferPools;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } _espressoInputTensors;
    BOOL _hasBegunPrep;
    BOOL _delegateInference;
    struct __CVPixelBufferPool { } *_bgraPixelBufferPool;
    NSString *_previous_network_configuration;
    int _lockedOrientation;
    BOOL _deterministic;
}

@property BOOL prepComplete;
@property (retain, nonatomic) NSString *networkFilePath;
@property (readonly, nonatomic) NSArray *inputTensorNames;
@property (readonly, nonatomic) NSArray *outputTensorNames;
@property (nonatomic) struct CGSize { double width; double height; } allowedResamplingImageSize;
@property BOOL networkHasConfigurations;
@property (readonly, nonatomic) NSString *networkVersionString;
@property (readonly, nonatomic) BOOL failedToLoadNetwork;
@property (readonly, nonatomic) struct CGSize { double width; double height; } networkInputScaleBeforeRotation;
@property (nonatomic) BOOL useEspressoZeroCopyOutput;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (int)defaultEngine;
- (id)processData:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (long long)captureBehavior;
- (struct { void *x0; int x1; })espressoNetwork;
- (BOOL)ARMLVerifyLoadedModelVersion:(id)a0 deviceName:(id)a1 major:(int)a2 minor:(int)a3;
- (void)_asynchronousProcessDownSampledImage:(id)a0;
- (void)_asynchronousProcessEspressoTensor:(id)a0;
- (void)_bindOutputTensor;
- (void)_captureMLRunNetworkInputImageData:(double)a0 cameraType:(long long)a1 imageWidth:(unsigned long long)a2 imageHeight:(unsigned long long)a3;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_prepareOnce:(BOOL)a0;
- (id)_resampleImage:(id)a0 rotationOfResultTensor:(long long)a1 networkInputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_runNeuralNetworkAndPushResult:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (int)bindInputBuffer:(unsigned long long)a0 withImage:(id)a1 andOriginalImageData:(id)a2 rotationOfResultTensor:(long long)a3;
- (void)changeEspressoConfig:(id)a0;
- (id)createResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 numberOfOutputTensors:(unsigned long long)a1 imageDataForNeuralNetwork:(id)a2 inputImageData:(id)a3 rotationNeeded:(long long)a4 regionOfInterest:(struct CGSize { double x0; double x1; })a5;
- (id)defaultEngineName;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)espressoInputTensorsData;
- (unsigned long long)espressoInputTensorsSize;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)espressoOutputTensorsData;
- (unsigned long long)espressoOutputTensorsSize;
- (void *)espressoPlan;
- (long long)getDeviceOrientationFromImageData:(id)a0;
- (id)initWithDispatchQueue:(id)a0 inputTensorNames:(id)a1 outputTensorNames:(id)a2 networkInputScaleBeforeRotation:(struct CGSize { double x0; double x1; })a3 networkFilePath:(id)a4;
- (id)initWithDispatchQueue:(id)a0 inputTensorNames:(id)a1 outputTensorNames:(id)a2 networkInputScaleBeforeRotation:(struct CGSize { double x0; double x1; })a3 networkFilePath:(id)a4 useEspressoZeroCopyOutput:(BOOL)a5;
- (id)initWithDispatchQueue:(id)a0 networkInputScaleBeforeRotation:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDispatchQueue:(id)a0 networkInputScaleBeforeRotation:(struct CGSize { double x0; double x1; })a1 delegateInference:(BOOL)a2;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (void)loadMLWithPath:(id)a0 networkMode:(id)a1;
- (void)lockOrientation:(long long)a0;
- (struct { float x0; float x1; float x2; float x3; BOOL x4; })networkInputParams;
- (void)networkModeDidChange:(id)a0 toMode:(id)a1;
- (id)networkModesForOrientation:(long long)a0;
- (BOOL)networkProvidesConfigurationsForDeviceOrientation;
- (long long)numberOfInputChannelsToExpectInNetwork;
- (long long)orientationForInitializingEspresso;
- (BOOL)preProcessNetworkInputImage:(struct __CVBuffer { } *)a0;
- (int)prepareBindInputBuffer:(unsigned long long)a0 withName:(id)a1;
- (id)processEspressoTensor:(id)a0;
- (id)processImageDataThroughNeuralNetwork:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;
- (id)processingSemaphore;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;
- (BOOL)shouldUseSynchronizedUltraWide;
- (void)waitForProcessingCompleteInDeterministicMode;

@end