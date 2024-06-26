@class NSMutableArray;

@interface ATXPBFaceGalleryConfiguration : PBCodable <NSCopying> {
    struct { unsigned char source : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;

+ (Class)sectionsType;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void)addSections:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)sectionsCount;
- (unsigned long long)hash;
- (void)clearSections;
- (void)writeTo:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
