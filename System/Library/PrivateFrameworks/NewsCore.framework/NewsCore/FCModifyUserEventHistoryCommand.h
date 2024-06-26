@interface FCModifyUserEventHistoryCommand : FCModifyRecordsCommand

- (id)ckRecordWithSessionID:(id)a0 data:(id)a1;
- (id)initWithSessions:(id)a0;
- (id)initWithSessionID:(id)a0 data:(id)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
