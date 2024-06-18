@class EDBiomeInteractionEventLog, EDPETInteractionEventLog, EDDifferentialPrivacyReporter, EDInteractionLogger;

@interface EDCategorySubsystem : NSObject

@property (readonly, nonatomic) EDPETInteractionEventLog *petLog;
@property (readonly, nonatomic) EDBiomeInteractionEventLog *biomeLog;
@property (readonly, nonatomic) EDDifferentialPrivacyReporter *differentialPrivacyReporter;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;

- (void).cxx_destruct;
- (void)_schedulePETSubmissionActivityForLog:(id)a0;
- (void)scheduleRecurringActivity;
- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3;

@end
