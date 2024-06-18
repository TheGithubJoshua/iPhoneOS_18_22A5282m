@class SiriContextOverride, AFSpeechRequestOptions;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (id)initWithCoder:(id)a0;
- (id)initWithSpeechRequestOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContextOverride:(id)a0;

@end
