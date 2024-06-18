@class NSDictionary, NSString;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *metricsByFamily;
@property (readonly, copy, nonatomic) NSDictionary *alternatesByFamily;
@property (readonly, nonatomic) unsigned long long families;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMetricsByFamily:(id)a0 alternates:(id)a1;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetricsSpecification:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)alternateMetricsForFamily:(long long)a0;
- (id)metricsForFamily:(long long)a0;

@end
