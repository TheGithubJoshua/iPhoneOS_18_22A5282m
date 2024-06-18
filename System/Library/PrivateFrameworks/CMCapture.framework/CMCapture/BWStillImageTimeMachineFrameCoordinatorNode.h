@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings;

@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSMutableDictionary *_portTypeToFrameCounts;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
}

+ (void)initialize;

- (id)outputForPortType:(id)a0;
- (id)inputForPortType:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)initWithPortTypes:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;

@end
