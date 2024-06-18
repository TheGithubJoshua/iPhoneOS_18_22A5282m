@class NMSMediaSyncServiceKeepLocalOptions, NMSMediaSyncServiceModelObject;

@interface NMSMediaSyncServiceKeepLocalRequest : PBRequest <NSCopying> {
    struct { unsigned char enableState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasModelObject;
@property (retain, nonatomic) NMSMediaSyncServiceModelObject *modelObject;
@property (nonatomic) BOOL hasEnableState;
@property (nonatomic) int enableState;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NMSMediaSyncServiceKeepLocalOptions *options;

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
- (int)StringAsEnableState:(id)a0;
- (id)enableStateAsString:(int)a0;

@end
