@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {
    struct { unsigned char fileSize : 1; unsigned char imageHeight : 1; unsigned char imageWidth : 1; unsigned char type : 1; unsigned char renderOnClient : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasRenderOnClient;
@property (nonatomic) BOOL renderOnClient;
@property (nonatomic) BOOL hasImageWidth;
@property (nonatomic) float imageWidth;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) float imageHeight;
@property (readonly, nonatomic) BOOL hasMimePartNumber;
@property (retain, nonatomic) NSString *mimePartNumber;

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
