@class NSDictionary, NSMutableArray, MKApplicationDatabase;

@interface MKApplicationMigrator : MKMigrator {
    BOOL _isImporting;
    unsigned long long _lookupErrorCount;
    MKApplicationDatabase *_db;
    unsigned long long _totalCount;
    unsigned long long _matchedAppsCount;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSDictionary *signatures;

- (id)init;
- (id)lookup;
- (BOOL)prompt;
- (void)cancel;
- (void)lookup:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)install;
- (void)purchase;
- (void)import;
- (void)import:(id)a0;
- (void)install:(id)a0;
- (void)drainQueue;
- (void)didLookup:(id)a0 identifiers:(id)a1 error:(id)a2;
- (void)import:(id)a0 identifiers:(id)a1;
- (void)importDataEncodedInJSON:(id)a0;
- (void)slice:(unsigned long long)a0;

@end
