@class MCProfileConnection;
@protocol ATXUpdatePredictionsDelegate;

@interface ATXManagedConfigurationUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    id _restrictionChangedNotificationToken;
}

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (retain, nonatomic) MCProfileConnection *profileConnection;

- (id)init;
- (void)handleProfileChangedNotification;
- (void).cxx_destruct;
- (void)_registerForRestrictionChangedNotifications;
- (id)initWithProfileConnection:(id)a0;

@end
