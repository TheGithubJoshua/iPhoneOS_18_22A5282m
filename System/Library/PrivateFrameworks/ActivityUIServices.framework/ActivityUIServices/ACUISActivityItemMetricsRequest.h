@class ACUISSizeDimensionRequest, ACUISEdgeInsets, _TtC18ActivityUIServices26ActivityItemMetricsRequest;

@interface ACUISActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices26ActivityItemMetricsRequest *_itemMetricsRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACUISSizeDimensionRequest *widthRequest;
@property (copy, nonatomic) ACUISSizeDimensionRequest *heightRequest;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double clipMargin;
@property (nonatomic) ACUISEdgeInsets *edgeInsets;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })initialSize;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3 clipMargin:(double)a4;
- (id)_activityItemMetricsRequest;
- (id)_initWithItemMetrics:(id)a0;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3;

@end
