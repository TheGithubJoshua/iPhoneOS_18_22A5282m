@class NSString, NSData;

@interface _SFPBOpenFileProviderItemCommand : PBCodable <_SFPBOpenFileProviderItemCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
@property (copy, nonatomic) NSString *fileProviderIdentifier;
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
