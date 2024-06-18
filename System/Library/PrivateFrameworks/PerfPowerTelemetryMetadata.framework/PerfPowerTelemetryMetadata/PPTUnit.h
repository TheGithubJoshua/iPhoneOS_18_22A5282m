@class NSUnit;

@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)seconds;
+ (id)milliVolts;
+ (id)milliAmperes;
+ (id)celsius;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)milliAmpereHours;
+ (id)dimensionless;
+ (id)volts;
+ (id)unitWithJSONObject:(id)a0;
+ (id)microWattHours;
+ (id)grams;
+ (id)unitWithProto:(id)a0;

- (id)proto;
- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;

@end
