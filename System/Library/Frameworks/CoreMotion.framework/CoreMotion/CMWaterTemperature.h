@class NSMeasurement, NSDate;

@interface CMWaterTemperature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSMeasurement *temperature;
@property (readonly, nonatomic) NSMeasurement *temperatureUncertainty;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithTemperature:(id)a0 andTemperatureUncertainty:(id)a1 andDate:(id)a2;

@end
