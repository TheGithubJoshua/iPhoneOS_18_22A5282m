@class ACUISSystemApertureMetricsRequest, ACUISActivityItemMetricsRequest, _TtC18ActivityUIServices22ActivityMetricsRequest;

@interface ACUISActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices22ActivityMetricsRequest *_metricsRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACUISActivityItemMetricsRequest *lockScreenMetrics;
@property (copy, nonatomic) ACUISSystemApertureMetricsRequest *systemApertureMetrics;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLockScreenMetrics:(id)a0;
- (id)_ACUISItemMetricsRequestFromRequest:(id)a0;
- (id)_activityMetricsRequest;
- (id)_initWithMetricsRequest:(id)a0;

@end
