@class MADVIVisualSearchThirdPartyObject, NSString, NSDictionary, NSURL;

@interface MADVIVisualSearchRegionAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MADVIVisualSearchThirdPartyObject *thirdPartyObject;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *knowledgeGraphID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) float thumbnailAspectRatio;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) NSDictionary *knowledgeProperties;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDomain:(id)a0 knowledgeGraphID:(id)a1 title:(id)a2 thumbnailURL:(id)a3 thumbnailAspectRatio:(float)a4 shortDescription:(id)a5 detailedDescription:(id)a6 webURL:(id)a7 knowledgeProperties:(id)a8;
- (void)setThirdPartyObject:(id)a0;

@end
