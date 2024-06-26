@class NSString, NTPBDate;

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordName;
@property (retain, nonatomic) NSString *recordName;
@property (readonly, nonatomic) BOOL hasRecordZoneName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (readonly, nonatomic) BOOL hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (readonly, nonatomic) BOOL hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
