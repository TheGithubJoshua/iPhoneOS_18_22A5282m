@class NSString, NSMutableDictionary, NSDictionary, NSData;

@interface MADownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) long long timeoutIntervalForResource;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL canUseLocalCacheServer;
@property (nonatomic) BOOL prefersInfraWiFi;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (nonatomic) BOOL liveServerCatalogOnlyIsOverridden;
@property (retain, nonatomic) NSString *downloadAuthorizationHeader;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sourceDirectory;

- (id)initWithPlist:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsPlist;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)logOptions;
- (id)description;
- (id)tightSummaryIncludingAdditional:(BOOL)a0;

@end
