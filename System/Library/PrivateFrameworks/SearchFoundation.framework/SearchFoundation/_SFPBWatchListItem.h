@class NSString, NSData;

@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property (copy, nonatomic) NSString *continueInTextFormat;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) NSString *installButtonTitle;
@property (copy, nonatomic) NSString *purchaseOfferTextFormat;
@property (copy, nonatomic) NSString *inUpNextText;
@property (copy, nonatomic) NSString *addToUpNextText;
@property (copy, nonatomic) NSString *addedToUpNextText;
@property (copy, nonatomic) NSString *watchLiveTextFormat;
@property (nonatomic) BOOL isMediaContainer;
@property (nonatomic) int type;
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
