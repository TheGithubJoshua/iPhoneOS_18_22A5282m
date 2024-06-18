@class NSString, FCCAtypicalDayConfiguration;

@interface FCAtypicalDayEvent : NSObject <FCGoalProgressEvent> {
    FCCAtypicalDayConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventIdentifier;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_isProgressSignificantlyBetter:(double)a0;
- (BOOL)shouldFireWithTypicalDayModel:(id)a0 evaluationDelegate:(id)a1;
- (BOOL)_isProgressSignificantlyWorse:(double)a0;
- (double)minimumDayDuration;
- (void).cxx_destruct;
- (id)nextFireDateWithModel:(id)a0;
- (id)goalProgressContentForModel:(id)a0;

@end
