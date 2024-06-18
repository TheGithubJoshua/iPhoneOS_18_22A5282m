@class NSString, NSArray, KTAccountPublicID, NSError;

@interface KTVerifierResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uri;
@property unsigned long long succeed;
@property BOOL optedIn;
@property BOOL everOptedIn;
@property BOOL recentlyOptedIn;
@property BOOL staticAccountKeyEnforced;
@property (retain) KTAccountPublicID *publicID;
@property (retain) NSArray *loggableDatas;
@property (retain) NSError *failure;
@property unsigned long long uiStatus;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithUri:(id)a0;
- (id)initWithUri:(id)a0 failure:(id)a1;

@end
