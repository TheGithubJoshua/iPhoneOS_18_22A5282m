@class NSString;

@interface HAMenstrualAlgorithmsWristTemperature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double temperatureCelsius;
@property (readonly, nonatomic) NSString *watchIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTemperature:(double)a0 forWatchIdentifier:(id)a1;

@end
