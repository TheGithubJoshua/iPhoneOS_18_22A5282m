@class BLTPBSectionInfo, NSMutableArray;

@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasSectionInfo;
@property (retain, nonatomic) BLTPBSectionInfo *sectionInfo;
@property (retain, nonatomic) NSMutableArray *keypaths;

+ (Class)keypathsType;

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
- (void)addKeypaths:(id)a0;
- (void)clearKeypaths;
- (id)keypathsAtIndex:(unsigned long long)a0;
- (unsigned long long)keypathsCount;

@end
