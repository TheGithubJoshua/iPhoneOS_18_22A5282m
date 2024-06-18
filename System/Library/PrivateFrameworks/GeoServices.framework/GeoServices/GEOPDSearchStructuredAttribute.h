@class NSMutableArray, GEOPDSearchAttribute, PBDataReader;

@interface GEOPDSearchStructuredAttribute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchAttribute *_attribute;
    NSMutableArray *_nestedAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _operator;
    struct { unsigned char has_operator : 1; unsigned char read_attribute : 1; unsigned char read_nestedAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
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
