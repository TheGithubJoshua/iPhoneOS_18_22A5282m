@class NSNumber, NSString;

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)initWithCoder:(id)a0;
- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
