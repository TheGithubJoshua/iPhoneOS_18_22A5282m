@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (void)setNowDate:(id)a0;
+ (id)nowDate;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (id)oldestDateAllowedToSendTo;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (id)sharedManager;

- (void).cxx_destruct;

@end
