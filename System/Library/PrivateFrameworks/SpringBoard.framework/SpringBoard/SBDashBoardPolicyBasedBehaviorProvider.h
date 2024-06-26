@class NSString, SBMainDisplayPolicyAggregator, CSCoverSheetViewController;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding> {
    CSCoverSheetViewController *_coverSheetViewController;
    SBMainDisplayPolicyAggregator *_policyAggregator;
    id _notificationToken;
}

@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)conformsToCSBehaviorProviding;
- (id)initWithCoverSheetViewController:(id)a0 policyAggregator:(id)a1;
- (unsigned long long)_restrictedCapability:(unsigned long long)a0 forAggregatorCapability:(long long)a1;
- (unsigned long long)_cameraRestrictions;
- (void).cxx_destruct;
- (void)conformsToCSExternalBehaviorProviding;
- (void)dealloc;

@end
