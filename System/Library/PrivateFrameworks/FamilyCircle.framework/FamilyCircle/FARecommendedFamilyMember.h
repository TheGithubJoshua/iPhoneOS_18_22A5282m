@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *iMessageHandle;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_safeClasses;
- (id)contactFromRecommendationWithIdentifier:(id)a0;
- (id)initWithRecommendation:(id)a0;

@end
