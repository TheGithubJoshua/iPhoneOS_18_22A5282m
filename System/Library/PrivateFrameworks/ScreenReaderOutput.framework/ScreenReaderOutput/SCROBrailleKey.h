@class NSString, NSMutableArray;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding> {
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    BOOL _hasRouterInfo;
    id<NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (int)displayMode;
- (void)setDisplayMode:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)keyMasks;
- (void)addKeyMask:(unsigned int)a0;
- (void)addModifierMask:(unsigned int)a0;
- (void)addSpacebarKeyMask;
- (int)displayToken;
- (BOOL)getRouterIndex:(long long *)a0 token:(long long *)a1 location:(long long *)a2 appToken:(id *)a3;
- (void)setDisplayToken:(int)a0;
- (void)setRouterIndex:(long long)a0 token:(long long)a1 location:(long long)a2 appToken:(id)a3;

@end
