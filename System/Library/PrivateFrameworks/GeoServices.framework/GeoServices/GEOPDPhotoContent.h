@class NSString, PBUnknownFields;

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _height;
    int _urlType;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_urlType : 1; unsigned char has_width : 1; } _flags;
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
- (unsigned long long)_area;

@end
