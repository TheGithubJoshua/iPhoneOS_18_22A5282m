@class NSString, NSMeasurement;

@interface WFWeatherAirQualityPollutant : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSMeasurement *concentration;
@property (readonly, copy, nonatomic) NSString *wfName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalizedName:(id)a0 localizedDescription:(id)a1 concentration:(id)a2;

@end
