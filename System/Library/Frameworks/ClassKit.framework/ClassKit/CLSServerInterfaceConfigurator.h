@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureAssetSupportAPI;
- (id)init;
- (void)configureHandoutAPI;
- (void)configureDataObserverAPI;
- (void)configureContextAPI;
- (void)configureAppsAPI;
- (void)configureQueryAPI;
- (void)configureStudentActivityAPI;
- (void)configureCollaborationStateAPI;
- (void)configureFeatureAvailabilityAPI;
- (void)configureCollectionsAPI;
- (void).cxx_destruct;
- (void)configureRelayRequestAPI;
- (void)configureUserNotificationAPI;
- (void)configureClassAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureProgressReportingAPI;
- (void)configureAdminRequestAPI;
- (void)configureUtilityServerAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureSaveAPI;
- (void)configureDashboardAppAPI;
- (void)configureInsightEventsAPI;
- (id)configureServerInterface;

@end
