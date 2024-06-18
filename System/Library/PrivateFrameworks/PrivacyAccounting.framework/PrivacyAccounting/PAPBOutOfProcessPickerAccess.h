@class PAPBAccess;

@interface PAPBOutOfProcessPickerAccess : PBCodable <NSCopying> {
    struct { unsigned char pickerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccess;
@property (retain, nonatomic) PAPBAccess *access;
@property (nonatomic) BOOL hasPickerType;
@property (nonatomic) int pickerType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
