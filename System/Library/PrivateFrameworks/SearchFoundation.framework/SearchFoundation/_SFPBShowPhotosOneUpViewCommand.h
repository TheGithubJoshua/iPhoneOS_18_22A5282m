@class _SFPBPerson, NSString, NSData, _SFPBPhotosLibraryImage;

@interface _SFPBShowPhotosOneUpViewCommand : PBCodable <_SFPBShowPhotosOneUpViewCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (retain, nonatomic) _SFPBPerson *matchedPerson;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;

@end
