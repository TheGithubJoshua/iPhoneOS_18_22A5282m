@class NSArray, NSString;

@interface AFSpeechTestRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *jitContext;
@property (readonly, copy, nonatomic) NSString *overrideModelPath;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJitContext:(id)a0 overrideModelPath:(id)a1;

@end