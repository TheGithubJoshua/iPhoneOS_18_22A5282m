@class NSString, NSMapTable, DNDSAppConfigurationManager, NSObject;
@protocol OS_dispatch_queue, DNDSSystemFocusConfigurationCoordinatorDelegate;

@interface DNDSSystemFocusConfigurationCoordinator : NSObject <WFShojiSystemActionsRunnerClientDelegate, DNDSAppConfigurationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    DNDSAppConfigurationManager *_appConfigurationManager;
    NSMapTable *_clientToModeIdentifier;
}

@property (weak, nonatomic) id<DNDSSystemFocusConfigurationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appConfigurationManager:(id)a0 didSetSystemAction:(id)a1 modeIdentifier:(id)a2;
- (id)initWithAppConfigurationManager:(id)a0;
- (void)appConfigurationManager:(id)a0 didClearSystemAction:(id)a1 modeIdentifier:(id)a2;
- (void)workflowRunnerClient:(id)a0 didFinishRunningAction:(id)a1 withReverseAction:(id)a2;
- (void).cxx_destruct;
- (id)_currentModeIdentifier;
- (void)handleStateUpdate:(id)a0;
- (void)appConfigurationManager:(id)a0 didClearSystemActionsInModeIdentifiers:(id)a1;
- (void)_executeAction:(id)a0;

@end
