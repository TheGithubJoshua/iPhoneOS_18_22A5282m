@class NSMutableDictionary, SCWZoneDiff, SCWZoneSchema, NSMutableArray;

@interface SCWZoneModificationSilo : NSObject <SCWZoneModifying>

@property (retain, nonatomic) SCWZoneSchema *zoneSchema;
@property (retain, nonatomic) NSMutableDictionary *originalRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *workingRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (readonly, copy, nonatomic) SCWZoneDiff *diff;

- (BOOL)recordExistsWithName:(id)a0;
- (void)deleteRecordWithName:(id)a0;
- (BOOL)_shouldAssertRecordValidity;
- (void)createOrUpdateRecordWithName:(id)a0 recordType:(id)a1 modifyBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithZoneSchema:(id)a0 contents:(id)a1;

@end
