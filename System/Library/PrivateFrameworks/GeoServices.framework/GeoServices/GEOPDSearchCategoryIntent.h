@class NSString, GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

@interface GEOPDSearchCategoryIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_canonicalNames;
    NSMutableArray *_categoryIds;
    NSMutableArray *_expandedCategoryIds;
    NSMutableArray *_featureMaps;
    NSMutableArray *_negativeCategorys;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_trigger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_canonicalNames : 1; unsigned char read_categoryIds : 1; unsigned char read_expandedCategoryIds : 1; unsigned char read_featureMaps : 1; unsigned char read_negativeCategorys : 1; unsigned char read_tokenSet : 1; unsigned char read_trigger : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;

@end
