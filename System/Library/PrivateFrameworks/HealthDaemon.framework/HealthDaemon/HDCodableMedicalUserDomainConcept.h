@class NSString;

@interface HDCodableMedicalUserDomainConcept : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _categoryTypes;
}

@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long categoryTypesCount;
@property (readonly, nonatomic) long long *categoryTypes;

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
- (void)dealloc;
- (void)addCategoryTypes:(long long)a0;
- (long long)categoryTypesAtIndex:(unsigned long long)a0;
- (void)clearCategoryTypes;
- (void)setCategoryTypes:(long long *)a0 count:(unsigned long long)a1;

@end
