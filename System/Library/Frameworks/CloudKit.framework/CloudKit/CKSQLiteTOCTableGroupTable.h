@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCTableBase

+ (BOOL)isInvalidGroupName:(id)a0;
+ (Class)entryClass;
+ (id)dbTableName;
+ (id)invalidGroupNameForGroupName:(id)a0;
+ (id)dbProperties;

- (id)tableGroupOfClass:(Class)a0 withName:(id)a1 error:(id *)a2;
- (id)tableGroupsWithClass:(id)a0;
- (id)updateGroupData:(id)a0;
- (id)newEntryObject;
- (id)saveGroupName:(id)a0;
- (void)updateLastUsedDate:(id)a0;
- (id)genericTableGroupWithName:(id)a0 error:(id *)a1;
- (id)invalidateGroup:(id)a0;

@end
