@class NSString;
@protocol MTLTexture;

@interface RawDFDownsampleRequest : NSObject

@property (nonatomic) unsigned long long downsampleLevel;
@property (nonatomic) int outputType;
@property (retain, nonatomic) NSString *outputTexLabel;
@property (retain, nonatomic) id<MTLTexture> outputTex;

- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseOutputTexture;

@end
