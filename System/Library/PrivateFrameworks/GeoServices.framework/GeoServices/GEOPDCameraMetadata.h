@class GEOPDOrientedPosition, GEOPDLensProjection, PBDataReader;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _textureIds;
    GEOPDLensProjection *_lensProjection;
    GEOPDOrientedPosition *_position;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cameraNumber;
    int _imageHeight;
    int _imageWidth;
    struct { unsigned char has_cameraNumber : 1; unsigned char has_imageHeight : 1; unsigned char has_imageWidth : 1; unsigned char read_textureIds : 1; unsigned char read_lensProjection : 1; unsigned char read_position : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (void)dealloc;
- (id)jsonRepresentation;

@end
