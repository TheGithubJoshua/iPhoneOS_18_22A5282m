@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSMutableArray *includeds;
@property (retain, nonatomic) NSMutableArray *excludeds;
@property (retain, nonatomic) NSMutableArray *dispositions;
@property (retain, nonatomic) NSMutableArray *preapprovals;

+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
+ (Class)preapprovalsType;

- (void)addIncluded:(id)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (void)clearIncludeds;
- (unsigned long long)dispositionsCount;
- (void)mergeFrom:(id)a0;
- (void)clearDispositions;
- (unsigned long long)preapprovalsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)includedAtIndex:(unsigned long long)a0;
- (void)addExcluded:(id)a0;
- (unsigned long long)excludedsCount;
- (unsigned long long)includedsCount;
- (unsigned long long)hash;
- (void)addDispositions:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)clearPreapprovals;
- (BOOL)readFrom:(id)a0;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearExcludeds;
- (void)addPreapprovals:(id)a0;

@end
