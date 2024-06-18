@class SFAcousticFeature;

@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SFAcousticFeature *jitter;
@property (readonly, copy, nonatomic) SFAcousticFeature *shimmer;
@property (readonly, copy, nonatomic) SFAcousticFeature *pitch;
@property (readonly, copy, nonatomic) SFAcousticFeature *voicing;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithJitter:(id)a0 shimmer:(id)a1 pitch:(id)a2 voicing:(id)a3;

@end
