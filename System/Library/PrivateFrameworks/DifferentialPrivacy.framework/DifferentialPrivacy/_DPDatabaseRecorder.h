@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) NSSet *blacklistSet;
@property (readonly, nonatomic) unsigned long long puzzlePieceCount;

- (id)init;
- (void)recordStrings:(id)a0;
- (BOOL)isMetadataValid:(id)a0;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordWords:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)directUploadRecords:(id)a0 forKey:(id)a1;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordBitValues:(id)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0;
- (id)initWithKey:(id)a0 storage:(id)a1;
- (void)recordBitVectors:(id)a0;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)recordNumbers:(id)a0;
- (id)initWithKey:(id)a0 storage:(id)a1 systemBlacklistPath:(id)a2 runtimeBlacklistPath:(id)a3;

@end
