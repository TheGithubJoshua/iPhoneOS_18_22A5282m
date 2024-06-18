@class NSMutableArray, PBUnknownFields;

@interface GEOPDLabelGeometry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labelShapes;
    BOOL _hasSelectionPolygon;
    struct { unsigned char has_hasSelectionPolygon : 1; } _flags;
}

+ (id)labelGeometryWithPlaceData:(id)a0;

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
