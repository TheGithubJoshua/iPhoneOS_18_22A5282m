@class NSString, FCCAlmostThereConfiguration;

@interface FCAlmostThereEvent : NSObject <FCGoalProgressEvent> {
    FCCAlmostThereConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventIdentifier;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_userWillCompleteGoalByEndOfDay:(long long)a0 model:(id)a1;
- (BOOL)shouldFireWithTypicalDayModel:(id)a0 evaluationDelegate:(id)a1;
- (double)minimumDayDuration;
- (void).cxx_destruct;
- (id)nextFireDateWithModel:(id)a0;
- (id)goalProgressContentForModel:(id)a0;

@end
