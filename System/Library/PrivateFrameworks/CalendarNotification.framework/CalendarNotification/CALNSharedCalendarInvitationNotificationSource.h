@class NSString, NSArray;
@protocol CALNSourceEventRepresentationProvider, CALNCalendarIconIdentifierProvider, CALNSharedCalendarInvitationNotificationDataSource, CALNNotificationManager;

@interface CALNSharedCalendarInvitationNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNSharedCalendarInvitationNotificationDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifierWithReportJunk;
+ (id)categoryIdentifierWithoutReportJunk;
+ (id)declineActionIdentifier;
+ (id)joinActionIdentifier;
+ (id)reportJunkActionIdentifier;

- (void)didReceiveResponse:(id)a0;
- (void)refreshNotifications:(id)a0;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0 notificationManager:(id)a1 iconIdentifierProvider:(id)a2 sourceEventRepresentationProvider:(id)a3;
- (void).cxx_destruct;
- (id)contentForNotificationWithInfo:(id)a0;

@end
