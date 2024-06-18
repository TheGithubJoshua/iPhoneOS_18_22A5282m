@class NSString;

@interface SVXDeviceSetupFlowDisplayKeyFrame : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyFrameID;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) double duration;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyFrameID:(long long)a0 text:(id)a1 offset:(double)a2 duration:(double)a3;

@end