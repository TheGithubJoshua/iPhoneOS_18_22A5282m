@class NSString;

@interface WFLimitedNetworkIssue : WFHealthIssue {
    BOOL _subtitleOnlyIssue;
    NSString *_issueShortTitle;
    NSString *_typeString;
    NSString *_issueTitle;
    NSString *_issueRecommendation;
    NSString *_issueDescription;
}

+ (id)limitedNetwork;
+ (id)limitedNetwork_CH;

- (void).cxx_destruct;
- (id)issueDescription;
- (id)typeString;
- (id)issueShortTitle;
- (id)_RecommendationForChinaDevice:(BOOL)a0;
- (id)initWithChinaDevice:(BOOL)a0;
- (id)issueRecommendation;
- (id)issueTitle;
- (BOOL)subtitleOnlyIssue;

@end
