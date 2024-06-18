@interface CNFInternalProcessListController : PSListController

- (id)specifiers;
- (id)bundle;
- (void)conferenceKillProcesses:(id)a0;
- (void)conferenceKillProcessesAndNukeKeychain:(id)a0;
- (void)killJustIChatAgent:(id)a0;
- (void)killJustIMAVAgent:(id)a0;
- (void)killJustMediaServerD:(id)a0;

@end
