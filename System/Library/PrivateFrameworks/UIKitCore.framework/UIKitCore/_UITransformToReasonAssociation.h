@class UITransform, NSString;

@interface _UITransformToReasonAssociation : NSObject

@property (retain, nonatomic) UITransform *transform;
@property (copy, nonatomic) NSString *reason;

+ (id)association:(id)a0 reason:(id)a1;

- (id)initWithTransform:(id)a0 reason:(id)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
