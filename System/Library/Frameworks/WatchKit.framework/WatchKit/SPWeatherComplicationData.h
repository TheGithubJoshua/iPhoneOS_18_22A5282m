@class NSString;

@interface SPWeatherComplicationData : SPComplicationData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *temperatureText;
@property (retain, nonatomic) NSString *locationText;
@property (retain, nonatomic) NSString *currentConditionsText;
@property (nonatomic) long long currentConditionsEnum;
@property (retain, nonatomic) NSString *highLowText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
