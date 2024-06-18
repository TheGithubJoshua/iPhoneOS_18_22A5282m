@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _groupTypes;
}

@property (retain, nonatomic) NSString *personalizationSectionIdentifier;
@property (readonly, nonatomic) unsigned long long groupTypesCount;
@property (readonly, nonatomic) int *groupTypes;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)groupTypesAtIndex:(unsigned long long)a0;
- (void)clearGroupTypes;
- (int)StringAsGroupTypes:(id)a0;
- (void)addGroupTypes:(int)a0;
- (id)groupTypesAsString:(int)a0;
- (void)setGroupTypes:(int *)a0 count:(unsigned long long)a1;

@end
