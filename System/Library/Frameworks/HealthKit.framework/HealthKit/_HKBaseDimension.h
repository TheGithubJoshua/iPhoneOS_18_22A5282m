@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor>

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pressure;
+ (id)soundPressureLevel;
+ (id)time;
+ (id)hearingSensitivity;
+ (id)nullDimension;
+ (id)volume;
+ (id)nonConvertibleIU;
+ (id)changeInTemperature;
+ (id)energy;
+ (id)equivalents;
+ (id)frequency;
+ (id)electricPotentialDifference;
+ (id)mass;
+ (id)nonConvertibleMole;
+ (id)temperature;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)power;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)prismDiopter;
+ (id)diopter;
+ (id)conductance;
+ (id)titer;
+ (id)length;
+ (id)angle;

- (id)unitString;
- (id)_initWithName:(id)a0;
- (id)_baseDimensions;
- (id)dimension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeReduced;

@end
