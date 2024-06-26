@class SoftISPOutputFrame, SoftISPInputFrame, SoftISPConfig, NSString, SoftISPBounds;
@protocol MTLTexture;

@interface H13FastRawScaleStageArgs : NSObject <SoftISPStageArgs> {
    id<MTLTexture> _inputTex;
    id<MTLTexture> _outputTex;
}

@property (retain, nonatomic) id<MTLTexture> inputTex;
@property (retain, nonatomic) id<MTLTexture> outputTex;
@property (retain, nonatomic) SoftISPConfig *config;
@property (retain, nonatomic) SoftISPInputFrame *inputFrame;
@property (retain, nonatomic) SoftISPOutputFrame *outputFrame;
@property (retain, nonatomic) SoftISPBounds *bounds;
@property (retain, nonatomic) id<MTLTexture> inputLumaTex;
@property (retain, nonatomic) id<MTLTexture> inputChromaTex;
@property (retain, nonatomic) id<MTLTexture> outputLumaTex;
@property (retain, nonatomic) id<MTLTexture> outputChromaTex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;

@end
