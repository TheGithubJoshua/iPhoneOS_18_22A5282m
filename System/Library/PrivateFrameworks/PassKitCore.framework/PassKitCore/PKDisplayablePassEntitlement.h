@class PKPassEntitlement, NSString, NSDictionary, NSNumber, PKPassSharedEntitlement;

@interface PKDisplayablePassEntitlement : NSObject <NSSecureCoding, NSCopying> {
    NSString *_entitlementTemplate;
    NSDictionary *_templateFields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedGroup;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) long long groupPriority;
@property (nonatomic) BOOL clearGroupWhenSelected;
@property (readonly, nonatomic) NSString *entitlementIdentifier;
@property (readonly, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) PKPassEntitlement *entitlement;

+ (id)displayableEntitlementFrom:(id)a0 pass:(id)a1;
+ (id)displayableEntitlementFrom:(id)a0 template:(id)a1 pass:(id)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)replaceEntitlementWithSharedEntitlement:(id)a0;

@end
