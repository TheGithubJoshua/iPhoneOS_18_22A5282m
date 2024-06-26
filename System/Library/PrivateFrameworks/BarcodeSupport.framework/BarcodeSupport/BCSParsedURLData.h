@class NSURL, NSString;

@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *preferredBundleID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 type:(long long)a1;
- (id)initWithURL:(id)a0 type:(long long)a1 extraPreviewText:(id)a2;
- (id)initWithURL:(id)a0 type:(long long)a1 extraPreviewText:(id)a2 preferredBundleID:(id)a3;

@end
