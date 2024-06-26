@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {
    NSMutableArray *_initialSamples;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initialSamples;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (void)setInitialSamples:(id)a0;

@end
