@class NSNumber, NSString;

@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFUnitFormatter>

@property (nonatomic) BOOL inputIsCelsius;
@property (nonatomic) BOOL outputIsCelsius;
@property (retain, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *unitDescription;

- (id)measurementForObjectValue:(id)a0;
- (id)init;
- (void)setMaximumFractionDigits:(unsigned long long)a0;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnit:(BOOL)a1;
- (unsigned long long)minimumFractionDigits;
- (unsigned long long)maximumFractionDigits;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (void)setMinimumFractionDigits:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringForObjectValue:(id)a0 withUnit:(BOOL)a1;

@end
