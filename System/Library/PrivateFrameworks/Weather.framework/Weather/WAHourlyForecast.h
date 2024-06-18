@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject <NSCopying>

@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *time;
@property (nonatomic) long long hourIndex;
@property (retain, nonatomic) WFTemperature *temperature;
@property (copy, nonatomic) NSString *forecastDetail;
@property (nonatomic) long long conditionCode;
@property (nonatomic) double percentPrecipitation;

+ (long long)TimeValueFromString:(id)a0;
+ (id)hourlyForecastForLocation:(id)a0 conditions:(id)a1 sunriseDateComponents:(id)a2 sunsetDateComponents:(id)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end