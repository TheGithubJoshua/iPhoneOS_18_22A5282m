@class NSString;

@interface BWDeferredInferenceBufferIntermediate : BWDeferredBufferIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachedMediaKey;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_shortString;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 inferenceAttachedMediaKey:(id)a2 portType:(id)a3 compressionProfile:(int)a4 URL:(id)a5;

@end
