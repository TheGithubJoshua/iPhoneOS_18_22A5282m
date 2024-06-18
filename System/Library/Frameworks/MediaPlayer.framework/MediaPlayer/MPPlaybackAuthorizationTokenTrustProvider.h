@class NSString;

@interface MPPlaybackAuthorizationTokenTrustProvider : NSObject <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestSource;
@property (retain, nonatomic) NSString *trustID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithRequestSource:(long long)a0;

@end
