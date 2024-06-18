@class NSArray, CHSWidgetMetricsSpecification;

@interface CHSWidgetConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *containerDescriptors;
@property (readonly, copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithContainerDescriptors:(id)a0 metricsSpecification:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
