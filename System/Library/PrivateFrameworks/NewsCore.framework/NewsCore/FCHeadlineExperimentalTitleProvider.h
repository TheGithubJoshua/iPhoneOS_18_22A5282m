@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject

@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (nonatomic) BOOL shouldShowAlternateHeadlines;

+ (BOOL)isDebugModeEnabled;

- (id)_headlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (id)initWithShouldShowAlternateHeadlines:(BOOL)a0;
- (id)headlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (void).cxx_destruct;
- (id)_debugHeadlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (id)metadataForDefaultHeadlineWithTitle:(id)a0;

@end
