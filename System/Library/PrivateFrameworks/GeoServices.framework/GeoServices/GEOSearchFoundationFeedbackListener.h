@class NSString, NSArray;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {
    int _uiTarget;
    NSArray *_mapsResultsIdentifiers;
    NSArray *_resultCardIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_identifiersFromCardSections:(id)a0;
+ (id)_mapsResultIdentifiersFromSections:(id)a0;
+ (id)feedbackListenerForParsec;

- (void)didEngageSection:(id)a0;
- (void)didPerformCommand:(id)a0;
- (id)traits;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)didRankSections:(id)a0;
- (id)init;
- (void)didEngageResult:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (id)initWithClientType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
