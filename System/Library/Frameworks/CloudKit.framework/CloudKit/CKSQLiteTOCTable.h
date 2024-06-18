@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase

+ (Class)entryClass;
+ (id)dbTableName;
+ (id)dbProperties;

- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;

@end
