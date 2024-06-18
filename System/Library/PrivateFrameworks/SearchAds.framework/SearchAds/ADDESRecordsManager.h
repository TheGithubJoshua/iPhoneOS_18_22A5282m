@class NSString;

@interface ADDESRecordsManager : NSObject

@property (retain, nonatomic) NSString *recordID;

- (id)init;
- (BOOL)isAppInstalled:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)eventTypeToString:(long long)a0;
- (id)_createRecordForAdData:(id)a0 installed:(BOOL)a1 isDupe:(BOOL)a2 rerankingError:(id)a3;
- (void)createRecords:(id)a0 placementType:(unsigned long long)a1 firstOrganicId:(id)a2 error:(id)a3;
- (void)updateDESRecord:(id)a0 forEvent:(long long)a1;

@end
