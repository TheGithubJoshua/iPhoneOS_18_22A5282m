@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float retrievalCallbackInterval;

- (id)initWithCoder:(id)a0;
- (void)setDefaultValues;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)commandLineOptions;
- (id)initWithCommandLineArgs:(id)a0;

@end
