@class NSMutableSet;

@interface SGSMMutableSearchState : NSObject {
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (void)setJustEngaged;
- (id)init;
- (void)commit;
- (void)scoreAsContactResult;
- (void)scoreAsContactOpportunity;
- (void)resetJustEngaged;
- (void)resetConversionCounts;
- (void).cxx_destruct;
- (id)description;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (BOOL)justEngaged;
- (void)scoreAsNonOpportunity;
- (void)scoreAsContactConversion;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)scoreAsOtherConversion;
- (void)scoreAsContactLoss;
- (void)resetCounts;

@end
