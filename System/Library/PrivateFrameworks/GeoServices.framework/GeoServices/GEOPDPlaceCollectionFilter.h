@class PBUnknownFields;

@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _expectedResultCount;
    BOOL _enableCollectionItemDescription;
    BOOL _enableMediaLink;
    BOOL _isCollectionView;
    BOOL _overrideSuppress;
    BOOL _partiallyClientize;
    struct { unsigned char has_expectedResultCount : 1; unsigned char has_enableCollectionItemDescription : 1; unsigned char has_enableMediaLink : 1; unsigned char has_isCollectionView : 1; unsigned char has_overrideSuppress : 1; unsigned char has_partiallyClientize : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
