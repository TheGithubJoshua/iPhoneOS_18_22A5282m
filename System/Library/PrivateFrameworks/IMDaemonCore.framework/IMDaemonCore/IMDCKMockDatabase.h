@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap;

- (id)init;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (void)addOperation:(id)a0;
- (id)_zoneIdentifierForOperation:(id)a0;
- (id)_zoneManager;
- (void)dealloc;

@end
