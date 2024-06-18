@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}

@property (readonly, nonatomic) long long localWeightUnit;

+ (id)sharedFormatter;

- (void)_localeChanged:(id)a0;
- (id)init;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringFromWeightInKilograms:(id)a0;
- (void)_updateRoundingIncrement;
- (id)stringFromWeightValue:(double)a0 inUnit:(long long)a1;

@end
