@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (long long)daemonOperation;
- (void)runDaemonSide;
- (void)run;

@end
