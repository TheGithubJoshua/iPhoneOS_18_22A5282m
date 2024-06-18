@class NSMeasurement, NSDate;

@interface CMWaterSubmersionMeasurement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSMeasurement *depth;
@property (readonly, nonatomic) NSMeasurement *pressure;
@property (readonly, nonatomic) NSMeasurement *surfacePressure;
@property (readonly, nonatomic) long long submersionState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDepth:(id)a0 andPressure:(id)a1 andSurfacePressure:(id)a2 andState:(long long)a3 andDate:(id)a4;

@end
