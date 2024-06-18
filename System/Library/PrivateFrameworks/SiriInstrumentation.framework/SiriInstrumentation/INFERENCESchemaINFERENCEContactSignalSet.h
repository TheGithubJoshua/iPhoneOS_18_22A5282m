@class INFERENCESchemaINFERENCESpeechAlternativeRanks, INFERENCESchemaINFERENCEPrivatizedHistoryStats, INFERENCESchemaINFERENCERequestMatchSignalSet, NSArray, NSString, NSData;

@interface INFERENCESchemaINFERENCEContactSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char isQueryStrippedOfTitles : 1; unsigned char isSuggestedContact : 1; unsigned char areAllQueryTokensInContact : 1; unsigned char areAllPrimaryContactTokensInQuery : 1; unsigned char isHypocorism : 1; unsigned char hasSuggestedProperties : 1; unsigned char isPartialNameMatch : 1; unsigned char isFromStandardSearch : 1; unsigned char isFromNLXSearch : 1; unsigned char isFromSRRSearch : 1; unsigned char nlxScore : 1; unsigned char srrScore : 1; unsigned char isRecent : 1; unsigned char isRecentInSameDomain : 1; unsigned char isRecentInSiriRequest : 1; unsigned char isRecentlyCorrected : 1; unsigned char recencyRank : 1; unsigned char recencyRankInSameDomain : 1; unsigned char recencyRankInSiriRequest : 1; unsigned char isMeCard : 1; unsigned char isMeCardRelation : 1; unsigned char isMeCardRelationExactMatch : 1; unsigned char isRelationAlias : 1; unsigned char areQueryDiacriticsRemoved : 1; unsigned char isQueryNameDerivedFromRelationshipLabel : 1; unsigned char isQueryRelationshipLabelDerivedFromName : 1; unsigned char isThirdPartyMatch : 1; unsigned char isFavorite : 1; unsigned char isTransliterated : 1; unsigned char hasHandleWithPreferredType : 1; unsigned char hasHandleWithAllowedType : 1; unsigned char isCommunalRequest : 1; unsigned char fractionOfCommunalDevicesMatchingCandidate : 1; unsigned char isPlusSignal : 1; unsigned char isOnlyCandidate : 1; unsigned char isQueryNormalized : 1; unsigned char isQueryStrippedOfPunctuation : 1; unsigned char isQueryStrippedOfWhitespace : 1; unsigned char isQueryStrippedOfSymbols : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCESpeechAlternativeRanks *speechAlternativeRanks;
@property (nonatomic) BOOL hasSpeechAlternativeRanks;
@property (nonatomic) BOOL isQueryStrippedOfTitles;
@property (nonatomic) BOOL hasIsQueryStrippedOfTitles;
@property (nonatomic) BOOL isSuggestedContact;
@property (nonatomic) BOOL hasIsSuggestedContact;
@property (nonatomic) BOOL areAllQueryTokensInContact;
@property (nonatomic) BOOL hasAreAllQueryTokensInContact;
@property (nonatomic) BOOL areAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL isHypocorism;
@property (nonatomic) BOOL hasIsHypocorism;
@property (nonatomic) BOOL hasSuggestedProperties;
@property (nonatomic) BOOL hasHasSuggestedProperties;
@property (nonatomic) BOOL isPartialNameMatch;
@property (nonatomic) BOOL hasIsPartialNameMatch;
@property (nonatomic) BOOL isFromStandardSearch;
@property (nonatomic) BOOL hasIsFromStandardSearch;
@property (nonatomic) BOOL isFromNLXSearch;
@property (nonatomic) BOOL hasIsFromNLXSearch;
@property (nonatomic) BOOL isFromSRRSearch;
@property (nonatomic) BOOL hasIsFromSRRSearch;
@property (nonatomic) float nlxScore;
@property (nonatomic) BOOL hasNlxScore;
@property (nonatomic) float srrScore;
@property (nonatomic) BOOL hasSrrScore;
@property (nonatomic) BOOL isRecent;
@property (nonatomic) BOOL hasIsRecent;
@property (nonatomic) BOOL isRecentInSameDomain;
@property (nonatomic) BOOL hasIsRecentInSameDomain;
@property (nonatomic) BOOL isRecentInSiriRequest;
@property (nonatomic) BOOL hasIsRecentInSiriRequest;
@property (nonatomic) BOOL isRecentlyCorrected;
@property (nonatomic) BOOL hasIsRecentlyCorrected;
@property (nonatomic) int recencyRank;
@property (nonatomic) BOOL hasRecencyRank;
@property (nonatomic) int recencyRankInSameDomain;
@property (nonatomic) BOOL hasRecencyRankInSameDomain;
@property (nonatomic) int recencyRankInSiriRequest;
@property (nonatomic) BOOL hasRecencyRankInSiriRequest;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats;
@property (nonatomic) BOOL hasHistoryStats;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSameDomain;
@property (nonatomic) BOOL hasHistoryStatsInSameDomain;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSiriRequests;
@property (nonatomic) BOOL hasHistoryStatsInSiriRequests;
@property (nonatomic) BOOL isMeCard;
@property (nonatomic) BOOL hasIsMeCard;
@property (nonatomic) BOOL isMeCardRelation;
@property (nonatomic) BOOL hasIsMeCardRelation;
@property (nonatomic) BOOL isMeCardRelationExactMatch;
@property (nonatomic) BOOL hasIsMeCardRelationExactMatch;
@property (nonatomic) BOOL isRelationAlias;
@property (nonatomic) BOOL hasIsRelationAlias;
@property (nonatomic) BOOL areQueryDiacriticsRemoved;
@property (nonatomic) BOOL hasAreQueryDiacriticsRemoved;
@property (nonatomic) BOOL isQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) BOOL hasIsQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) BOOL isQueryRelationshipLabelDerivedFromName;
@property (nonatomic) BOOL hasIsQueryRelationshipLabelDerivedFromName;
@property (nonatomic) BOOL isThirdPartyMatch;
@property (nonatomic) BOOL hasIsThirdPartyMatch;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL isTransliterated;
@property (nonatomic) BOOL hasIsTransliterated;
@property (retain, nonatomic) INFERENCESchemaINFERENCERequestMatchSignalSet *requestMatchSignalSet;
@property (nonatomic) BOOL hasRequestMatchSignalSet;
@property (copy, nonatomic) NSArray *handlesWithPrivacySignalSets;
@property (nonatomic) BOOL hasHandleWithPreferredType;
@property (nonatomic) BOOL hasHasHandleWithPreferredType;
@property (nonatomic) BOOL hasHandleWithAllowedType;
@property (nonatomic) BOOL hasHasHandleWithAllowedType;
@property (nonatomic) BOOL isCommunalRequest;
@property (nonatomic) BOOL hasIsCommunalRequest;
@property (nonatomic) float fractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) BOOL hasFractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) BOOL isPlusSignal;
@property (nonatomic) BOOL hasIsPlusSignal;
@property (nonatomic) BOOL isOnlyCandidate;
@property (nonatomic) BOOL hasIsOnlyCandidate;
@property (copy, nonatomic) NSString *thirdPartyAppBundleId;
@property (nonatomic) BOOL hasThirdPartyAppBundleId;
@property (nonatomic) BOOL isQueryNormalized;
@property (nonatomic) BOOL hasIsQueryNormalized;
@property (nonatomic) BOOL isQueryStrippedOfPunctuation;
@property (nonatomic) BOOL hasIsQueryStrippedOfPunctuation;
@property (nonatomic) BOOL isQueryStrippedOfWhitespace;
@property (nonatomic) BOOL hasIsQueryStrippedOfWhitespace;
@property (nonatomic) BOOL isQueryStrippedOfSymbols;
@property (nonatomic) BOOL hasIsQueryStrippedOfSymbols;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAreQueryDiacriticsRemoved;
- (void)addHandlesWithPrivacySignalSets:(id)a0;
- (void)clearHandlesWithPrivacySignalSets;
- (void)deleteAreAllPrimaryContactTokensInQuery;
- (void)deleteAreAllQueryTokensInContact;
- (void)deleteFractionOfCommunalDevicesMatchingCandidate;
- (void)deleteHandlesWithPrivacySignalSets;
- (void)deleteHasHandleWithAllowedType;
- (void)deleteHasHandleWithPreferredType;
- (void)deleteHasSuggestedProperties;
- (void)deleteHistoryStats;
- (void)deleteHistoryStatsInSameDomain;
- (void)deleteHistoryStatsInSiriRequests;
- (void)deleteIsCommunalRequest;
- (void)deleteIsFavorite;
- (void)deleteIsFromNLXSearch;
- (void)deleteIsFromSRRSearch;
- (void)deleteIsFromStandardSearch;
- (void)deleteIsHypocorism;
- (void)deleteIsMeCard;
- (void)deleteIsMeCardRelation;
- (void)deleteIsMeCardRelationExactMatch;
- (void)deleteIsOnlyCandidate;
- (void)deleteIsPartialNameMatch;
- (void)deleteIsPlusSignal;
- (void)deleteIsQueryNameDerivedFromRelationshipLabel;
- (void)deleteIsQueryNormalized;
- (void)deleteIsQueryRelationshipLabelDerivedFromName;
- (void)deleteIsQueryStrippedOfPunctuation;
- (void)deleteIsQueryStrippedOfSymbols;
- (void)deleteIsQueryStrippedOfTitles;
- (void)deleteIsQueryStrippedOfWhitespace;
- (void)deleteIsRecent;
- (void)deleteIsRecentInSameDomain;
- (void)deleteIsRecentInSiriRequest;
- (void)deleteIsRecentlyCorrected;
- (void)deleteIsRelationAlias;
- (void)deleteIsSuggestedContact;
- (void)deleteIsThirdPartyMatch;
- (void)deleteIsTransliterated;
- (void)deleteNlxScore;
- (void)deleteRecencyRank;
- (void)deleteRecencyRankInSameDomain;
- (void)deleteRecencyRankInSiriRequest;
- (void)deleteRequestMatchSignalSet;
- (void)deleteSpeechAlternativeRanks;
- (void)deleteSrrScore;
- (void)deleteThirdPartyAppBundleId;
- (id)handlesWithPrivacySignalSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)handlesWithPrivacySignalSetsCount;

@end