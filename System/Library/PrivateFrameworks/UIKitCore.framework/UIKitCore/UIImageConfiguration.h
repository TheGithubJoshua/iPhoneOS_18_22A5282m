@class NSString, UITraitCollection;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _ignoresDynamicType;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)configurationByApplyingConfiguration:(id)a0;
- (id)_configurationIgnoringDynamicType;
- (BOOL)isEquivalentToConfiguration:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)configurationWithTraitCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTraitCollection:(id)a0;
- (BOOL)_isUnspecified;
- (BOOL)_hasColorConfigurationWithTintColor;
- (BOOL)_shouldApplyConfiguration:(id)a0;
- (void)_applyConfigurationValuesTo:(id)a0;

@end
