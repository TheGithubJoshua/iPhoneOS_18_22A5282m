@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (id)sourceName;
- (id)topicIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (id)shortExcerpt;
- (id)blockedStorefrontIDs;
- (BOOL)hasThumbnail;
- (BOOL)isDraft;
- (BOOL)isLocalDraft;
- (id)allowedStorefrontIDs;
- (id)primaryAudience;
- (id)videoURL;
- (id)sourceChannel;
- (id)articleID;
- (id)publishDate;
- (BOOL)isDeleted;
- (id)thumbnailAssetHandle;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (BOOL)isSponsored;
- (BOOL)isFeatureCandidate;
- (unsigned long long)contentType;
- (id)contentWithContext:(id)a0;
- (id)iAdSectionIDs;
- (id)accessoryText;
- (BOOL)webEmbedsEnabled;
- (id)lastModifiedDate;
- (void).cxx_destruct;
- (id)contentURL;
- (id)thumbnail;
- (id)title;
- (id)identifier;
- (BOOL)useTransparentNavigationBar;
- (double)videoDuration;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
