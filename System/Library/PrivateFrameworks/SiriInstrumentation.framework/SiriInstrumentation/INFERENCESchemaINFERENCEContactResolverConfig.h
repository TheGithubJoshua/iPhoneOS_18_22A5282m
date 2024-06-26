@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEContactResolverConfig : SISchemaInstrumentationMessage {
    struct { unsigned char isSearchingFirstPartyContacts : 1; unsigned char contactSearchSuggestedType : 1; unsigned char domainsToSearchForHistory : 1; unsigned char actionType : 1; } _has;
}

@property (nonatomic) BOOL isSearchingFirstPartyContacts;
@property (nonatomic) BOOL hasIsSearchingFirstPartyContacts;
@property (nonatomic) int contactSearchSuggestedType;
@property (nonatomic) BOOL hasContactSearchSuggestedType;
@property (nonatomic) int domainsToSearchForHistory;
@property (nonatomic) BOOL hasDomainsToSearchForHistory;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasActionType;
@property (copy, nonatomic) NSArray *appBundleIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteDomainsToSearchForHistory;
- (void)addAppBundleIds:(id)a0;
- (id)appBundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (void)deleteActionType;
- (void)deleteAppBundleIds;
- (void)deleteContactSearchSuggestedType;
- (void)deleteIsSearchingFirstPartyContacts;

@end
