@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (id)stateName;
- (void)systemDidBecomeReady;
- (id)_nextSystemReadyState;
- (id)nextStateWithContext:(id *)a0;

@end
