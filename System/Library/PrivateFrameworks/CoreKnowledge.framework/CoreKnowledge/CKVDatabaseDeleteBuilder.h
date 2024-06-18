@class NSArray;

@interface CKVDatabaseDeleteBuilder : CKVDatabaseCommandBuilder {
    NSArray *_returningColumns;
}

- (id)build;
- (void).cxx_destruct;
- (void)setReturningColumns:(id)a0;
- (void)setCommandCriterion:(id)a0;

@end
