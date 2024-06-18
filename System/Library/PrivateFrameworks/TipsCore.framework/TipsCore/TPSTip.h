@class TPSAssets, NSString, NSArray, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) NSString *linkedDocumentId;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (long long)contentTypeForDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;
+ (id)na_identity;
+ (long long)contentTypeForContentDictionary:(id)a0;

- (id)shortTitle;
- (BOOL)containsLinks;
- (id)initWithCoder:(id)a0;
- (BOOL)hasImage;
- (id)bodyText;
- (void)addCollectionIdentifier:(id)a0;
- (void)removeCollectionIdentifier:(id)a0;
- (id)bodyContent;
- (BOOL)isHardwareWelcome;
- (id)webURLPath;
- (BOOL)textContainsHTML;
- (id)shareText;
- (id)eyebrowText;
- (id)footnoteContent;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)fullContentAssets;
- (BOOL)isSoftwareWelcome;
- (id)URLWithReferrer:(id)a0;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)actions;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)summary;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasVideo;
- (id)title;

@end
