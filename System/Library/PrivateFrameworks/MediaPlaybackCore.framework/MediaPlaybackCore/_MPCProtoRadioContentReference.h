@class _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying> {
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
