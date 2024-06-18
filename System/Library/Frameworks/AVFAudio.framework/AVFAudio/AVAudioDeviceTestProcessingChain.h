@class NSURL;

@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *graphURL;
@property (retain, nonatomic) NSURL *processingStripURL;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
