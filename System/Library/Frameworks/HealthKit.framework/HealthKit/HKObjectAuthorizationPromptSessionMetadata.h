@class HKObjectType, NSArray;

@interface HKObjectAuthorizationPromptSessionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKObjectType *expectedObjectType;
@property (copy, nonatomic) NSArray *recordTypes;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExpectedObjectType:(id)a0;

@end
