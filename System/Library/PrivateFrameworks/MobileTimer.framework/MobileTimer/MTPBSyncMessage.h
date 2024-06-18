@class NSString, MTPBDismissAction, MTPBSnoozeAction;

@interface MTPBSyncMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (retain, nonatomic) MTPBSnoozeAction *snoozeAction;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (retain, nonatomic) MTPBDismissAction *dismissAction;
@property (nonatomic) double syncDate;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) double syncVersion;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
