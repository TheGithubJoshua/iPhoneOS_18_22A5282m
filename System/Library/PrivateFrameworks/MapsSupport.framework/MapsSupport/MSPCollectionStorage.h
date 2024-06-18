@class NSString, NSData, PBUnknownFields;

@interface MSPCollectionStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) BOOL hasCollectionDescription;
@property (retain, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) BOOL hasItemData;
@property (retain, nonatomic) NSData *itemData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
