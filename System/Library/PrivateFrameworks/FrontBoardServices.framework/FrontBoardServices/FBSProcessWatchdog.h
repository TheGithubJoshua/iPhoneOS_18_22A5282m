@class NSString, FBSProcessWatchdogPolicy;
@protocol FBSProcessInternal;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {
    BOOL _active;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<FBSProcessInternal> process;
@property (readonly, copy, nonatomic) FBSProcessWatchdogPolicy *policy;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_stopMonitoringConstraints;
- (void)_beginMonitoringConstraints;
- (id)initWithName:(id)a0 process:(id)a1 policy:(id)a2;
- (void)provision:(id)a0 wasViolatedWithError:(id)a1;
- (id)succinctDescription;
- (void)activate;
- (void)deactivate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
