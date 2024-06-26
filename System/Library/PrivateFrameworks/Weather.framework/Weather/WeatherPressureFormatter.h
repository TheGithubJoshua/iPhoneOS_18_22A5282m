@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)formatStringForPressure:(float)a0 inUnit:(int)a1;
- (float)convertInchesHGPressure:(float)a0 toUnit:(int)a1;
- (float)convertMBarPressure:(float)a0 toUnit:(int)a1;
- (void *)createNumberFormatter;
- (id)fallbackStringForPressure:(float)a0;
- (int)pressureUnit;
- (void)resetFormatter;
- (id)stringFromInchesHG:(float)a0;
- (id)stringFromMillibars:(float)a0;
- (id)stringFromPressure:(float)a0 isDataMetric:(BOOL)a1;

@end
