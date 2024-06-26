@class AUAudioUnitOfflineProcessor, NSMutableArray, AUPasscodeDecoder;

@interface APCDecoderProcessor : NSObject {
    AUPasscodeDecoder *_decoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    NSMutableArray *_payloadsReceived;
}

- (void).cxx_destruct;
- (id)run;
- (BOOL)getResultData:(id *)a0;
- (id)initWithInputURL:(id)a0 codecConfig:(id)a1 error:(id *)a2;
- (id)initWithInputURL:(id)a0 codecConfig:(id)a1 resultData:(id)a2 error:(id *)a3;

@end
