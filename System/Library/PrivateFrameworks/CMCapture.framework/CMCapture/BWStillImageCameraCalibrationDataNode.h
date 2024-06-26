@class NSSet, NSDictionary, BWStillImageCaptureSettings, NSMutableDictionary, FigCalibration;

@interface BWStillImageCameraCalibrationDataNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    BOOL _propagatesDetectedObjects;
    NSDictionary *_baseZoomFactorsByPortType;
    NSSet *_expectedPortTypes;
    BWStillImageCaptureSettings *_captureSettings;
    int _processingMode;
    NSMutableDictionary *_inputSbufsByPortType;
    FigCalibration *_calibrationProcessor;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)baseZoomFactorsByPortType;
- (void)setBaseZoomFactorsByPortType:(id)a0;
- (id)initWithSensorConfigurationsByPortType:(id)a0;
- (BOOL)propagatesDetectedObjects;
- (void)setPropagatesDetectedObjects:(BOOL)a0;

@end
