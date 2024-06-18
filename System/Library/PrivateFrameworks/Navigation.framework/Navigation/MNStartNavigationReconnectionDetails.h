@class NSArray, NSData;

@interface MNStartNavigationReconnectionDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isReconnecting;
@property (nonatomic) unsigned long long targetLegIndex;
@property (retain, nonatomic) NSArray *spokenAnnouncements;
@property (retain, nonatomic) NSData *serverSessionState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
