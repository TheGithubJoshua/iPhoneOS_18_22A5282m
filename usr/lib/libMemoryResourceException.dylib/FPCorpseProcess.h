@interface FPCorpseProcess : FPUserProcess

- (void)_gatherIdleExitStatus;
- (BOOL)_isAlive;
- (BOOL)_populateTask;
- (id)_gatherOwnedVmObjects;

@end
